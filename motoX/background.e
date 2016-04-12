note
	description: "[
					The {BACKGROUND} of the game.
					Only a part of the {BACKGROUND} is show on the screen.
			]"
	author		: "Louis Marchand"
	date        : "Tue, 22 Mar 2016 13:41:42 +0000"
	revision    : "0.2"

class
	BACKGROUND

inherit
	IMAGE
		redefine
			make
		end

create
	make

feature {NONE} -- Itrialnitialisation

	make(a_renderer:GAME_RENDERER)
			-- <Precursor>
		do
			Precursor(a_renderer)
			width := a_renderer.output_size.width
			height := a_renderer.output_size.height
			set_velocity(10)
		end

	image_file_name:STRING
			-- The image file path.
		do
			Result:="bk2.png"
		end

feature -- Access

	move_left
			-- Change the image to draw by moving the drawing area to the left.
		do
			sub_texture_x:=sub_texture_x+velocity
		end

	move_right
			-- Change the image to draw by moving the drawing area to the riht.
		do
			sub_texture_x:=sub_texture_x-velocity
		end

	move_up
			-- Change the image to draw by moving up the drawing area.
		do
			sub_texture_y:=sub_texture_y+velocity
		end

	move_down
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
