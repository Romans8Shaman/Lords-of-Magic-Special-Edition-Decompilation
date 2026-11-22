/* Rebuilt from lomse.exe FUN_004041e0 @ 0x004041e0 (201 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00403c30 ((undefined4 (__thiscall *)(void *, void *))0x00403c30)
#define FUN_004074b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004074b0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00413530 ((undefined4 (__thiscall *)(void *, int))0x00413530)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_004041e0 1
undefined4 __thiscall rb_004041e0(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = FUN_004074b0((void *)((int)this + 0x1c),&local_8);
  if (iVar1 != 0) {
    iVar1 = FUN_004a51c0(&DAT_005ae958,local_8,local_4);
    *(int *)((int)this + 8) = iVar1;
    iVar1 = FUN_00413530(param_1,iVar1);
    *(int *)((int)this + 8) = iVar1;
    if (iVar1 == -1) {
      FUN_00403c30(this,param_1);
      *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    }
    return 1;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if (uVar2 != 0) {
    iVar1 = FUN_00407d50(uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00506110(param_1,uVar2);
      if (iVar1 != 0) {
        *(undefined4 *)((int)this + 8) = 0xffffffff;
        *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0xc);
        *(undefined4 *)this = 2;
        return 0;
      }
    }
  }
  FUN_00403c30(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  return 0;
#undef local_8
#undef local_4
}
