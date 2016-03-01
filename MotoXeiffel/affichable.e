note
	description: "Summary description for {AFFICHABLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	AFFICHABLE

inherit
	GAME_ENGINE

create

	make_affichable

feature {NONE} -- Initialization

	make_affichable

		local

			l_moto:MOTO
			l_window:GAME_WINDOW_RENDERED

		do
			create l_moto.make (l_window.renderer)
				l_moto.y := 150
				l_moto.x := 200

		end

end
