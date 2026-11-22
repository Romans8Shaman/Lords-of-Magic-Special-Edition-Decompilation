/* Rebuilt from lomse.exe op_getfatebits @ 0x00430010 (403 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005adc50 (*(undefined *)0x005adc50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0042f3c0 ((int (__thiscall *)(void *, int, int, uint *))0x0042f3c0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_bad_unit_or_fate_00555f20 (*(char (*)[])0x00555f20)
#define s_not_an_autocalc_army_00555f08 (*(char (*)[])0x00555f08)

#define LOM_SELF_00430010 1
void __cdecl rb_00430010(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
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
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_0043018a;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_0043018a;
  }
  if (uStack_14 == 0xfffffff3) {
    iVar1 = 0;
LAB_00430114:
    iVar1 = FUN_0042f3c0(&DAT_005adc50,iVar1,(int)vm,&uStack_18);
    if (iVar1 < 0) {
      FUN_004d41c0(this,s_bad_unit_or_fate_00555f20);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = uStack_18;
      return;
    }
  }
  else {
    if (uStack_14 == 0xfffffff2) {
      iVar1 = 1;
      goto LAB_00430114;
    }
    FUN_004d41c0(this,s_not_an_autocalc_army_00555f08);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_0043018a:
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
