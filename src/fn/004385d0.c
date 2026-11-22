/* Rebuilt from lomse.exe FUN_004385d0 @ 0x004385d0 (464 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00438370 ((undefined4 (__fastcall *)(uint *))0x00438370)
#define FUN_00438390 ((int (__thiscall *)(void *, int))0x00438390)
#define FUN_004383b0 ((int (__fastcall *)(int *))0x004383b0)
#define FUN_004383f0 ((int (__fastcall *)(int *))0x004383f0)
#define FUN_004384c0 ((undefined4 (__thiscall *)(void *, int, int, int, int *))0x004384c0)
#define FUN_004387a0 ((undefined4 (__thiscall *)(void *, uint))0x004387a0)

#define LOM_SELF_004385d0 1
undefined4 __thiscall rb_004385d0(void *this,int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  if ((param_3 & 0x1000) == 0) {
    FUN_00438370(this);
    FUN_00438370((uint *)((int)this + 0x50));
    uVar5 = 0;
    iVar2 = 0;
    do {
      iVar3 = FUN_004383b0(this);
      if (iVar3 == 0) break;
      uVar5 = uVar5 + *(int *)(iVar3 + 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
    do {
      iVar3 = FUN_004383b0((int *)((int)this + 0x50));
      if (iVar3 == 0) break;
      uVar5 = uVar5 + *(int *)(iVar3 + 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
    if (((int)uVar5 < param_1) && ((param_3 & 0x400) == 0)) {
      return 0;
    }
    uVar1 = param_3 & 0x800;
    param_3 = uVar5;
    if (uVar1 == 0) {
      while( true ) {
        iVar3 = 0;
        iVar2 = 0;
        local_c = (void *)0x0;
        local_8 = -1;
        if (0 < *(int *)((int)this + 0x48)) {
          do {
            iVar4 = FUN_00438390(this,iVar3);
            if ((param_1 <= (int)(param_3 - *(int *)(iVar4 + 8))) &&
               (((iVar2 == 0 || (*(int *)(iVar2 + 0xc) < *(int *)(iVar4 + 0xc))) ||
                ((*(int *)(iVar4 + 0xc) == *(int *)(iVar2 + 0xc) &&
                 (*(int *)(iVar4 + 8) < *(int *)(iVar2 + 8))))))) {
              iVar2 = iVar4;
              local_c = this;
              local_8 = iVar3;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)this + 0x48));
        }
        iVar3 = 0;
        if (0 < *(int *)((int)this + 0x98)) {
          do {
            iVar4 = FUN_00438390((void *)((int)this + 0x50),iVar3);
            if ((param_1 <= (int)(param_3 - *(int *)(iVar4 + 8))) &&
               (((iVar2 == 0 || (*(int *)(iVar2 + 0xc) < *(int *)(iVar4 + 0xc))) ||
                ((*(int *)(iVar4 + 0xc) == *(int *)(iVar2 + 0xc) &&
                 (*(int *)(iVar4 + 8) < *(int *)(iVar2 + 8))))))) {
              local_c = (void *)((int)this + 0x50);
              iVar2 = iVar4;
              local_8 = iVar3;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)this + 0x98));
        }
        if ((iVar2 == 0) ||
           (iVar2 = FUN_004384c0(local_c,local_8,(-(uint)(local_c != this) & 6) + 3,
                                 param_3 - param_1,&local_4), iVar2 == 0)) break;
        param_3 = param_3 + local_4;
      }
    }
  }
  else {
    iVar2 = FUN_004383f0((int *)((int)this + 0x50));
    if ((iVar2 == 0) && (iVar2 = FUN_004383f0(this), iVar2 == 0)) {
      return 0;
    }
  }
  FUN_004387a0(this,param_2);
  return 1;
#undef local_c
#undef local_8
#undef local_4
}
