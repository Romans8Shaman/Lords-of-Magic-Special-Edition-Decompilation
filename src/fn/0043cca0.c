/* Rebuilt from lomse.exe op_addbuilding @ 0x0043cca0 (860 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)
#define FUN_0043c480 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4 *))0x0043c480)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0043cca0 1
void __cdecl rb_0043cca0(void *vm)

{
  int iVar1;
  uchar _fr[0xd8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_cc;
  typedef undefined4 _t_uStack_c8;
  typedef undefined4 _t_fStack_c4;
  typedef undefined4 _t_fStack_c0;
  typedef uint _t_uStack_bc;
  typedef uint _t_uStack_b8;
  typedef uint _t_uStack_b4;
  typedef short _t_asStack_b0[2];
  typedef uint _t_uStack_ac;
  typedef short _t_asStack_a8[2];
  typedef uint _t_uStack_a4;
  typedef undefined4 _t_auStack_a0[19];
  typedef undefined4 _t_auStack_54[18];
#define uStack_cc (*(_t_uStack_cc *)(_fr + 0x4))
#define uStack_c8 (*(_t_uStack_c8 *)(_fr + 0x8))
#define fStack_c4 (*(_t_fStack_c4 *)(_fr + 0xc))
#define fStack_c0 (*(_t_fStack_c0 *)(_fr + 0x10))
#define uStack_bc (*(_t_uStack_bc *)(_fr + 0x14))
#define uStack_b8 (*(_t_uStack_b8 *)(_fr + 0x18))
#define uStack_b4 (*(_t_uStack_b4 *)(_fr + 0x1c))
#define asStack_b0 (*(_t_asStack_b0 *)(_fr + 0x20))
#define uStack_ac (*(_t_uStack_ac *)(_fr + 0x24))
#define asStack_a8 (*(_t_asStack_a8 *)(_fr + 0x28))
#define uStack_a4 (*(_t_uStack_a4 *)(_fr + 0x2c))
#define auStack_a0 (*(_t_auStack_a0 *)(_fr + 0x30))
#define auStack_54 (*(_t_auStack_54 *)(_fr + 0x7c))

  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,&uStack_a4,(uint *)&fStack_c0,&fStack_c4);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,&uStack_b8,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,(uint *)asStack_b0,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,(uint *)asStack_a8,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    return;
  }
  FUN_0040adb0(vm,&uStack_cc);
  iVar1 = FUN_004026a0(&uStack_cc,&uStack_b4,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 != 0) {
    FUN_0040adb0(vm,&uStack_cc);
    iVar1 = FUN_004026a0(&uStack_cc,&uStack_bc,(uint *)&fStack_c4,&fStack_c0);
    if (iVar1 != 0) {
      FUN_0040adb0(vm,&uStack_cc);
      iVar1 = FUN_004026a0(&uStack_cc,&uStack_ac,(uint *)&fStack_c4,&fStack_c0);
      if (iVar1 == 0) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      FUN_0043b990(auStack_a0,uStack_b4,asStack_a8[0],asStack_b0[0],uStack_b8,uStack_a4,0xffffffff,
                   0xffffffff,0xffffffff);
      FUN_0043c480(uStack_ac,uStack_bc,auStack_54);
      FUN_0043ba50(auStack_a0);
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef uStack_cc
#undef uStack_c8
#undef fStack_c4
#undef fStack_c0
#undef uStack_bc
#undef uStack_b8
#undef uStack_b4
#undef asStack_b0
#undef uStack_ac
#undef asStack_a8
#undef uStack_a4
#undef auStack_a0
#undef auStack_54
}
