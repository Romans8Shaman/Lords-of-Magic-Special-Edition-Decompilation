/* Rebuilt from lomse.exe FUN_00452410 @ 0x00452410 (654 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00557310 (*(undefined4 *)0x00557310)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)
#define FUN_0043de80 ((undefined4 (__thiscall *)(void *, int))0x0043de80)
#define FUN_0044ede0 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int))0x0044ede0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00452410 1
void __thiscall rb_00452410(void *this,void *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uchar _fr[0xb0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_a4;
  typedef undefined4 _t_local_a0[10];
  typedef undefined4 _t_local_78;
#define local_a4 (*(_t_local_a4 *)(_fr + 0x4))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x8))
#define local_78 (*(_t_local_78 *)(_fr + 0x30))

  uVar1 = *(undefined4 *)((int)this + 0x28);
  iVar2 = *(int *)((int)this + 0xd4);
  FUN_0043b990(local_a0,*(undefined4 *)((int)this + 0x68),(short)*(undefined4 *)((int)this + 0x74),
               (short)*(undefined4 *)((int)this + 0x80),0,iVar2,uVar1,uVar1,uVar1);
  local_78 = *(undefined4 *)((int)this + 0x28);
  piVar6 = &DAT_00557310;
  do {
    iVar3 = FUN_0043de80(local_a0,*piVar6);
    if (iVar3 < 0) {
      iVar3 = FUN_0044ede0(this,&local_a4,*piVar6,1,*(int *)((int)this + 0x68));
      if (iVar3 != 0) {
        uVar1 = *(undefined4 *)((int)this + 0x80);
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar3 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
        }
        iVar3 = *piVar6;
        if (*(int *)((int)param_1 + 0x54) == 0) {
          FUN_00404ab0(param_1,3);
        }
        else {
          iVar4 = *(int *)((int)param_1 + 0x50);
          iVar5 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar5;
          *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
          *(int *)(iVar4 + 4 + iVar5 * 8) = iVar3;
        }
        if (*(int *)((int)param_1 + 0x54) == 0) {
          FUN_00404ab0(param_1,3);
        }
        else {
          iVar3 = *(int *)((int)param_1 + 0x50);
          iVar4 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar4;
          *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 1;
        }
        FUN_004d05e0(param_1,param_2,param_3);
        iVar3 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar3 != 0) goto LAB_0045266f;
      }
    }
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < 0x55731c);
  iVar2 = iVar2 + 1;
  iVar3 = FUN_0044ede0(this,&local_a4,0,iVar2,*(int *)((int)this + 0x68));
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x80);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
  }
LAB_0045266f:
  FUN_0043ba50(local_a0);
  return;
#undef local_a4
#undef local_a0
#undef local_78
}
