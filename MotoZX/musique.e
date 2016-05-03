note
	description: "Summary description for {MUSIQUE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	MUSIQUE

inherit
	AUDIO_LIBRARY_SHARED	-- To use `audio_library'
	EXCEPTIONS

feature {NONE} -- Initialization

	jouer_musique
	do
		-- Background will have a song to play
	end

	l_music:AUDIO_SOUND_FILE
	music_source:AUDIO_SOURCE
end


