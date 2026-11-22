
void __thiscall FUN_004b40b0(void *this,int param_1)

{
  undefined *puVar1;
  
  if (*(int *)((int)this + 0x13b4) != 0) {
    if (*(int *)((int)this + 0xfb0) != 0) {
      FUN_004b3680(this,s_wav_music_m_life_wav_0055ce68);
      return;
    }
    DAT_0055ce64 = 1 - DAT_0055ce64;
    if ((param_1 < 0) || (0xf < param_1)) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = &DAT_005af194 + param_1 * 0x1d84;
    }
    if (puVar1 != (undefined *)0x0) {
      switch(*(undefined4 *)(puVar1 + 0x15b0)) {
      case 0:
      case 6:
        if (DAT_0055ce64 == 0) {
          FUN_004b3620(this,s_wav_music_m_earth_wav_0055cf98,0);
          return;
        }
        FUN_004b3620(this,s_wav_music_m_life_wav_0055ce68,0);
        return;
      case 1:
      case 4:
        if (DAT_0055ce64 == 0) {
          FUN_004b3620(this,s_wav_music_m_fire_wav_0055cf80,0);
          return;
        }
        FUN_004b3620(this,s_wav_music_m_death_wav_0055cf68,0);
        return;
      case 2:
      case 3:
        if (DAT_0055ce64 == 0) {
          FUN_004b3620(this,s_wav_music_m_order_wav_0055cf50,0);
          return;
        }
        FUN_004b3620(this,s_wav_music_m_chaos_wav_0055cf38,0);
        return;
      case 5:
      case 7:
        if (DAT_0055ce64 == 0) {
          FUN_004b3620(this,s_wav_music_m_air_wav_0055cf24,0);
          return;
        }
        FUN_004b3620(this,s_wav_music_m_water_wav_0055cf0c,0);
      }
    }
  }
  return;
}


