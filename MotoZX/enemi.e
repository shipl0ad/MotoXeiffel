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
	make

feature
	make
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make("orc.png")
			l_image.open
			make_from_image (l_image)
			is_rip := false
		end


	is_rip:BOOLEAN assign set_is_rip

	set_is_rip(a_is_rip:BOOLEAN)
		do
			is_rip := a_is_rip
		end


end
