#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode < 0xFF)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#undef MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose	
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2


#define MK_3_SPEED

/*  These are for tap to select mouse movements
#define MK_C_OFFSET_1 8

#define MK_C_OFFSET_2 24
*/

#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 32 /* was 24*/

#define MK_C_OFFSET_1 8

#define TAPPING_TERM 200

#undef AUDIO_CLICKY

#define COMBO_COUNT 1
