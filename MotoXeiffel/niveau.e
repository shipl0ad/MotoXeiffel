note
	description: "Summary description for {NIVEAU}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIVEAU
	
inherit
	GAME_TEXTURE
		rename
			make as make_texture
		end

create
	make

feature {NONE} -- Initialization

	make(a_renderer:GAME_RENDERER)
		local
			l_image: IMG_IMAGE_FILE
		do
			create l_image.make ("desert.png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (a_renderer, l_image)
				else
					has_error := True
				end
			else
				has_error := True
			end
		end

end

