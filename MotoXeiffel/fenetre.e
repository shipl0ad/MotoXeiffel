note
	description: "Summary description for {FENETRE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FENETRE

inherit

	AFFICHABLE

create
	make

feature {NONE} -- Initialization

	fenetre:GAME_WINDOW_RENDERED_BUILDER

	make
			-- Initialization for `Current'.
		do
			l_window_builder.set_dimension (1024, 512)
			l_window_builder.set_title ("Example Animation")
			l_window := l_window_builder.generate_window
			l_window.renderer.set_drawing_color (create {GAME_COLOR}.make_rgb (0, 0, 0))
			l_window.renderer.clear
			l_window.renderer.set_drawing_color (create {GAME_COLOR}.make_rgb (0, 128, 255))
		end

end
