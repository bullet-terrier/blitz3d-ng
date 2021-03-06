// AUTOGENERATED. DO NOT EDIT.
// RUN `bin/blitz3d config` TO UPDATE.

#include <bb/blitz/module.h>
#include <bb/audio/audio.h>

#ifdef WIN32
BBMODULE_LINK( audio ){
	rtSym( "ChannelPan%channel#pan",bbChannelPan );
	rtSym( "ChannelPitch%channel%pitch",bbChannelPitch );
	rtSym( "%ChannelPlaying%channel",bbChannelPlaying );
	rtSym( "ChannelVolume%channel#volume",bbChannelVolume );
	rtSym( "FreeSound%sound",bbFreeSound );
	rtSym( "%Load3DSound$filename",bbLoad3DSound );
	rtSym( "%LoadSound$filename",bbLoadSound );
	rtSym( "LoopSound%sound",bbLoopSound );
	rtSym( "PauseChannel%channel",bbPauseChannel );
	rtSym( "%PlayCDTrack%track%mode=1",bbPlayCDTrack );
	rtSym( "%PlayMusic$filename",bbPlayMusic );
	rtSym( "%PlaySound%sound%sound",bbPlaySound );
	rtSym( "ResumeChannel%channel",bbResumeChannel );
	rtSym( "SoundPan%sound#pan",bbSoundPan );
	rtSym( "SoundPitch%sound%pitch",bbSoundPitch );
	rtSym( "SoundVolume%sound#volume",bbSoundVolume );
	rtSym( "StopChannel%channel",bbStopChannel );
}
#endif
