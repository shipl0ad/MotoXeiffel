note
	description: "Summary description for {COIN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COIN

inherit
	GAME_LIBRARY_SHARED
		redefine
			default_create
		end

create
	default_create

feature {NONE} -- Initialization

	default_create
			-- Initialization of `Current'
		local
			l_image:IMG_IMAGE_FILE
		do
			has_error := False
			create l_image.make ("coinalpha.jpg")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					create right_surface.make_from_image (l_image)
					create {GAME_SURFACE_ROTATE_ZOOM} left_surface.make_zoom_x_y (right_surface, -1, 1, True)
				else
					has_error := False
					create right_surface.make(1,1)
					left_surface := right_surface
				end
			else
				has_error := False
				create right_surface.make(1,1)
				left_surface := right_surface
			end
			surface := right_surface
			is_dirty := True
		end


feature -- Access

	has_error:BOOLEAN
			-- Is an error happen when initializing the `surface'

	update(a_timestamp:NATURAL_32)
			-- Update the surface depending on the present `a_timestamp'.
			-- Each 100 ms, the image change; each 10ms `Current' is moving
		local
			l_coordinate:TUPLE[x,y:INTEGER]
			l_delta_time:NATURAL_32
		do
			x := x - (l_delta_time // movement_delta).to_integer_32
			old_timestamp := old_timestamp + (l_delta_time // movement_delta) * movement_delta
			is_dirty := True
			
		end

	x:INTEGER assign set_x
			-- Vertical position of `Current'

	y:INTEGER assign set_y
			-- Horizontal position of `Current'

	set_x(a_x:INTEGER)
			-- Assign the value of `x' with `a_x'
		do
			x := a_x
		ensure
			Is_Assign: x = a_x
		end

	set_y(a_y:INTEGER)
			-- Assign the value of `y' with `a_y'
		do
			y := a_y
		ensure
			Is_Assign: y = a_y
		end

	surface:GAME_SURFACE
			-- The surface to use when drawing `Current'

	is_dirty:BOOLEAN
			-- If True, `Current' has been modified and have to be redraw.

	unset_dirty
			-- `Current's modification have been managed so set `is_dirty' to False
		do
			is_dirty := False
		end

feature {NONE} -- implementation

	old_timestamp:NATURAL_32
			-- When appen the last movement (considering `movement_delta')

feature {NONE} -- constants

	movement_delta:NATURAL_32 = 5
			-- The delta time between each movement of `Current'

	left_surface:GAME_SURFACE

	right_surface:GAME_SURFACE

end
