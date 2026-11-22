/* Rebuilt from lomse.exe op_createartifactnow @ 0x0042a910 (516 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd340 (*(undefined *)0x005cd340)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00427d10 ((int (__thiscall *)(void *, int))0x00427d10)
#define FUN_00428080 ((int * (__thiscall *)(void *, int))0x00428080)
#define FUN_004282a0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, int, int))0x004282a0)
#define FUN_0042d410 ((undefined4 (__fastcall *)(int))0x0042d410)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_failed_to_create_artifact_00555e08 (*(char (*)[])0x00555e08)
#define s_no_such_unit_00555df8 (*(char (*)[])0x00555df8)

#define LOM_SELF_0042a910 1
void __cdecl rb_0042a910(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int *piVar3;
  int iVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar2 != 0) {
      iVar2 = FUN_0041be40(this,&vm);
      if (iVar2 == 0) {
        return;
      }
      if (((int)uStack_18 < 0) || (*(int *)((int)vm + 0x4c) <= (int)uStack_18)) {
        FUN_004d41c0(this,s_no_such_unit_00555df8);
        return;
      }
      iVar2 = FUN_00427d10(&DAT_005cd340,uStack_14);
      if ((iVar2 != 0) && (iVar2 = FUN_0042d410(iVar2), iVar2 != 0)) {
        return;
      }
      piVar3 = FUN_00428080((void *)((int)vm + uStack_18 * 0x4c + 0xc4),uStack_14);
      if (piVar3 == (int *)0x0) {
        FUN_004d41c0(this,s_failed_to_create_artifact_00555e08);
        return;
      }
      piVar3[4] = piVar3[4] | 1 << ((char)*(undefined4 *)((int)vm + 0x48) + 8U & 0x1f);
      iVar2 = FUN_00427b80(*piVar3);
      if ((*(byte *)(iVar2 + 0x18) & 0x10) != 0) {
        FUN_004282a0((void *)((int)vm + uStack_18 * 0x4c + 0xc4),*(undefined4 *)((int)vm + 0x28),
                     uStack_18,piVar3[3],1);
      }
      iVar2 = piVar3[3];
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
      goto LAB_0042aae7;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
LAB_0042aae7:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
