/* Rebuilt from lomse.exe FUN_00545d90 @ 0x00545d90 (113 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(undefined *)0x005d6b2c)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00545e10 ((uint (__cdecl *)(LPWSTR, byte *, uint))0x00545e10)
#define InterlockedDecrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1f0) /* KERNEL32.DLL!InterlockedDecrement via IAT */
#define InterlockedIncrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1e0) /* KERNEL32.DLL!InterlockedIncrement via IAT */

#define LOM_SELF_00545d90 1
uint __cdecl rb_00545d90(LPWSTR param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_005d6b2c);
  bVar2 = DAT_005d6b28 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_005d6b2c);
    FUN_0053cbb0(0x13);
  }
  uVar1 = FUN_00545e10(param_1,param_2,param_3);
  if (bVar2) {
    FUN_0053cc30(0x13);
    return uVar1;
  }
  InterlockedDecrement((LONG *)&DAT_005d6b2c);
  return uVar1;
}
