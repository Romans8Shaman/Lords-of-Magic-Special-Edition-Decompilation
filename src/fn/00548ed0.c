/* Rebuilt from lomse.exe FUN_00548ed0 @ 0x00548ed0 (241 bytes, __cdecl). HAND (2026-11-13):
 * CRT _memicmp: compare param_3 bytes, case-insensitive, no NUL stop. n==0 -> 0.
 * C locale: ASCII A-Z + 0x20. Else lock 0x13 + _tolower_lk (00543b00) only on mismatches. */
#include "lom.h"

#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(int *)0x005d6b2c)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00543b00 ((uint (__cdecl *)(uint))0x00543b00)

#define LOM_SELF_00548ed0 1

int __cdecl rb_00548ed0(byte *param_1, byte *param_2, int param_3)
{
  byte ah;
  byte al;
  uint ua;
  uint ub;
  int locked;
  int result;

  if (param_3 == 0) {
    return 0;
  }
  if (DAT_005d5310 == 0) {
    do {
      ah = *param_1;
      param_1 = param_1 + 1;
      al = *param_2;
      param_2 = param_2 + 1;
      if (ah != al) {
        if ((ah >= 0x41) && (ah <= 0x5a)) {
          ah = (byte)(ah + 0x20);
        }
        if ((al >= 0x41) && (al <= 0x5a)) {
          al = (byte)(al + 0x20);
        }
        if (ah != al) {
          return (ah < al) ? -1 : 1;
        }
      }
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return 0;
  }

  DAT_005d6b2c = DAT_005d6b2c + 1;
  locked = (DAT_005d6b28 > 0);
  if (locked) {
    DAT_005d6b2c = DAT_005d6b2c - 1;
    FUN_0053cbb0(0x13);
  }
  ua = 0;
  ub = 0;
  result = 0;
  do {
    ua = (ua & 0xffffff00) | *param_1;
    param_1 = param_1 + 1;
    ub = (ub & 0xffffff00) | *param_2;
    param_2 = param_2 + 1;
    if ((byte)ua != (byte)ub) {
      ub = FUN_00543b00(ub);
      ua = FUN_00543b00(ua);
      if ((byte)ua != (byte)ub) {
        result = ((byte)ua < (byte)ub) ? -1 : 1;
        break;
      }
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  if (locked == 0) {
    DAT_005d6b2c = DAT_005d6b2c - 1;
  } else {
    FUN_0053cc30(0x13);
  }
  return result;
}
