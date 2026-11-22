/* Rebuilt from lomse.exe op_startcombat @ 0x004602d0 (359 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0045c5e0(...) ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x0045c5e0)(__VA_ARGS__, 0) /* +1 unused stack dword(s): ret 12 */
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_attacker_inside__0055776c (*(char (*)[])0x0055776c)
#define s_attacking_own_player_s_army_00557734 (*(char (*)[])0x00557734)
#define s_attacking_self__00557750 (*(char (*)[])0x00557750)
#define s_no_attacker_00557780 (*(char (*)[])0x00557780)
#define s_no_defender_00557760 (*(char (*)[])0x00557760)

#define LOM_SELF_004602d0 1
void __cdecl rb_004602d0(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar3);
    }
  }
  this_00 = (int *)FUN_004f6000(&DAT_005ae974,__BC(int, fStack_4));
  iVar1 = FUN_0041be40(this,&vm);
  if (iVar1 != 0) {
    if (vm == (void *)0x0) {
      FUN_004d41c0(this,s_no_attacker_00557780);
      return;
    }
    if ((*(uint *)((int)vm + 0x30) & 0x1c00000) != 0) {
      FUN_004d41c0(this,s_attacker_inside__0055776c);
      return;
    }
    if (this_00 == (int *)0x0) {
      FUN_004d41c0(this,s_no_defender_00557760);
      return;
    }
    if (*(int *)((int)vm + 0x28) == this_00[10]) {
      FUN_004d41c0(this,s_attacking_self__00557750);
      return;
    }
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
    if (*(int *)((int)vm + 0x48) == iVar1) {
      FUN_004d41c0(this,s_attacking_own_player_s_army_00557734);
      return;
    }
    FUN_0045c5e0(&DAT_005aa12c,*(undefined4 *)((int)vm + 0x28),this_00[10]);
  }
  return;
#undef fStack_4
}
