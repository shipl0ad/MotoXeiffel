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
			l_font:TEXT_FONT
			l_fontb:TEXT_FONT
		do

			create l_font.make ("font.ttf", 32)
			if l_font.is_openable then
				l_font.open
			end

			create l_fontb.make ("font.ttf", 64)
			if l_fontb.is_openable then
				l_fontb.open
			end

			create l_fond.make
			l_fond.jouer_son
			create l_moto.make
			l_moto.set_x (25)
			l_moto.set_y (660)
			create l_enemi.make
			l_enemi.set_x(1500)
			l_enemi.set_y(630)

			create l_window_builder
			l_window_builder.set_dimension (l_fond.width, l_fond.height)
			l_window_builder.set_title ("MotoX")
			l_window := l_window_builder.generate_window


			game_library.quit_signal_actions.extend (agent on_quit)
			l_window.key_pressed_actions.extend (agent on_key_pressed(?, ?, l_moto))
			l_window.key_released_actions.extend (agent on_key_released(?,?,  l_moto))
			game_library.iteration_actions.extend (agent on_iteration(?, l_moto, l_enemi, l_fond, l_font, l_fontb, l_window))
			game_library.launch

		end


feature {NONE} -- Implementation

	on_iteration(a_timestamp:NATURAL_32; a_moto:MOTO; a_enemi:ENEMI; a_fond:NIVEAU; a_font:TEXT_FONT; a_fontbig:TEXT_FONT a_window:GAME_WINDOW_SURFACED)
			-- Event that is launch at each iteration.
		local

			l_text_gamestart:TEXT_SURFACE_BLENDED
			l_text_highscore:TEXT_SURFACE_BLENDED
			l_text_quit:TEXT_SURFACE_BLENDED
--			l_text_score:TEXT_SURFACE_BLENDED
			l_text_win:TEXT_SURFACE_BLENDED
		do
			-- Draw the scene
			a_window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, a_fond.width, a_fond.height)
			a_window.surface.draw_surface (a_fond, a_fond.x, a_fond.y)

			if not is_started  then

				if not is_over then

					create l_text_gamestart.make ("Press Enter to Start the game", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
							a_window.surface.draw_surface (l_text_gamestart, 700, 735)

					create l_text_quit.make ("Press Escape to quit", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
							a_window.surface.draw_surface (l_text_quit, 1370, 735)

					create l_text_highscore.make ("Press H to see the highscore", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
							a_window.surface.draw_surface (l_text_highscore, 25, 735)
				end
			else
				if a_enemi.is_rip then
					create l_text_win.make ("YOU WIN", a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
														a_window.surface.draw_surface (l_text_win, 100, 500)
				end

				a_moto.update (a_timestamp)

				a_window.surface.draw_sub_surface (
									a_moto.surface, a_moto.sub_image_x, a_moto.sub_image_y,
									a_moto.sub_image_width, a_moto.sub_image_height, a_moto.x, a_moto.y
								)
				if a_moto.bullet.is_fired then
					bullet_fire(a_window, a_moto.bullet)
				end
				collisions_objet(a_moto, a_moto.bullet, a_enemi, a_timestamp)
				if not a_enemi.is_rip then
					a_window.surface.draw_surface (a_enemi, 1500, 630)

--				elseif a_enemi.is_rip then
-- 					ne fonctionne pas
--					pointage := pointage+100
--					print(pointage.out)
--					create l_text_score.make (pointage.out, a_font, create {GAME_COLOR}.make_rgb (0, 0, 0))
--							a_window.surface.draw_surface (l_text_score, 25, 735)
				end






			end

			-- Update modification in the screen
			audio_library.update
			a_window.update
		end


	bullet_fire(a_window:GAME_WINDOW_SURFACED; a_bullet:BULLET)
		do
			if a_bullet.is_fired then
				a_window.surface.draw_surface (a_bullet, a_bullet.x, a_bullet.y)
				a_bullet.x:=a_bullet.x+10
				if a_bullet.x  <= 0 or a_bullet.x >= a_window.width then -- Si une balle es tir�e et se rend � fin de l'image
					a_bullet.done
				end
			end
		end

	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_moto:MOTO)
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
				elseif a_key_state.is_h then
					print("printhighscore")
				elseif a_key_state.is_return then
					print("gamestart")
					is_started := true
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
				end
			end
		end

	collisions_objet(a_moto:MOTO; a_bullet:BULLET; a_enemi:ENEMI; a_timestamp:NATURAL_32)

		-- V�rifie si la moto touche � l'ennemi.
		-- V�rifie si la balle touche � l'ennemi.
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

		end

	is_started: BOOLEAN

	is_over: BOOLEAN

	pointage: INTEGER


end
