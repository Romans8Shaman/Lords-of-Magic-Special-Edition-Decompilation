/* Rebuilt from lomse.exe FUN_00536a60 @ 0x00536a60 (151 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005369f0 ((undefined4 (__cdecl *)(int))0x005369f0)

#define LOM_SELF_00536a60 1
void __cdecl rb_00536a60(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_005369f0(param_1);
  *(undefined4 *)(param_1 + 0x16b0) = 8;
  if (param_4 != 0) {
    *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (byte)param_3;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    bVar1 = (byte)((uint)param_3 >> 8);
    *(byte *)(*(int *)(param_1 + 8) + iVar2) = bVar1;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(*(int *)(param_1 + 8) + iVar2) = ~(byte)param_3;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(*(int *)(param_1 + 8) + iVar2) = ~bVar1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  if (param_3 != 0) {
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    } while (param_3 != 0);
  }
  return;
}
