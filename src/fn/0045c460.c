/* Rebuilt from lomse.exe FUN_0045c460 @ 0x0045c460 (378 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_0045c5e0(...) ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x0045c5e0)(__VA_ARGS__, 0) /* +1 unused stack dword(s): ret 12 */
#define FUN_00480130 ((undefined4 (__thiscall *)(void *, int, void *, int, int, undefined4, int, undefined4, int *, int *, uint, int))0x00480130)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_0045c460 1
undefined4 __thiscall rb_0045c460(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef void * _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  piVar4 = (int *)0x0;
  piVar5 = (int *)0x0;
  local_8 = (void *)DAT_005ae98c;
  iVar3 = DAT_005ae998;
  if (DAT_005ae998 <= DAT_005ae98c) {
    do {
      piVar1 = (int *)FUN_004f6000(&DAT_005ae974,iVar3);
      if ((piVar1 != (int *)0x0) && (piVar1[1] == 0)) {
        if (piVar1[0x12] == param_1) {
          piVar4 = piVar1;
          piVar1 = piVar5;
        }
        piVar5 = piVar1;
        if ((piVar4 != (int *)0x0) && (piVar1 != (int *)0x0)) {
          FUN_004a6dd0((void *)((int)this + 0x482c),piVar4,piVar4[7],param_2);
          FUN_004a6dd0((void *)((int)this + 0x482c),piVar1,piVar1[7],param_2);
          uVar2 = FUN_0045c5e0(this,piVar4[10],piVar1[10]);
          return uVar2;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)local_8);
  }
  iVar3 = param_2 % *(int *)((int)this + 0x4898);
  local_8 = (void *)(param_2 / *(int *)((int)this + 0x4898));
  if (piVar4 == (int *)0x0) {
    FUN_00480130(this,iVar3,local_8,param_1,0,0xffffffff,0,0xffffffff,&local_c,&local_4,0,-1);
    piVar4 = (int *)FUN_00482ac0(this,local_c,0);
  }
  if (piVar5 == (int *)0x0) {
    FUN_00480130(this,iVar3 + -1,local_8,0xf,0,0xffffffff,0,0xffffffff,&local_c,&local_4,0,-1);
    piVar5 = (int *)FUN_00482ac0(this,local_c,0);
  }
  if ((piVar4 == (int *)0x0) || (piVar5 == (int *)0x0)) {
    return 0;
  }
  FUN_004a6dd0((void *)((int)this + 0x482c),piVar4,piVar4[7],param_2);
  FUN_004a6dd0((void *)((int)this + 0x482c),piVar5,piVar5[7],param_2);
  uVar2 = FUN_0045c5e0(this,piVar4[10],piVar5[10]);
  return uVar2;
#undef local_c
#undef local_8
#undef local_4
}
