/* Rebuilt from lomse.exe FUN_0048d970 @ 0x0048d970 (310 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_00505750 ((undefined4 (__thiscall *)(void *, uint))0x00505750)

#define LOM_SELF_0048d970 1
int __thiscall
rb_0048d970(void *this,uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0x4c) == 0) ||
     (*(int *)((int)this + 0x54) <= *(int *)((int)this + 0x50))) {
    return -1;
  }
  iVar1 = FUN_005005f0(&DAT_00584ae8,param_1);
  if (iVar1 != 0) {
    iVar5 = 0;
    if (0 < *(int *)((int)this + 0x50)) {
      puVar2 = (uint *)(*(int *)((int)this + 0x4c) + 0xc);
      do {
        if (*puVar2 == param_1) {
          return -2;
        }
        iVar5 = iVar5 + 1;
        puVar2 = puVar2 + 0xb;
      } while (iVar5 < *(int *)((int)this + 0x50));
    }
    iVar3 = FUN_00505750(&DAT_00584ae8,param_1);
    if (iVar3 != 0) {
      return -3;
    }
    *(int *)(iVar1 + 0x7c) = iVar5;
    *(void **)(iVar1 + 0x78) = this;
  }
  iVar1 = *(int *)((int)this + 0x50);
  iVar5 = 0;
  if (0 < iVar1) {
    piVar4 = *(int **)((int)this + 0x4c);
    do {
      if (((piVar4[3] == param_1) && (*piVar4 == param_2)) && (piVar4[1] == param_3)) {
        return -4;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 0xb;
    } while (iVar5 < iVar1);
  }
  iVar3 = iVar1 * 0x2c;
  *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar3) = param_1;
  *(int *)(*(int *)((int)this + 0x4c) + iVar3) = param_2;
  *(int *)(*(int *)((int)this + 0x4c) + 4 + iVar3) = param_3;
  *(undefined4 *)(*(int *)((int)this + 0x4c) + 8 + iVar3) = 0;
  iVar5 = *(int *)((int)this + 0x4c);
  *(undefined4 *)(iVar5 + 0x10 + iVar3) = param_4;
  *(undefined4 *)(iVar5 + 0x14 + iVar3) = param_5;
  iVar5 = *(int *)((int)this + 0x4c);
  *(undefined4 *)(iVar5 + 0x18 + iVar3) = param_6;
  *(undefined4 *)(iVar5 + 0x1c + iVar3) = param_7;
  iVar5 = *(int *)((int)this + 0x4c);
  *(undefined4 *)(iVar5 + 0x20 + iVar3) = param_8;
  *(undefined4 *)(iVar5 + 0x24 + iVar3) = param_9;
  *(void **)(*(int *)((int)this + 0x4c) + 0x28 + iVar3) = this;
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  return iVar1;
}
