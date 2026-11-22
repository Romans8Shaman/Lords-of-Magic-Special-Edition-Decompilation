/* Rebuilt from lomse.exe FUN_00404410 @ 0x00404410 (258 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00403780 ((int (__stdcall *)(int))0x00403780)
#define FUN_004074b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004074b0)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004edc30 ((undefined4 (__thiscall *)(void *, int, uint))0x004edc30)

#define LOM_SELF_00404410 1
void __thiscall rb_00404410(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_1[7] == *(int *)((int)this + 8)) {
    iVar1 = FUN_00403780(param_1[10]);
    if (-1 < iVar1) {
      FUN_004074b0((void *)((int)this + 0x1c),&local_8);
      iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
      *(int *)((int)this + 8) = iVar1;
      *(undefined4 *)this = 8;
      return;
    }
  }
  else {
    uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this + 8));
    iVar3 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),param_1[0x15]);
    if ((iVar3 == 0) && (iVar1 < 3)) {
      iVar1 = FUN_00403780(param_1[10]);
      if (-1 < iVar1) {
        FUN_004074b0((void *)((int)this + 0x1c),&local_8);
        iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
        *(int *)((int)this + 8) = iVar1;
        *(undefined4 *)this = 8;
      }
      FUN_00401730(param_1);
      return;
    }
    FUN_00407fd0(this,param_1,0,iVar1,uVar2,0,*(int *)((int)this + 8));
  }
  return;
#undef local_8
#undef local_4
}
