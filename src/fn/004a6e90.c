/* Rebuilt from lomse.exe FUN_004a6e90 @ 0x004a6e90 (208 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)

#define LOM_SELF_004a6e90 1
void __thiscall
rb_004a6e90(void *this,int param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = *(int *)((int)this + 0x6c);
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  iVar2 = param_2 + param_1 % iVar1;
  iVar4 = param_1 % iVar1 - param_2;
  local_4 = param_1 / iVar1 - param_2;
  param_1 = param_2 + param_1 / iVar1;
  param_2 = iVar2;
  if (*(int *)((int)this + 0x14) == 0) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (local_4 < 0) {
      local_4 = 0;
    }
    if (iVar1 <= iVar2) {
      param_2 = iVar1 + -1;
    }
    if (*(int *)((int)this + 0x70) <= param_1) {
      param_1 = *(int *)((int)this + 0x70) + -1;
    }
  }
  do {
    iVar1 = local_4;
    if (param_2 < iVar4) {
      return;
    }
    for (; iVar1 <= param_1; iVar1 = iVar1 + 1) {
      iVar2 = FUN_004a51c0(this,iVar4,iVar1);
      iVar2 = FUN_004a8300(this,iVar2,0);
      uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,0);
      if ((uVar3 != 0) && (iVar2 = ((undefined4 (__cdecl *)(__typeof__(uVar3), __typeof__(param_3)))(*(code *)param_4))(uVar3,param_3), iVar2 == 0)) {
        return;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
#undef local_4
}
