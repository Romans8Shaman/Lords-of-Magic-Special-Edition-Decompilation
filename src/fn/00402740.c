/* Rebuilt from lomse.exe FUN_00402740 @ 0x00402740 (397 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055514c (*(int *)0x0055514c)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00401760 ((undefined4 (__stdcall *)(undefined4, int, int))0x00401760)
#define FUN_004019f0 ((undefined4 (__stdcall *)(void *, int, int))0x004019f0)
#define FUN_00407900 ((undefined4 (__fastcall *)(int))0x00407900)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_00402740 1
void __thiscall rb_00402740(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = DAT_0055514c;
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if ((((this_00 == (void *)0x0) || (iVar1 = FUN_00407d50((int)this_00), iVar1 != 0)) ||
      (*(int *)((int)this_00 + 0x48) == param_1[0x12])) ||
     ((iVar1 = FUN_005071c0(this_00,param_1[0x12]), iVar1 == 0 ||
      ((iVar1 = FUN_00420620((int)this_00), iVar1 != 0 && (iVar1 = FUN_00458170(), iVar1 != 0))))))
  {
    FUN_004010d0(this,(int)param_1);
  }
  else {
    iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
    uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
    if (uVar2 != 8) {
      if (iVar1 < 2) {
        iVar1 = FUN_004019f0(param_1,(int)this_00,uVar2);
        if (iVar1 == 0) {
          return;
        }
        FUN_0041efa0(param_1,3);
        FUN_00407900((int)param_1);
        return;
      }
      iVar3 = FUN_00407fd0(this,param_1,(int)this_00,iVar1,uVar2,1,*(int *)((int)this_00 + 0x1c));
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_004205e0((int)param_1);
      if (iVar3 != 0) {
        if (param_1[0x11] != uVar2) {
          FUN_004193e0(param_1,uVar2);
          return;
        }
        iVar3 = FUN_00420600((int)param_1);
        local_4 = DAT_0055514c;
        if (DAT_0055514c <= iVar3) {
          local_4 = iVar3;
        }
        if (iVar1 <= iVar3) {
          if (iVar1 < 2) {
            FUN_0041efa0(param_1,3);
            return;
          }
          FUN_0041efa0(param_1,4);
          return;
        }
      }
      iVar1 = FUN_00401760(param_1,*(int *)((int)this + 8),local_4);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 0x28);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0x28);
      return;
    }
  }
  FUN_00401730(param_1);
  return;
#undef local_4
}
