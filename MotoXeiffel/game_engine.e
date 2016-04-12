note
	description: "Summary description for {GAME_ENGINE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_ENGINE

inherit
	GAME_LIBRARY_SHARED		-- To use `game_library'
	IMG_LIBRARY_SHARED		-- To use `image_file_library'

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			game_library.enable_video -- Enable the video functionalities
			image_file_library.enable_image (true, false, false)  -- Enable PNG image (but not TIF or JPG).
			run_game  -- Run the core creator of the game.
			image_file_library.quit_library  -- Correctly unlink image files library
			game_library.quit_library  -- Clear the library before quitting
		end

	run_game
			-- Create ressources and launch the game
		local
			l_window_builder:GAME_WINDOW_RENDERED_BUILDER
			l_niveau:NIVEAU
			l_moto:MOTO
			l_window:GAME_WINDOW_RENDERED
		do
			create l_window_builder
			l_window_builder.set_dimension (800, 600)
			l_window_builder.set_title ("MotoX")
			l_window := l_window_builder.generate_window
			l_window.renderer.set_drawing_color (create {GAME_COLOR}.make_rgb (0, 0, 0))
			l_window.renderer.clear
			l_window.renderer.set_drawing_color (create {GAME_COLOR}.make_rgb (0, 128, 255))
			create l_niveau.make (l_window.renderer)
			if not l_niveau.has_error then
				create l_moto.make (l_window.renderer)
				l_moto.y := 300
				l_moto.x := 200
				if not l_moto.has_error then
					game_library.quit_signal_actions.extend (agent on_quit)
						l_window.key_pressed_actions.extend (agent on_key_pressed(?, ?, l_moto))
						l_window.key_released_actions.extend (agent on_key_released(?,?,  l_moto))
						game_library.iteration_actions.extend (agent on_iteration(?, l_moto, l_niveau, l_window.renderer))
						game_library.launch

				else
					print("Cannot create the Moto surface.")
				end


			else
				print("Cannot create the desert surface.")
			end

		end


feature {NONE} -- Implementation

	on_iteration(a_timestamp:NATURAL_32; a_moto:MOTO; a_niveau:GAME_TEXTURE; l_renderer:GAME_RENDERER)
			-- Event that is launch at each iteration.
		do
			a_moto.update (a_timestamp)

			if a_moto.x < 0 then
				a_moto.x := 0
			elseif a_moto.x + a_moto.sub_image_width > a_niveau.width then
				a_moto.x := a_niveau.width - a_moto.sub_image_width
			end

			-- Draw the scene
			l_renderer.set_drawing_color (create {GAME_COLOR}.make_rgb (0, 128, 255))
			l_renderer.draw_filled_rectangle (0, 0, a_niveau.width, a_niveau.height)

			l_renderer.draw_texture (a_niveau, 0, 0)
			l_renderer.draw_sub_texture_with_scale_rotation_and_mirror (a_moto,  a_moto.sub_image_x, a_moto.sub_image_y, a_moto.sub_image_width, a_moto.sub_image_height,
																		a_moto.x, a_moto.y, a_moto.sub_image_width, a_moto.sub_image_height, 0, 0, 0, False, a_moto.facing_left)

			-- Update modification in the screen
			l_renderer.present

		end


	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_moto:MOTO)
			-- Action when a keyboard key has been pushed
		do
			if not a_key_state.is_repeat then		-- Be sure that the event is not only an automatic repetition of the key
				if a_key_state.is_right then
					a_moto.go_right(a_timestamp)
				elseif a_key_state.is_left then
					a_moto.go_left(a_timestamp)
				elseif a_key_state.is_up then
					a_moto.go_up(a_timestamp)
				elseif a_key_state.is_down then
					a_moto.go_down(a_timestamp)
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
				elseif a_key_state.is_up then
					a_moto.stop_up
				elseif a_key_state.is_down then
					a_moto.stop_down
				end
			end
		end

	on_quit(a_timestamp: NATURAL_32)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			game_library.stop  -- Stop the controller loop (allow game_library.launch to return)
		end


end
