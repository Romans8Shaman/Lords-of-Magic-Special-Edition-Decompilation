/* Rebuilt from lomse.exe FUN_00547b90 @ 0x00547b90 (208 bytes, __cdecl). HAND (2026-11-13):
 * CRT _stricmp. C locale (DAT_005d5310 == 0): ASCII A-Z fold, sign-extended -1/0/1.
 * Else lock 0x13 + _tolower_lk (00543b00) on each mismatched pair, then unlock. */
#include "lom.h"

#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(int *)0x005d6b2c)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00543b00 ((uint (__cdecl *)(uint))0x00543b00)

static byte ascii_fold(byte c)
{
  byte t = (byte)(c - 0x41);
  byte adj = (byte)(-(t < 0x1a) & 0x20);
  return (byte)(t + adj + 0x41);
}

#define LOM_SELF_00547b90 1

int __cdecl rb_00547b90(byte *param_1, byte *param_2)
{
  byte al;
  byte ah;
  uint ua;
  uint ub;
  int locked;
  int result;

  if (DAT_005d5310 == 0) {
    al = 0xff;
    for (;;) {
      if (al == 0) {
        return (int)(char)al;
      }
      al = *param_2;
      param_2 = param_2 + 1;
      ah = *param_1;
      param_1 = param_1 + 1;
      if (ah != al) {
        al = ascii_fold(al);
        ah = ascii_fold(ah);
        if (ah != al) {
          return (ah < al) ? -1 : 1;
        }
      }
    }
  }

  DAT_005d6b2c = DAT_005d6b2c + 1;
  locked = (DAT_005d6b28 > 0);
  if (locked) {
    DAT_005d6b2c = DAT_005d6b2c - 1;
    FUN_0053cbb0(0x13);
  }
  ua = 0xff;
  ub = 0;
  for (;;) {
    if ((char)ua == '\0') {
      result = (int)(char)ua;
      break;
    }
    ua = (ua & 0xffffff00) | *param_2;
    param_2 = param_2 + 1;
    ub = (ub & 0xffffff00) | *param_1;
    param_1 = param_1 + 1;
    if ((byte)ua != (byte)ub) {
      ub = FUN_00543b00(ub);
      ua = FUN_00543b00(ua);
      if ((byte)ub != (byte)ua) {
        result = ((byte)ub < (byte)ua) ? -1 : 1;
        break;
      }
    }
  }
  if (locked == 0) {
    DAT_005d6b2c = DAT_005d6b2c - 1;
  } else {
    FUN_0053cc30(0x13);
  }
  return result;
}
