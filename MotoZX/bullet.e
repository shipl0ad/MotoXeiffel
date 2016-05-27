note
	description: "Summary description for {BULLET}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BULLET

inherit
	AFFICHABLE
	SOUND
		redefine
			jouer_son
		end
create
	make

feature
	make
			--Constructeur de `Current'
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make ("bullet.png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
					is_fired:=false
					y:= 655
				else
					make_surface(1,1)
				end
			else
				make_surface(1,1)
			end

			create l_sound.make("gunshot.ogg")
			if l_sound.is_openable then
				l_sound.open
				if l_sound.is_open then
					audio_library.sources_add
					sound_source:=audio_library.last_source_added-- The first source will be use for playing the music
				else

					die(1)
				end
			else
				die(1)
			end
		end

	fire(a_x:INTEGER)
			--Rend la flèche "tirée" à la position "x" envoyée en argument.
			--Joue aussi un son quand une balle es tirée
		do
			is_fired:=true
			x:= a_x
			jouer_son
		end

	done
			--Réinitialise la balles
		do
			is_fired:=false
			current.set_y (655)
		end

	jouer_son
		--Réinitialise le son et le joue
		do
			sound_source.stop
			l_sound.restart
			sound_source.queue_sound (l_sound)
			sound_source.play
		end

	is_fired:BOOLEAN
			--Attribut qui détermine si la flèche est lancée

end
