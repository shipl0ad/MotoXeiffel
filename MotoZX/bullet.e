note
	description: "Summary description for {BULLET}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BULLET

inherit
	AFFICHABLE

create
	create_bullet

feature {NONE} -- Initialization

	create_bullet
		local
			l_image: IMG_IMAGE_FILE
		do
			create l_image.make ("bullet.png")
			l_image.open
			make_from_image (l_image)

		end

end
