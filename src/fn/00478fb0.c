/* Rebuilt from lomse.exe FUN_00478fb0 @ 0x00478fb0 (57 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00478f60 ((undefined4 (__stdcall *)(int *))0x00478f60)
#define FUN_00479050 ((undefined4 (__stdcall *)(undefined4, int *))0x00479050)

#define LOM_SELF_00478fb0 1
void __fastcall rb_00478fb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0x32;
  iVar3 = param_1 + 0x17c;
  piVar2 = (int *)(param_1 + 0x14);
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      FUN_00478f60((int *)*piVar2);
    }
    FUN_00479050(iVar3,piVar2);
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 0x1c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
