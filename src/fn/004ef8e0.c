/* Rebuilt from lomse.exe op_setspellinfo @ 0x004ef8e0 (530 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584c1c (*(undefined4 *)0x00584c1c)
#define DAT_00584c94 (*(int *)0x00584c94)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ef610 ((undefined4 * (__thiscall *)(void *, undefined4 *))0x004ef610)
#define FUN_004ef740 ((undefined4 (__fastcall *)(undefined4 *))0x004ef740)
#define FUN_004ef8a0 ((undefined4 (__thiscall *)(void *, void *, int))0x004ef8a0)
#define s_no_such_spell_005731d8 (*(char (*)[])0x005731d8)

#define LOM_SELF_004ef8e0 1
void __cdecl rb_004ef8e0(void *vm)

{
  int iVar1;
  undefined4 *this;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uchar _fr[0xa8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_9c;
  typedef undefined4 _t_uStack_98;
  typedef undefined4 _t_fStack_94;
  typedef undefined4 _t_fStack_90;
  typedef uint _t_uStack_8c;
  typedef uint _t_uStack_88;
  typedef undefined4 _t_auStack_84[30];
#define uStack_9c (*(_t_uStack_9c *)(_fr + 0x4))
#define uStack_98 (*(_t_uStack_98 *)(_fr + 0x8))
#define fStack_94 (*(_t_fStack_94 *)(_fr + 0xc))
#define fStack_90 (*(_t_fStack_90 *)(_fr + 0x10))
#define uStack_8c (*(_t_uStack_8c *)(_fr + 0x14))
#define uStack_88 (*(_t_uStack_88 *)(_fr + 0x18))
#define auStack_84 (*(_t_auStack_84 *)(_fr + 0x1c))

  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    uVar4 = uStack_98;
  }
  if ((char)uVar3 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uStack_9c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      uStack_98 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_9c = 0;
    }
    iVar1 = FUN_004026a0(&uStack_9c,&uStack_8c,(uint *)&fStack_90,&fStack_94);
    if (iVar1 == 0) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    else {
      if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
        iVar1 = *(int *)((int)vm + 0x54) + 1;
        *(int *)((int)vm + 0x54) = iVar1;
        uStack_9c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
        uStack_98 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(vm,6);
        uStack_9c = 0;
      }
      iVar1 = FUN_004026a0(&uStack_9c,&uStack_88,(uint *)&fStack_94,&fStack_90);
      if (iVar1 == 0) {
        FUN_00404ab0(vm,0xe);
      }
      else {
        FUN_004ef610(auStack_84,&DAT_00584c1c);
        if (uStack_88 == 0xfffffffe) {
          this = auStack_84;
        }
        else if (uStack_88 == 0xffffffff) {
          this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,DAT_00584c94,4);
        }
        else {
          this = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,uStack_88,4);
        }
        if (this == (undefined4 *)0x0) {
          FUN_004d41c0(vm,s_no_such_spell_005731d8);
        }
        else {
          if (*(int *)((int)vm + 0x54) == 0) {
            *(undefined4 *)((int)vm + 0x90) = 3;
            FUN_004d4550(vm);
            *(undefined4 *)((int)vm + 0x90) = 0;
            *(undefined4 *)((int)vm + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)vm + 0x50);
            iVar2 = *(int *)((int)vm + 0x54) + -1;
            *(int *)((int)vm + 0x54) = iVar2;
            *(undefined4 *)(iVar1 + iVar2 * 8) = uVar3;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar4;
          }
          FUN_004ef8a0(this,vm,uStack_8c);
        }
        FUN_004ef740(auStack_84);
      }
    }
  }
  return;
#undef uStack_9c
#undef uStack_98
#undef fStack_94
#undef fStack_90
#undef uStack_8c
#undef uStack_88
#undef auStack_84
}
