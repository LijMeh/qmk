#pragma once

#ifdef AUDIO_ENABLE
#define STARTUP_SONG SONG(PLANCK_SOUND)

#define MIDI_BASIC

#define ENCODER_RESOLUTION 4
#endif

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define USB_SUSPEND_WAKEUP_DELAY 0

/*
  These are the ones that I added
*/
  
#define MK_3_SPEED

#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 24

#define MK_C_OFFSET_1 8

#define TAPPING_TERM 200

#undef AUDIO_CLICKY

