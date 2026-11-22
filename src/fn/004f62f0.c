/* Rebuilt from lomse.exe FUN_004f62f0 @ 0x004f62f0 (106 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9ddc (*(int *)0x005a9ddc)
#define FUN_0053a320 ((undefined4 (__cdecl *)(undefined1 *, uint, uint, undefined *))0x0053a320)
#define LAB_004f6160 (*(undefined *)0x004f6160) /* code label used as address */

#define LOM_SELF_004f62f0 1
undefined4 __fastcall rb_004f62f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (DAT_005a9ddc == 0) {
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (iVar1 != 0) {
        *(int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) * 4) = iVar1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  FUN_0053a320(*(undefined1 **)(param_1 + 0xc),*(uint *)(param_1 + 0x14),4,&LAB_004f6160);
  return *(undefined4 *)(param_1 + 0x14);
}
