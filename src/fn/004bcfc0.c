/* Rebuilt from lomse.exe op_enumhistoricevents @ 0x004bcfc0 (347 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_004bc970 ((undefined4 (__thiscall *)(void *, void *, uint, int *))0x004bc970)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_enumhistoricevents___no_such_pla_0055d814 (*(char (*)[])0x0055d814)

#define LOM_SELF_004bcfc0 1
void __cdecl rb_004bcfc0(void *volatile param_1)

{
  void *this;
  int iVar1;
  undefined *this_00;
  uint uVar2;
  int *piVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_10;
  typedef uint _t_local_c;
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    piVar3 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
    piVar3 = local_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    local_8 = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  iVar1 = FUN_004026a0(&local_8,(uint *)&param_1,&local_c,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 != 0) {
    FUN_004d41c0(this,s_enumhistoricevents___no_such_pla_0055d814);
    return;
  }
  if (((int)param_1 < 0) || (0xf < (int)param_1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + (int)param_1 * 0x1d84;
  }
  if (this_00 == (undefined *)0x0) {
    FUN_004d41c0(this,s_enumhistoricevents___no_such_pla_0055d814);
    return;
  }
  FUN_004bc970(this_00,this,uVar2,piVar3);
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
