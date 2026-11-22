/* Rebuilt from lomse.exe FUN_00468320 @ 0x00468320 (225 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define FUN_004a73e0 ((int (__thiscall *)(void *, int, uint, int))0x004a73e0)
#define FUN_004ede30 ((int (__thiscall *)(void *, int, uint))0x004ede30)

#define LOM_SELF_00468320 1
void __thiscall
rb_00468320(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (-(uint)(param_1 != DAT_005aa7d4) & 0x400) + 0x400;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)((int)this + 0x6c) <= param_3) {
    param_3 = *(int *)((int)this + 0x6c) + -1;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if (*(int *)((int)this + 0x70) <= param_5) {
    param_5 = *(int *)((int)this + 0x70) + -1;
  }
  for (; param_4 <= param_5; param_4 = param_4 + 1) {
    iVar4 = param_2;
    if (param_2 <= param_3) {
      do {
        if (param_6 == 0) {
          puVar1 = (uint *)(*(int *)((int)this + 100) + 4 +
                           (param_4 * *(int *)((int)this + 0x6c) + iVar4) * 8);
          *puVar1 = *puVar1 | uVar3;
        }
        else {
          iVar2 = param_4 * *(int *)((int)this + 0x6c) + iVar4;
          if (param_7 == -1) {
            iVar2 = FUN_004ede30(this,iVar2,param_6);
          }
          else {
            iVar2 = FUN_004a73e0(this,iVar2,param_6,param_7);
          }
          if (iVar2 < 0) {
            iVar2 = param_4 * *(int *)((int)this + 0x6c) + iVar4;
          }
          puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + iVar2 * 8);
          *puVar1 = *puVar1 | uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= param_3);
    }
  }
  return;
}
