note
	description: "Summary description for {GAME_ENGINE}."
	author: "Steve Caya"
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_ENGINE

inherit
	GAME_LIBRARY_SHARED		-- To use `game_library'
	IMG_LIBRARY_SHARED		-- To use `image_file_library'
	AUDIO_LIBRARY_SHARED	-- To use `audio_library'
	TEXT_LIBRARY_SHARED     -- To use `text_library'
	EXCEPTIONS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			game_library.enable_video -- Enable the video functionalities
			image_file_library.enable_image (true, true, false)  -- Enable PNG image (but not TIF or JPG).
			audio_library.enable_sound
			text_library.enable_text


			run_game	  -- Run the core creator of the game.

			game_library.clear_all_events
			text_library.quit_library
			audio_library.quit_library
			image_file_library.quit_library  -- Correctly unlink image files library
			game_library.quit_library  -- Clear the library before quitting
		end

	run_game
			-- Create ressources and launch the game
		local
			l_fond:NIVEAU
			l_window_builder:GAME_WINDOW_SURFACED_BUILDER
			l_window:GAME_WINDOW_SURFACED
			l_moto:MOTO
			l_enemi:ENEMI
			a_font:TEXT_FONT
			l_text_gamestart:TEXT_SURFACE_BLENDED
			l_text_multiplayer:TEXT_SURFACE_BLENDED
			l_text_quit:TEXT_SURFACE_BLENDED
			l_text_win:TEXT_SURFACE_BLENDED
			l_text_host:TEXT_SURFACE_BLENDED
			l_text_connect:TEXT_SURFACE_BLENDED
		do

			create a_font.make ("font.ttf", 32)
			if a_font.is_openable then
				a_font.open
			end
			create l_fond.make
			l_fond.jouer_son
			create l_moto.make
			l_moto.set_x (25)
     		l_moto.set_y (660)
			create l_enemi.make
			l_enemi.set_x(1500)
			l_enemi.set_y(630)
			create l_text_gamestart.make ("Press Enter to Start the game", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
			create l_text_quit.make ("Press Escape to quit", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
			create l_text_multiplayer.make ("Press M to see the multiplayer mode", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
			create l_text_win.make ("YOU WIN", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
			create l_text_host.make ("Host a game(h)", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
			create l_text_connect.make ("Connect to a game(c)", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
			create l_window_builder
			l_window_builder.set_dimension (l_fond.width, l_fond.height)
			l_window_builder.set_title ("MotoX")
			l_window := l_window_builder.generate_window
			game_library.quit_signal_actions.extend (agent on_quit)
			l_window.key_pressed_actions.extend (agent on_key_pressed(?, ?, l_moto, l_enemi))
			l_window.key_released_actions.extend (agent on_key_released(?,?,  l_moto))
			game_library.iteration_actions.extend (agent on_iteration(?, l_moto, l_enemi, l_fond, a_font, l_window, l_text_gamestart, l_text_quit, l_text_multiplayer, l_text_win, l_text_host, l_text_connect))
			game_library.launch

		end


feature {NONE} -- Implementation

	on_iteration(a_timestamp:NATURAL_32; a_moto:MOTO; a_enemi:ENEMI; a_fond:NIVEAU; a_font:TEXT_FONT; a_window:GAME_WINDOW_SURFACED; l_text_gamestart, l_text_quit, l_text_multiplayer, l_text_win, l_text_host, l_text_connect:TEXT_SURFACE_BLENDED)
			-- Event that is launch at each iteration.
		local

			l_text_shot:TEXT_SURFACE_BLENDED

		do

			-- Draw the scene
			a_window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, a_fond.width, a_fond.height)
			a_window.surface.draw_surface (a_fond, a_fond.x, a_fond.y)
			if not is_started  then
				if not is_over then
					a_window.surface.draw_surface (l_text_gamestart, 700, 735)
					a_window.surface.draw_surface (l_text_quit, 1370, 735)
					a_window.surface.draw_surface (l_text_multiplayer, 25, 735)
				end
			if menu_multiplayer then
				a_window.surface.draw_surface (l_text_host, 500, 350)
				a_window.surface.draw_surface (l_text_connect, 800, 350)
			end

			else
				if a_enemi.is_rip then
					a_window.surface.draw_surface (l_text_win, 100, 500)
				end
				a_moto.update (a_timestamp)

				a_window.surface.draw_sub_surface (
									a_moto.surface, a_moto.sub_image_x, a_moto.sub_image_y,
									a_moto.sub_image_width, a_moto.sub_image_height, a_moto.x, a_moto.y
								)
				if a_moto.bullet.is_fired then
					bullet_fire(a_window, a_moto.bullet, a_font)
				end
				create l_text_shot.make ("Nombre de tire :" +shot_tire.out, a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
				a_window.surface.draw_surface (l_text_shot, 1300, 30)

				collisions_objet(a_moto, a_moto.bullet, a_enemi, a_timestamp)
				if not a_enemi.is_rip then
					a_window.surface.draw_surface (a_enemi, 1500, 630)

				end


			end

			-- Update modification in the screen
			audio_library.update
			a_window.update
		end


	bullet_fire(a_window:GAME_WINDOW_SURFACED; a_bullet:BULLET; a_font:TEXT_FONT)
		do
			if a_bullet.is_fired then
				a_window.surface.draw_surface (a_bullet, a_bullet.x, a_bullet.y)
				a_bullet.x:=a_bullet.x+10
				if a_bullet.x  <= 0 or a_bullet.x >= a_window.width then -- Si une balle es tirée et se rend à fin de l'image
					a_bullet.done
				end
			end
		end

	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_moto:MOTO; a_enemi:ENEMI)
			-- Action when a keyboard key has been pushed
		do
			if not a_key_state.is_repeat then		-- Be sure that the event is not only an automatic repetition of the key
				if a_key_state.is_right then
					a_moto.go_right(a_timestamp)
				elseif a_key_state.is_left then
					a_moto.go_left(a_timestamp)
				elseif a_key_state.is_escape then
					print("gamequit")
					on_quit(a_timestamp)
				elseif a_key_state.is_m then
					menu_multiplayer:=true
				elseif a_key_state.is_return then
					print("gamestart")
					is_started := true
				elseif a_key_state.is_r then
					reset_game(a_moto, a_enemi)
				elseif a_key_state.is_h then
--
				elseif a_key_state.is_c then
--
				elseif a_key_state.is_space then
					a_moto.bullet.fire(a_moto.x)
				end
			end

		end

	on_key_released(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_moto:MOTO)
			-- Action when a keyboard key has been released
		do
			if not a_key_state.is_repeat then		-- I don't know if a key release can repeat, but you never know...
				if a_key_state.is_right then
					a_moto.stop_right
				elseif a_key_state.is_left then
					a_moto.stop_left
				elseif a_key_state.is_space then
					shot_tire:=shot_tire+1
				end
			end
		end

	collisions_objet(a_moto:MOTO; a_bullet:BULLET; a_enemi:ENEMI; a_timestamp:NATURAL_32)

		-- Vérifie si la moto touche à l'ennemi.
		-- Vérifie si la balle touche à l'ennemi.
		do
			if a_bullet.y + a_bullet.height >= a_enemi.y and a_bullet.x <= a_enemi.x + a_enemi.width
																and a_bullet.x + a_bullet.width >= a_enemi.x and not a_enemi.is_rip then
				a_enemi.set_is_rip (true)
				a_bullet.done
			end

			if a_moto.y + a_moto.height >= a_enemi.y and a_moto.x <= a_enemi.x + a_enemi.width
																and a_moto.x - 10 + a_moto.width //3 >= a_enemi.x and not a_enemi.is_rip then
				a_moto.set_is_rip (true)
				is_started:=false
				is_over:= true
				reset_game(a_moto, a_enemi)

			end

		end


	on_quit(a_timestamp: NATURAL_32)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			game_library.stop  -- Stop the controller loop (allow game_library.launch to return)
		end


	reset_game(a_moto:MOTO; a_enemi:ENEMI)
		do
			is_over:=false
			a_moto.set_is_rip (false)
			a_moto.set_x (100)
			a_enemi.set_is_rip (false)
			a_enemi.set_x (1500)
			a_moto.bullet.done
			shot_tire:= 0

		end

	-- server

--	setup_serveur
--			-- Exécution du programme serveur
--		local
--			l_socket: NETWORK_DATAGRAM_SOCKET
--		do
--			create l_socket.make_bound (12345)
--			read_and_write(l_socket, io.output)
--		end

--	setup_client
--			-- Exécution du programme client
--		local

--		do

--		end


	is_started: BOOLEAN

	is_over: BOOLEAN

	menu_multiplayer: BOOLEAN

	pointage: INTEGER

	shot_tire : INTEGER






end
