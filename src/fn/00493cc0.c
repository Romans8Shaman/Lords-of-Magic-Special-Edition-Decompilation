/* Rebuilt from lomse.exe op_getcropdata @ 0x00493cc0 (478 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004928b0 ((int (__thiscall *)(void *, int))0x004928b0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_object_0055c598 (*(char (*)[])0x0055c598)

#define LOM_SELF_00493cc0 1
void __cdecl rb_00493cc0(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  puVar3 = (undefined4 *)FUN_004928b0(&DAT_005a7b50,(int)vm);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_004d41c0(this,s_no_object_0055c598);
    return;
  }
  uVar1 = puVar3[4];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = *puVar3;
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = puVar3[1];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = puVar3[2];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = puVar3[3];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
    return;
  }
  iVar2 = *(int *)((int)this + 0x50);
  iVar4 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar4;
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
