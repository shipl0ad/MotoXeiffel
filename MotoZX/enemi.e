note
	description: "Summary description for {ENEMI}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ENEMI

inherit
	AFFICHABLE

create
	create_enemi

feature {NONE} -- Initialization

	create_enemi
		local
			l_image: IMG_IMAGE_FILE
		do
			create l_image.make ("ENEMI.PNG")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
				else
					has_error := True
					make(1,1)
				end
			else
				has_error := True
				make(1,1)
			end
		end


end
