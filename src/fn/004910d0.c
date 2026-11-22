/* Rebuilt from lomse.exe op_getitem @ 0x004910d0 (596 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0048d810 ((int (__thiscall *)(void *, int))0x0048d810)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define s_bad_dialog_identifier_0055c384 (*(char (*)[])0x0055c384)
#define s_no_such_element_0055c468 (*(char (*)[])0x0055c468)

#define LOM_SELF_004910d0 1
void __cdecl rb_004910d0(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  int iVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar3 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar3 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar3 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = (void *)FUN_005005f0(&DAT_00584ae8,(uint)vm);
  if (this_00 == (void *)0x0) {
    FUN_004d41c0(this,s_bad_dialog_identifier_0055c384);
    return;
  }
  puVar4 = (undefined4 *)FUN_0048d810(this_00,uStack_14);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_004d41c0(this,s_no_such_element_0055c468);
    return;
  }
  uVar1 = puVar4[3];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
  }
  uVar1 = *puVar4;
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
  }
  uVar1 = puVar4[1];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
  }
  uVar1 = puVar4[4];
  uVar2 = puVar4[5];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
  }
  uVar1 = puVar4[6];
  uVar2 = puVar4[7];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
  }
  uVar1 = puVar4[8];
  uVar2 = puVar4[9];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
    return;
  }
  iVar3 = *(int *)((int)this + 0x50);
  iVar5 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar5;
  *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
  *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
  return;
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
