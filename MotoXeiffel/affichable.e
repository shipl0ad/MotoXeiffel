note
	description: "Summary description for {AFFICHABLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	AFFICHABLE

create

	make

feature {NONE} -- Initialization

	make

		local

		fenetre:FENETRE

		do
			create fenetre.maker
		end


end
