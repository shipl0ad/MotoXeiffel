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
	AUDIO_LIBRARY_SHARED	-- To use `audio_library'
	EXCEPTIONS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			game_library.enable_video -- Enable the video functionalities
			image_file_library.enable_image (true, false, false)  -- Enable PNG image (but not TIF or JPG).
			audio_library.enable_sound
			run_game	  -- Run the core creator of the game.
			audio_library.quit_library
			image_file_library.quit_library  -- Correctly unlink image files library
			game_library.quit_library  -- Clear the library before quitting
		end

	run_game
			-- Create ressources and launch the game
		local
			l_window_builder:GAME_WINDOW_RENDERED_BUILDER
			l_window:GAME_WINDOW_RENDERED
		do
			create l_window_builder
			l_window_builder.set_dimension (800, 600)
			l_window_builder.set_title ("MotoX")
			l_window := l_window_builder.generate_window
			l_window.renderer.set_drawing_color (create {GAME_COLOR}.make_rgb (0, 0, 0))
			l_window.renderer.clear
			l_window.renderer.set_drawing_color (create {GAME_COLOR}.make_rgb (0, 128, 255))

		end


feature {NONE} -- Implementation

	on_quit(a_timestamp: NATURAL_32)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			game_library.stop  -- Stop the controller loop (allow game_library.launch to return)
		end


end
