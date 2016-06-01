note
	description: "project application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			l_socket: NETWORK_DATAGRAM_SOCKET
			l_port:INTEGER
			l_taille_message:INTEGER
			l_message:STRING
		do

			create pointage.make_with_name ("pointage.txt")
			pointage_read
			l_port:=12345
			create l_socket.make_bound (l_port)
			l_socket.read_integer
			l_taille_message:=l_socket.last_integer
			l_socket.read_stream (l_taille_message)
			l_message:=l_socket.last_string
--			add_pointage(l_message)
			io.put_string (l_message)
			io.put_new_line
			l_socket.close
		end


		pointage_read
		do
			plus_gros:=0
			pointage.open_read
			from
			until
				pointage.end_of_file
			loop
				pointage.read_line
				pointage_lu:= pointage.last_string

			end
			pointage.close
		end

		add_pointage (a_pointage: STRING)
			-- Ajoute un nouveau pointage au fichier

		do
			pointage.open_read_append
			pointage.put_string ("%N" + a_pointage)
			pointage.close
		end


		pointage:PLAIN_TEXT_FILE

		pointage_lu:STRING

		plus_gros:INTEGER

end
