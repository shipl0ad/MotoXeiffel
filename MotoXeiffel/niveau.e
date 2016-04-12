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
			create l_image.make ("backgr2.png")
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

feature -- Access

	bg_move_left
			-- Change the image to draw by moving the drawing area to the left.
		do
			sub_texture_x:=sub_texture_x+velocity
		end

	bg_move_right
			-- Change the image to draw by moving the drawing area to the riht.
		do
			sub_texture_x:=sub_texture_x-velocity
		end

	bg_move_up
			-- Change the image to draw by moving up the drawing area.
		do
			sub_texture_y:=sub_texture_y+velocity
		end

	bg_move_down
			-- Change the image to draw by moving down the drawing area.
		do
			sub_texture_y:=sub_texture_y-velocity
		end

	velocity:INTEGER
			-- The speed of the {BACKGROUND} movement.

	set_velocity(a_velocity:INTEGER)
			-- Change the speed of the {BACKGROUND} movement `velocity' to `a_velocity'.
		require
			Velocity_Is_Positive: a_velocity>0
		do
			velocity:=a_velocity
		end


end

