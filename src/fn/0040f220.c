/* Rebuilt from lomse.exe FUN_0040f220 @ 0x0040f220 (384 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040eec0 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x0040eec0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0040f220 1
void __thiscall
rb_0040f220(void *this, void *volatile param_1, uint volatile param_2, int *volatile param_3, undefined4 volatile param_4, int volatile param_5)

{
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  void *this_01;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef void * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  this_01 = param_1;
  local_4 = *(void **)this;
  do {
    do {
      this_00 = local_4;
      if (this_00 == (void *)0x0) {
        return;
      }
      local_4 = *(void **)((int)this_00 + 0x4c);
    } while (*(int *)((int)this_00 + 0x18) != param_5);
    iVar3 = FUN_0040eec0(this_00,&param_1,&local_8);
    if (iVar3 == 0) {
      if (*(int *)((int)this_01 + 0x54) == 0) {
        *(undefined4 *)((int)this_01 + 0x90) = 3;
        FUN_004d4550(this_01);
        *(undefined4 *)((int)this_01 + 0x90) = 0;
        *(undefined4 *)((int)this_01 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this_01 + 0x50);
        iVar4 = *(int *)((int)this_01 + 0x54) + -1;
        *(int *)((int)this_01 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xffffffff;
      }
      iVar3 = *(int *)((int)this_01 + 0x54);
      iVar4 = -1;
      if (iVar3 == 0) goto LAB_0040f319;
LAB_0040f303:
      iVar2 = *(int *)((int)this_01 + 0x50);
      iVar3 = iVar3 + -1;
      *(int *)((int)this_01 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iVar4;
    }
    else {
      uVar1 = *(undefined4 *)((int)param_1 + 0x28);
      if (*(int *)((int)this_01 + 0x54) == 0) {
        *(undefined4 *)((int)this_01 + 0x90) = 3;
        FUN_004d4550(this_01);
        *(undefined4 *)((int)this_01 + 0x90) = 0;
        *(undefined4 *)((int)this_01 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this_01 + 0x50);
        iVar4 = *(int *)((int)this_01 + 0x54) + -1;
        *(int *)((int)this_01 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      }
      iVar3 = *(int *)((int)this_01 + 0x54);
      iVar4 = local_8;
      if (iVar3 != 0) goto LAB_0040f303;
LAB_0040f319:
      *(undefined4 *)((int)this_01 + 0x90) = 3;
      FUN_004d4550(this_01);
      *(undefined4 *)((int)this_01 + 0x90) = 0;
      *(undefined4 *)((int)this_01 + 0xa4) = 0;
    }
    uVar1 = *(undefined4 *)((int)this_00 + 4);
    if (*(int *)((int)this_01 + 0x54) == 0) {
      *(undefined4 *)((int)this_01 + 0x90) = 3;
      FUN_004d4550(this_01);
      *(undefined4 *)((int)this_01 + 0x90) = 0;
      *(undefined4 *)((int)this_01 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)this_01 + 0x50);
      iVar4 = *(int *)((int)this_01 + 0x54) + -1;
      *(int *)((int)this_01 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
    }
    FUN_004d05e0(this_01,param_2,param_3);
    iVar3 = *(int *)((int)this_01 + 0x6c);
    *(undefined4 *)((int)this_01 + 0x6c) = *(undefined4 *)((int)this_01 + 0x70);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
#undef local_8
#undef local_4
}
