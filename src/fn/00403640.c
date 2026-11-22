/* Rebuilt from lomse.exe FUN_00403640 @ 0x00403640 (318 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00403390 ((undefined4 (__stdcall *)(void *, int))0x00403390)
#define FUN_00404f90 ((undefined4 (__stdcall *)(int, int))0x00404f90)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_two_armies_in_same_location___005556f0 (*(char (*)[])0x005556f0)

#define LOM_SELF_00403640 1
void __thiscall rb_00403640(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_00407d50((int)this_00);
    if ((iVar1 == 0) && (*(int *)((int)this_00 + 0x48) != param_1[0x12])) {
      iVar1 = FUN_005071c0(this_00,param_1[0x12]);
      if (iVar1 != 0) goto LAB_00403698;
    }
    FUN_004010d0(this,(int)param_1);
    FUN_00401730(param_1);
    return;
  }
LAB_00403698:
  iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
  uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
  if (uVar2 == 8) {
    OutputDebugStringA(s_two_armies_in_same_location___005556f0);
    uVar2 = *(int *)((int)this_00 + 0x44) - 4U & 7;
  }
  if ((*(char *)((int)this + 0x11) == '\0') && (iVar1 == 4)) {
    iVar3 = FUN_005071c0(param_1,*(int *)((int)this_00 + 0x48));
    if (iVar3 != 0) {
      *(undefined1 *)((int)this + 0x11) = 1;
    }
  }
  if (1 < iVar1) {
    FUN_00407fd0(this,param_1,(int)this_00,iVar1,uVar2,1,*(int *)((int)this_00 + 0x1c));
    return;
  }
  if (param_1[0x11] != uVar2) {
    FUN_004193e0(param_1,uVar2);
    return;
  }
  param_1[0x173] = 0;
  param_1[0xc] = param_1[0xc] & 0xdfffffff;
  if (*(char *)((int)this + 0x11) == '\0') {
    iVar1 = FUN_00403390(param_1,(int)this_00);
    if (iVar1 != 0) {
      FUN_0041efa0(param_1,5);
      return;
    }
  }
  FUN_00404f90((int)param_1,(int)this_00);
  return;
}
