/* Rebuilt from lomse.exe FUN_0048d620 @ 0x0048d620 (71 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0048d620 1
void __fastcall rb_0048d620(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc + iVar2) = 0xffffffff;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < *(int *)(param_1 + 0x54));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
