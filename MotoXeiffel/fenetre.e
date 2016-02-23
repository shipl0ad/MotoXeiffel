note
	description: "Summary description for {FENETRE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FENETRE

inherit

	AFFICHABLE
	GAME_TEXTURE
		rename
			make as make_texture
		end


create
	maker

feature {NONE} -- Initialization

	fenetre:GAME_WINDOW_RENDERED_BUILDER
	l_window_builder:GAME_WINDOW_RENDERED_BUILDER
	l_window:GAME_WINDOW_RENDERED


	maker
			-- Initialization for `Current'.
		do
			l_window_builder.set_dimension (1024, 512)
			l_window_builder.set_title ("MotoX")
			l_window := l_window_builder.generate_window


			l_window.renderer.present

		end

--feature {NONE} -- Initialization

--	makebg(a_renderer:GAME_RENDERER)
--		local
--			l_image: IMG_IMAGE_FILE
--		do
--			create l_image.make ("desert.png")
--			if l_image.is_openable then
--				l_image.open
--				if l_image.is_open then
--					make_from_image (a_renderer, l_image)
--				else
--					has_error := True
--				end
--			else
--				has_error := True
--			end
--		end
end
