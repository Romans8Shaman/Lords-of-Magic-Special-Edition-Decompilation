/* Rebuilt from lomse.exe FUN_00543a70 @ 0x00543a70 (130 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(undefined *)0x005d6b2c)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00543b00 ((uint (__cdecl *)(uint))0x00543b00)
#define InterlockedDecrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1f0) /* KERNEL32.DLL!InterlockedDecrement via IAT */
#define InterlockedIncrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1e0) /* KERNEL32.DLL!InterlockedIncrement via IAT */

#define LOM_SELF_00543a70 1
uint __cdecl rb_00543a70(uint param_1)

{
  bool bVar1;
  
  if (DAT_005d5310 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_005d6b2c);
    bVar1 = DAT_005d6b28 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_005d6b2c);
      FUN_0053cbb0(0x13);
    }
    param_1 = FUN_00543b00(param_1);
    if (bVar1) {
      FUN_0053cc30(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_005d6b2c);
  }
  return param_1;
}
