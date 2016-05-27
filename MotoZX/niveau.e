note
	description: "Summary description for {NIVEAU}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIVEAU

inherit
	AFFICHABLE
	SOUND
		redefine
			jouer_son
		end

create
	make

feature {NONE} -- Initialization

	make
		local
			l_image: IMG_IMAGE_FILE
		do
			create l_image.make ("fond3.png")
			l_image.open
			make_from_image (l_image)

			create l_sound.make("brainpower.flac")
			if l_sound.is_openable then
				l_sound.open
				if l_sound.is_open then
					audio_library.sources_add
					sound_source:=audio_library.last_source_added-- The first source will be use for playing the music
					sound_source.queue_sound_infinite_loop(l_sound)
				else

					die(1)
				end
			else
				die(1)
			end
		end

feature

	jouer_son
	do
		print("Brainpower Par Nova")
		sound_source.play
	end
end
