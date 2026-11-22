/* Rebuilt from lomse.exe FUN_00547c60 @ 0x00547c60 (257 bytes, __cdecl). HAND (2026-11-13):
 * CRT _strnicmp: compare up to param_3 chars, stop at NUL. n==0 -> 0.
 * C locale: ASCII A-Z + 0x20; NUL path compares unfolded last bytes.
 * Else lock 0x13 + _tolower_lk on every nonzero pair (even if raw bytes match). */
#include "lom.h"

#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(int *)0x005d6b2c)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00543b00 ((uint (__cdecl *)(uint))0x00543b00)

#define LOM_SELF_00547c60 1

int __cdecl rb_00547c60(byte *param_1, byte *param_2, int param_3)
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
    for (;;) {
      ah = *param_1;
      al = *param_2;
      if (ah == 0) {
        break;
      }
      if (al == 0) {
        break;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((ah >= 0x41) && (ah <= 0x5a)) {
        ah = (byte)(ah + 0x20);
      }
      if ((al >= 0x41) && (al <= 0x5a)) {
        al = (byte)(al + 0x20);
      }
      if (ah != al) {
        return (ah < al) ? -1 : 1;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        break;
      }
    }
    if (ah == al) {
      return 0;
    }
    return (ah < al) ? -1 : 1;
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
    ub = (ub & 0xffffff00) | *param_2;
    if ((ua == 0) || (ub == 0)) {
      break;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    ub = FUN_00543b00(ub);
    ua = FUN_00543b00(ua);
    if (ua != ub) {
      result = (ua < ub) ? -1 : 1;
      goto done;
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  if (ua != ub) {
    result = (ua < ub) ? -1 : 1;
  }
done:
  if (locked == 0) {
    DAT_005d6b2c = DAT_005d6b2c - 1;
  } else {
    FUN_0053cc30(0x13);
  }
  return result;
}
