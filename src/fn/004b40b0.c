/* Rebuilt from lomse.exe FUN_004b40b0 @ 0x004b40b0 (265 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055ce64 (*(int *)0x0055ce64)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004b3620 ((bool (__thiscall *)(void *, LPCSTR, int))0x004b3620)
#define FUN_004b3680 ((bool (__thiscall *)(void *, LPCSTR))0x004b3680)
#define s_wav_music_m_air_wav_0055cf24 (*(char (*)[])0x0055cf24)
#define s_wav_music_m_chaos_wav_0055cf38 (*(char (*)[])0x0055cf38)
#define s_wav_music_m_death_wav_0055cf68 (*(char (*)[])0x0055cf68)
#define s_wav_music_m_earth_wav_0055cf98 (*(char (*)[])0x0055cf98)
#define s_wav_music_m_fire_wav_0055cf80 (*(char (*)[])0x0055cf80)
#define s_wav_music_m_life_wav_0055ce68 (*(char (*)[])0x0055ce68)
#define s_wav_music_m_order_wav_0055cf50 (*(char (*)[])0x0055cf50)
#define s_wav_music_m_water_wav_0055cf0c (*(char (*)[])0x0055cf0c)

#define LOM_SELF_004b40b0 1
void __thiscall rb_004b40b0(void *this,int param_1)

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
