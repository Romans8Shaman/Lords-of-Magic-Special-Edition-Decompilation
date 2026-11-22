/* Rebuilt from lomse.exe op_addchildbuilding @ 0x0043fdb0 (811 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)
#define FUN_0043c480 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4 *))0x0043c480)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0043fdb0 1
void __cdecl rb_0043fdb0(void *vm)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar _fr[0xc8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_c0;
  typedef undefined4 _t_uStack_bc;
  typedef uint _t_uStack_b8;
  typedef undefined4 _t_fStack_b4;
  typedef undefined4 _t_fStack_b0;
  typedef uint _t_uStack_ac;
  typedef uint _t_uStack_a8;
  typedef uint _t_uStack_a4;
  typedef undefined4 _t_auStack_a0[19];
  typedef undefined4 _t_auStack_54[18];
#define uStack_c0 (*(_t_uStack_c0 *)(_fr + 0x0))
#define uStack_bc (*(_t_uStack_bc *)(_fr + 0x4))
#define uStack_b8 (*(_t_uStack_b8 *)(_fr + 0x8))
#define fStack_b4 (*(_t_fStack_b4 *)(_fr + 0xc))
#define fStack_b0 (*(_t_fStack_b0 *)(_fr + 0x10))
#define uStack_ac (*(_t_uStack_ac *)(_fr + 0x14))
#define uStack_a8 (*(_t_uStack_a8 *)(_fr + 0x18))
#define uStack_a4 (*(_t_uStack_a4 *)(_fr + 0x1c))
#define auStack_a0 (*(_t_auStack_a0 *)(_fr + 0x20))
#define auStack_54 (*(_t_auStack_54 *)(_fr + 0x6c))

  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_a8,(uint *)&fStack_b0,&fStack_b4);
  if (iVar1 == 0) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_ac,(uint *)&fStack_b4,&fStack_b0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_a4,(uint *)&fStack_b4,&fStack_b0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_b8,(uint *)&fStack_b4,&fStack_b0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,uStack_b8,3);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,uStack_b8,2);
  if (uVar2 != 0) {
    FUN_0043b990(auStack_a0,*(undefined4 *)(uVar2 + 0x68),(short)*(undefined4 *)(uVar2 + 0x74),
                 (short)*(undefined4 *)(uVar2 + 0x80),uStack_a4,1,*(undefined4 *)(uVar2 + 0x28),
                 *(undefined4 *)(uVar2 + 0x28),uStack_b8);
    FUN_0043c480(uStack_ac,uStack_a8,auStack_54);
    FUN_0043ba50(auStack_a0);
  }
  if (uVar3 != 0) {
    FUN_0043b990(auStack_a0,*(undefined4 *)(uVar3 + 0x4c),*(short *)(uVar3 + 0x54),
                 *(short *)(uVar3 + 0x56),uStack_a4,1,uStack_b8,uStack_b8,uStack_b8);
    FUN_0043c480(uStack_ac,uStack_a8,auStack_54);
    FUN_0043ba50(auStack_a0);
  }
  return;
#undef uStack_c0
#undef uStack_bc
#undef uStack_b8
#undef fStack_b4
#undef fStack_b0
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef auStack_a0
#undef auStack_54
}
