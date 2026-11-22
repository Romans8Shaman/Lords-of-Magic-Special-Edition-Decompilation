/* Rebuilt from lomse.exe op_combatformation @ 0x004997e0 (440 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00498cb0 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x00498cb0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004997e0 1
void __cdecl rb_004997e0(void *vm)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uchar _fr[0xd0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_c8;
  typedef undefined4 _t_uStack_c4;
  typedef uint _t_uStack_c0;
  typedef uint _t_uStack_bc;
  typedef undefined4 _t_uStack_b8;
  typedef uint _t_uStack_b4;
  typedef undefined4 _t_uStack_b0;
  typedef undefined4 _t_fStack_ac;
  typedef undefined4 _t_fStack_a8;
  typedef undefined4 _t_fStack_a4;
  typedef uint _t_auStack_a0[40];
#define uStack_c8 (*(_t_uStack_c8 *)(_fr + 0x0))
#define uStack_c4 (*(_t_uStack_c4 *)(_fr + 0x4))
#define uStack_c0 (*(_t_uStack_c0 *)(_fr + 0x8))
#define uStack_bc (*(_t_uStack_bc *)(_fr + 0xc))
#define uStack_b8 (*(_t_uStack_b8 *)(_fr + 0x10))
#define uStack_b4 (*(_t_uStack_b4 *)(_fr + 0x14))
#define uStack_b0 (*(_t_uStack_b0 *)(_fr + 0x18))
#define fStack_ac (*(_t_fStack_ac *)(_fr + 0x1c))
#define fStack_a8 (*(_t_fStack_a8 *)(_fr + 0x20))
#define fStack_a4 (*(_t_fStack_a4 *)(_fr + 0x24))
#define auStack_a0 (*(_t_auStack_a0 *)(_fr + 0x28))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_bc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_b8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_bc = 0;
    uStack_b8 = uStack_c4;
  }
  iVar1 = FUN_004026a0(&uStack_bc,&uStack_c0,(uint *)&fStack_ac,&fStack_a8);
  if (iVar1 == 0) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
  }
  else {
    iVar1 = uStack_c0 - 1;
    if (-1 < iVar1) {
      puVar4 = auStack_a0 + iVar1 * 2;
      do {
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar2 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar2;
          uStack_b4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
          uStack_b0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_b4 = 0;
          uStack_b0 = uStack_c4;
        }
        iVar2 = FUN_004026a0(&uStack_b4,puVar4 + 1,(uint *)&fStack_a8,&fStack_ac);
        if (iVar2 == 0) {
LAB_0049992b:
          *(undefined4 *)((int)vm + 0x90) = 0xe;
          goto LAB_0049997a;
        }
        if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
          iVar2 = *(int *)((int)vm + 0x54) + 1;
          *(int *)((int)vm + 0x54) = iVar2;
          uStack_c8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
          uStack_c4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
        }
        else {
          FUN_00404ab0(vm,6);
          uStack_c8 = 0;
        }
        iVar2 = FUN_004026a0(&uStack_c8,puVar4,&uStack_bc,&fStack_a4);
        if (iVar2 == 0) goto LAB_0049992b;
        iVar1 = iVar1 + -1;
        puVar4 = puVar4 + -2;
      } while (-1 < iVar1);
    }
    uVar3 = FUN_00498cb0(&DAT_005ae958,auStack_a0,uStack_c0);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
  }
LAB_0049997a:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef uStack_c8
#undef uStack_c4
#undef uStack_c0
#undef uStack_bc
#undef uStack_b8
#undef uStack_b4
#undef uStack_b0
#undef fStack_ac
#undef fStack_a8
#undef fStack_a4
#undef auStack_a0
}
