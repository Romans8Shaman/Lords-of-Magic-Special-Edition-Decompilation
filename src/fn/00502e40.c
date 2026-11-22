/* Rebuilt from lomse.exe FUN_00502e40 @ 0x00502e40 (97 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)

#define LOM_SELF_00502e40 1
undefined4 __fastcall rb_00502e40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = FUN_004efe80(&DAT_005aee6c,*(int *)(param_1 + 0x170));
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 8);
  }
  uVar2 = 0xffffffff;
  iVar1 = *(int *)(*(int *)(param_1 + 0x232a4) * 0x400 + 0x232a8 + param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar3 != (undefined *)0x0) {
    uVar2 = *(undefined4 *)(puVar3 + 0x15b0);
  }
  return uVar2;
}
