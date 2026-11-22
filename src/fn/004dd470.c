/* Rebuilt from lomse.exe op_button @ 0x004dd470 (643 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005a7b54 (*(int *)0x005a7b54)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_00492e10 ((int (__thiscall *)(void *, int))0x00492e10)
#define FUN_00492ee0 ((int (__thiscall *)(void *, int, int))0x00492ee0)
#define FUN_00492fd0 ((undefined4 (__thiscall *)(void *, int, undefined4, int))0x00492fd0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_bad_arguments_00572864 (*(char (*)[])0x00572864)

#define LOM_SELF_004dd470 1
void __cdecl rb_004dd470(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_18;
  typedef float _t_fStack_14;
  typedef float _t_fStack_10;
  typedef int _t_iStack_c;
  typedef uint _t_uStack_8;
  typedef int _t_iStack_4;
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x0))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define iStack_c (*(_t_iStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    fStack_10 = *(float *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_c = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    iStack_c = iStack_4;
    fStack_10 = 0.0;
  }
  iVar1 = FUN_004026a0((uint *)&fStack_10,(uint *)&vm,(uint *)&fStack_14,&fStack_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar1 = *(int *)(DAT_005a7b54 + (int)vm * 8);
  if (iVar1 == 2) {
    iVar1 = FUN_00492e10(&DAT_005a7b50,(int)vm);
  }
  else if (iVar1 == 4) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_18,(uint *)&fStack_10,&fStack_14);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      goto LAB_004dd6c6;
    }
    iVar1 = FUN_00492ee0(&DAT_005a7b50,__BC(int, fStack_18),(int)vm);
  }
  else {
    if (iVar1 != 5) {
      FUN_004d41c0(this,s_bad_arguments_00572864);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      cVar4 = (char)*(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      iVar1 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      cVar4 = '\0';
      iVar1 = iStack_4;
    }
    iVar2 = FUN_0041da00((int)this);
    if (iVar2 == 0) {
      if (cVar4 != '\b') {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        iVar1 = 0;
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      iStack_4 = *(int *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&fStack_18,(uint *)&fStack_14,&fStack_10);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    iVar1 = FUN_00492fd0(&DAT_005a7b50,__BC(int, fStack_18),iVar1,(int)vm);
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    iVar2 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar3 * 8) = iVar1;
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_004dd6c6:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_18
#undef fStack_14
#undef fStack_10
#undef iStack_c
#undef uStack_8
#undef iStack_4
}
