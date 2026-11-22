/* Rebuilt from lomse.exe op_enumplayerknownspells @ 0x004a0650 (465 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004bf000 ((undefined4 (__thiscall *)(void *, void *, uint, int *))0x004bf000)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_getplayerintelinfo___no__me__pla_0055c908 (*(char (*)[])0x0055c908)
#define s_getplayerintelinfo___no__you__pl_0055c8e0 (*(char (*)[])0x0055c8e0)

#define LOM_SELF_004a0650 1
void __cdecl rb_004a0650(void *vm)

{
  void *this;
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    piVar4 = piStack_4;
  }
  iVar1 = FUN_0041da00((int)this);
  if (iVar1 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_004a06bd;
    *(undefined4 *)((int)this + 0x90) = 0x12;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_004a06bd:
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (((int)vm < 0) || (0xf < (int)vm)) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = &DAT_005af194 + (int)vm * 0x1d84;
      }
      if (puVar2 == (undefined *)0x0) {
        FUN_004d41c0(this,s_getplayerintelinfo___no__me__pla_0055c908);
        return;
      }
      if (((int)uStack_14 < 0) || (0xf < (int)uStack_14)) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = puVar2 + uStack_14 * 0x88 + 0xd28;
      }
      if (puVar2 == (undefined *)0x0) {
        FUN_004d41c0(this,s_getplayerintelinfo___no__you__pl_0055c8e0);
        return;
      }
      FUN_004bf000(puVar2 + 0x7c,this,uVar3,piVar4);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef piStack_4
}
