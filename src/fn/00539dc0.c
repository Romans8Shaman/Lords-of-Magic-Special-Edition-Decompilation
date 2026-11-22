/* Rebuilt from lomse.exe FUN_00539dc0 @ 0x00539dc0 (143 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6b30 (*(int * *)0x005d6b30)
#define DAT_005d6b34 (*(int * *)0x005d6b34)
#define FUN_0053f320 ((undefined4 (__stdcall *)(void))0x0053f320)
#define FUN_0053f330 ((undefined4 (__stdcall *)(void))0x0053f330)
#define FUN_0053f360 ((int * (__cdecl *)(int *, uint))0x0053f360)
#define FUN_0053f510 ((SIZE_T (__cdecl *)(undefined *))0x0053f510)

#define LOM_SELF_00539dc0 1
int __cdecl rb_00539dc0(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  
  FUN_0053f320();
  SVar1 = FUN_0053f510((undefined *)DAT_005d6b34);
  if (SVar1 < (uint)((int)DAT_005d6b30 + (4 - (int)DAT_005d6b34))) {
    SVar1 = FUN_0053f510((undefined *)DAT_005d6b34);
    piVar2 = FUN_0053f360(DAT_005d6b34,SVar1 + 0x10);
    if (piVar2 == (int *)0x0) {
      FUN_0053f330();
      return 0;
    }
    DAT_005d6b30 = piVar2 + ((int)DAT_005d6b30 - (int)DAT_005d6b34 >> 2);
    DAT_005d6b34 = piVar2;
  }
  *DAT_005d6b30 = param_1;
  DAT_005d6b30 = DAT_005d6b30 + 1;
  FUN_0053f330();
  return param_1;
}
