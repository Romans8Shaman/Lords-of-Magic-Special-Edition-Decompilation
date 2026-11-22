/* Rebuilt from lomse.exe FUN_004f6270 @ 0x004f6270 (120 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583100 (*(char *)0x00583100)
#define FUN_004559a0 ((undefined4 (__fastcall *)(int))0x004559a0)
#define FUN_0053a320 ((undefined4 (__cdecl *)(undefined1 *, uint, uint, undefined *))0x0053a320)
#define LAB_004f61a0 (*(undefined *)0x004f61a0) /* code label used as address */

#define LOM_SELF_004f6270 1
undefined4 __fastcall rb_004f6270(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00583100 != '\x02') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x24);
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
  FUN_004559a0(0x5ae958);
  FUN_0053a320(*(undefined1 **)(param_1 + 0xc),*(uint *)(param_1 + 0x14),4,&LAB_004f61a0);
  return *(undefined4 *)(param_1 + 0x14);
}
