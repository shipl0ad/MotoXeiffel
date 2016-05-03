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
		-- Moto will have a sound when it run
		-- Bullet will have a sound when it fired
	end

	l_sound:AUDIO_SOUND_FILE
	sound_source:AUDIO_SOURCE
end



