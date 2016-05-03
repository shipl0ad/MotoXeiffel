note
	description: "Summary description for {NIVEAU}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIVEAU

inherit
	AFFICHABLE
	MUSIQUE
		redefine
			jouer_musique
		end

create
	make

feature {NONE} -- Initialization

	make
		local
			l_image: IMG_IMAGE_FILE
		do
			create l_image.make ("fond.png")
			l_image.open
			make_from_image (l_image)

			create l_music.make("brainpower.flac")
			if l_music.is_openable then
				l_music.open
				if l_music.is_open then
					audio_library.sources_add
					music_source:=audio_library.last_source_added	-- The first source will be use for playing the music
					music_source.queue_sound_infinite_loop(l_music)
				else
					print("Cannot open music files.")
					die(1)
				end
			else
				print("Music files not valid.")
				die(1)
			end
		end

jouer_musique
	do
		music_source.play					-- Play the source
	end



end
