/* Rebuilt from lomse.exe FUN_0048d8b0 @ 0x0048d8b0 (182 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_0048d8b0 1
undefined4 __thiscall
rb_0048d8b0(void *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x50) <= param_1)) {
    return 0;
  }
  iVar1 = param_1 * 0x2c;
  *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar1) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x4c) + iVar1) = param_3;
  *(undefined4 *)(*(int *)((int)this + 0x4c) + 4 + iVar1) = param_4;
  *(undefined4 *)(*(int *)((int)this + 0x4c) + 8 + iVar1) = 0;
  iVar2 = *(int *)((int)this + 0x4c);
  *(undefined4 *)(iVar2 + 0x10 + iVar1) = param_5;
  *(undefined4 *)(iVar2 + 0x14 + iVar1) = param_6;
  iVar2 = *(int *)((int)this + 0x4c);
  *(undefined4 *)(iVar2 + 0x18 + iVar1) = param_7;
  *(undefined4 *)(iVar2 + 0x1c + iVar1) = param_8;
  iVar2 = *(int *)((int)this + 0x4c);
  *(undefined4 *)(iVar2 + 0x20 + iVar1) = param_9;
  *(undefined4 *)(iVar2 + 0x24 + iVar1) = param_10;
  *(void **)(*(int *)((int)this + 0x4c) + 0x28 + iVar1) = this;
  iVar2 = FUN_005005f0(&DAT_00584ae8,param_2);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x7c) = param_1;
    *(void **)(iVar2 + 0x78) = this;
  }
  return 1;
}
