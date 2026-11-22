/* Rebuilt from lomse.exe FUN_004040e0 @ 0x004040e0 (256 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00403a90 ((undefined4 (__thiscall *)(void *, void *))0x00403a90)
#define FUN_004073f0 ((int (__thiscall *)(void *, void *, int))0x004073f0)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_004a6d70 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d70)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define FUN_004a9a90 ((undefined4 (__stdcall *)(int, uint))0x004a9a90)
#define FUN_004edc30 ((undefined4 (__thiscall *)(void *, int, uint))0x004edc30)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004040e0 1
void __thiscall rb_004040e0(void *this, int *volatile param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = param_1;
  iVar2 = FUN_004a9a60(&DAT_005ae958,&param_1,param_1[7]);
  if ((iVar2 != 0) && (iVar2 = FUN_004a9a90(piVar1[0x12],(uint)param_1), iVar2 != 0)) {
    FUN_004010d0(this,(int)piVar1);
    piVar1[0xc] = piVar1[0xc] | 0x400;
    iVar2 = FUN_004f6000(&DAT_005ae974,piVar1[10]);
    if (iVar2 == 0) {
      return;
    }
    FUN_004a6d70(&DAT_005ae958,iVar2,piVar1[7]);
    return;
  }
  if (piVar1[7] != *(int *)((int)this + 8)) {
    uVar3 = FUN_004a8b50(&DAT_005ae958,piVar1[7],*(int *)((int)this + 8));
    iVar2 = FUN_004a8960(&DAT_005ae958,piVar1[7],*(int *)((int)this + 8));
    iVar4 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),piVar1[0x15]);
    if (iVar4 != 0) {
      FUN_00407fd0(this,piVar1,0,iVar2,uVar3,0,*(int *)((int)this + 8));
      return;
    }
  }
  iVar2 = FUN_004073f0(&DAT_005ae958,piVar1,*(int *)((int)this + 8));
  if (iVar2 == -1) {
    FUN_00403a90(this,piVar1);
    return;
  }
  *(int *)((int)this + 8) = iVar2;
  return;
}
