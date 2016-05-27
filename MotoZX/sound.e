note
	description: "Summary description for {SOUND}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SOUND

inherit
	AUDIO_LIBRARY_SHARED	-- To use `audio_library'
	EXCEPTIONS

feature {NONE} -- Initialization

	jouer_son
	do
		-- Gun will have a sound when it fire
		-- Game will have Brainpower playing will running
	end

	sound_source:AUDIO_SOURCE
	l_sound:AUDIO_SOUND_FILE
end



