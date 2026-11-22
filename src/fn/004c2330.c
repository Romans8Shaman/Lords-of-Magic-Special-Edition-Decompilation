/* Rebuilt from lomse.exe FUN_004c2330 @ 0x004c2330 (54 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_004c2330 1
int __fastcall rb_004c2330(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar4 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_00525fc0(piVar4);
      if (iVar1 == 2) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x13;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return iVar2;
}
