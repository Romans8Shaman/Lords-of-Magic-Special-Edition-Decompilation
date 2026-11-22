/* Rebuilt from lomse.exe FUN_00455210 @ 0x00455210 (89 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)

#define LOM_SELF_00455210 1
void __thiscall
rb_00455210(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            int param_5)

{
  int iVar1;
  
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_4);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffe3ffff;
  }
  iVar1 = FUN_004b0ee0(&DAT_005cd304,param_5);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffe3ffff;
  }
  *(int *)((int)this + 0x10) = param_5;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(int *)((int)this + 0xc) = param_4;
  return;
}
