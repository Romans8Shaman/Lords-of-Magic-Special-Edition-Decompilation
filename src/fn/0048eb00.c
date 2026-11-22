/* Rebuilt from lomse.exe FUN_0048eb00 @ 0x0048eb00 (105 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_0048ea90 ((undefined4 (__thiscall *)(void *, undefined4))0x0048ea90)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_0048eb00 1
void __thiscall rb_0048eb00(void *this,undefined4 param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x40) = param_1;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar1 = 0;
    do {
      this_00 = (void *)FUN_005005f0(&DAT_00584ae8,
                                     *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar1));
      if (this_00 != (void *)0x0) {
        FUN_0048ea90(this_00,*(int *)(*(int *)((int)this + 0x4c) + iVar1) +
                             *(int *)((int)this + 0x3c));
        rb_0048eb00(this_00,*(int *)(*(int *)((int)this + 0x4c) + 4 + iVar1) +
                             *(int *)((int)this + 0x40));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)((int)this + 0x50));
  }
  return;
}
