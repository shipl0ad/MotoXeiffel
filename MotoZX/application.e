note
	description : "MOTOZX application root class"
	author: "Steve Caya"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make

		local

		engine:GAME_ENGINE

		do
			--| Add your code here
			create engine.make
		end

end
