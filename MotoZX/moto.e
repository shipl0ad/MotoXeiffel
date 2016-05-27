note
	description: "[
					Our main character.
					Using animation with 4 states using 3 sub images
				]"
	author: "Steve Caya"
	date: "Wed, 01 Apr 2015 18:46:46 +0000"
	revision: "2.0"

class
	MOTO

inherit
	AFFICHABLE

create
	make

feature {NONE} -- Initialization

	make
		-- Initialization of `Current'
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make ("3motopetitefusil.png")
			if l_image.is_openable then
				l_image.open
				create bullet.make
				if l_image.is_open then
					create right_surface.make_from_image (l_image)
					create {GAME_SURFACE_ROTATE_ZOOM} left_surface.make_zoom_x_y (right_surface, -1, 1, True)
					sub_image_width := right_surface.width // 3
					sub_image_height := right_surface.height
				else
					create right_surface.make(1,1)
					left_surface := right_surface
				end
			else
				create right_surface.make(1,1)
				left_surface := right_surface
			end
			surface := right_surface
			initialize_animation_coordinate
		end

	initialize_animation_coordinate
			-- Create the `animation_coordinates'
		do
			create {ARRAYED_LIST[TUPLE[x,y:INTEGER]]} animation_coordinates.make(4)
			animation_coordinates.extend ([surface.width // 3, 0])	-- Be sure to place the image standing still first
			animation_coordinates.extend ([0, 0])
			animation_coordinates.extend ([(surface.width // 3) * 2, 0])
			animation_coordinates.extend ([0, 0])
		end

feature -- Access

		update(a_timestamp:NATURAL_32)
			-- Update the surface depending on the present `a_timestamp'.
			-- Each 100 ms, the image change; each 10ms `Current' is moving
		local
			l_coordinate:TUPLE[x,y:INTEGER]
			l_delta_time:NATURAL_32
		do
			if going_left or going_right then
				l_coordinate := animation_coordinates.at ((((a_timestamp // animation_delta) \\
												animation_coordinates.count.to_natural_32) + 1).to_integer_32)
				sub_image_x := l_coordinate.x
				sub_image_y := l_coordinate.y
				l_delta_time := a_timestamp - old_timestamp
				if l_delta_time // movement_delta > 0 then
					if going_right then
						surface := right_surface
						x := x + (l_delta_time // movement_delta).to_integer_32
					else
						surface := left_surface
						x := x - (l_delta_time // movement_delta).to_integer_32
					end
					old_timestamp := old_timestamp + (l_delta_time // movement_delta) * movement_delta
				end
			end
		end


	go_right(a_timestamp:NATURAL_32)
		do
			old_timestamp := a_timestamp
			going_right:= true
		end

	go_left(a_timestamp:NATURAL_32)
		do
			old_timestamp := a_timestamp
			going_left:= true
		end

	stop_right
		do
			going_right := False
			if not going_left then
				sub_image_x := animation_coordinates.first.x	-- Place the image standing still
				sub_image_y := animation_coordinates.first.y	-- Place the image standing still
			end
		end

	stop_left
		do
			going_left := False
			if not going_right then
				sub_image_x := animation_coordinates.first.x	-- Place the image standing still
				sub_image_y := animation_coordinates.first.y	-- Place the image standing still
			end
		end

	is_rip:BOOLEAN assign set_is_rip

	set_is_rip(a_is_rip:BOOLEAN)
		do
			is_rip := a_is_rip
		end

	going_right:BOOLEAN

	going_left:BOOLEAN

	animation:ARRAYED_LIST[INTEGER]

	surface:GAME_SURFACE

	sub_image_x, sub_image_y:INTEGER
			-- Position of the portion of image to show inside `surface'

	sub_image_width, sub_image_height:INTEGER
			-- Dimension of the portion of image to show inside `surface'

	bullet:BULLET

	feature {NONE} -- implementation

		animation_coordinates:LIST[TUPLE[x,y:INTEGER]]
				-- Every coordinate of portion of images in `surface'

		old_timestamp:NATURAL_32
				-- When appen the last movement (considering `movement_delta')

	feature {NONE} -- constants

		movement_delta:NATURAL_32 = 1
				-- The delta time between each movement of `Current'

		animation_delta:NATURAL_32 = 5
				-- The delta time between each animation of `Current'

		right_surface:GAME_SURFACE

		left_surface:GAME_SURFACE


end
