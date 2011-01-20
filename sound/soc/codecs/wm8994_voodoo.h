/*
 * wm8994.h  --  WM8994 Soc Audio driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

void voodoo_hook_fmradio_headset(void);
unsigned int voodoo_hook_wm8994_write(struct snd_soc_codec *codec, unsigned int reg, unsigned int value);
void voodoo_hook_wm8994_pcm_probe(struct snd_soc_codec *codec);
void voodoo_hook_record_main_mic(void);
void voodoo_hook_playback_headset(void);
void update_hpvol(void);
void update_fm_radio_headset_restore_bass(bool with_mute);
void update_recording_preset(void);
void update_full_bitwidth(bool with_mute);
void update_dac_osr128(void);
