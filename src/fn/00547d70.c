/* Rebuilt from lomse.exe FUN_00547d70 @ 0x00547d70 (113 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(undefined *)0x005d6b2c)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00547df0 ((uint (__cdecl *)(LPSTR, LPCWSTR, uint))0x00547df0)
#define InterlockedDecrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1f0) /* KERNEL32.DLL!InterlockedDecrement via IAT */
#define InterlockedIncrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1e0) /* KERNEL32.DLL!InterlockedIncrement via IAT */

#define LOM_SELF_00547d70 1
uint __cdecl rb_00547d70(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_005d6b2c);
  bVar2 = DAT_005d6b28 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_005d6b2c);
    FUN_0053cbb0(0x13);
  }
  uVar1 = FUN_00547df0(param_1,param_2,param_3);
  if (bVar2) {
    FUN_0053cc30(0x13);
    return uVar1;
  }
  InterlockedDecrement((LONG *)&DAT_005d6b2c);
  return uVar1;
}
