/* Rebuilt from lomse.exe FUN_004028d0 @ 0x004028d0 (309 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_004019f0 ((undefined4 (__stdcall *)(void *, int, int))0x004019f0)
#define FUN_00406140 ((int (__stdcall *)(int, int))0x00406140)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_004028d0 1
void __thiscall rb_004028d0(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  void *this_01;
  uint uVar2;
  
  this_00 = param_1;
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    param_1 = (int *)0x1;
  }
  else {
    param_1 = (int *)FUN_00420600((int)param_1);
  }
  this_01 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if ((((this_01 == (void *)0x0) || (iVar1 = FUN_00407d50((int)this_01), iVar1 != 0)) ||
      (*(int *)((int)this_01 + 0x48) == this_00[0x12])) ||
     (iVar1 = FUN_005071c0(this_01,this_00[0x12]), iVar1 == 0)) {
    iVar1 = FUN_00406140(this_00[0x12],this_00[10]);
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  iVar1 = FUN_004a8960(&DAT_005ae958,this_00[7],*(int *)((int)this_01 + 0x1c));
  uVar2 = FUN_004a8b50(&DAT_005ae958,this_00[7],*(int *)((int)this_01 + 0x1c));
  if (uVar2 == 8) {
    FUN_00401730(this_00);
    return;
  }
  if ((int)param_1 < iVar1) {
    FUN_00407fd0(this,this_00,(int)this_01,iVar1,uVar2,param_1,*(int *)((int)this_01 + 0x1c));
    return;
  }
  iVar1 = FUN_004205e0((int)this_00);
  if (iVar1 == 0) {
    iVar1 = FUN_004019f0(this_00,(int)this_01,uVar2);
    if (iVar1 == 0) {
      return;
    }
  }
  else if (this_00[0x11] != uVar2) {
    FUN_004193e0(this_00,uVar2);
    return;
  }
  FUN_0041efa0(this_00,0xe);
  return;
}
