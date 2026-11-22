/* Rebuilt from lomse.exe op_map2screen @ 0x0046b0c0 (582 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00469ae0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0046b0c0 1
void __cdecl rb_0046b0c0(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_44;
  typedef undefined4 _t_fStack_40;
  typedef uint _t_uStack_3c;
  typedef uint _t_uStack_38;
  typedef uint _t_uStack_34;
  typedef undefined4 _t_uStack_30;
  typedef void * _t_pvStack_2c;
  typedef undefined4 _t_fStack_28;
  typedef undefined4 _t_fStack_24;
  typedef undefined4 _t_uStack_20;
  typedef undefined4 _t_uStack_1c;
  typedef undefined4 _t_uStack_18;
#define fStack_44 (*(_t_fStack_44 *)(_fr + 0x4))
#define fStack_40 (*(_t_fStack_40 *)(_fr + 0x8))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0xc))
#define uStack_38 (*(_t_uStack_38 *)(_fr + 0x10))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x14))
#define uStack_30 (*(_t_uStack_30 *)(_fr + 0x18))
#define pvStack_2c (*(_t_pvStack_2c *)(_fr + 0x1c))
#define fStack_28 (*(_t_fStack_28 *)(_fr + 0x20))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x24))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x28))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x2c))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x30))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,&uStack_38,&uStack_3c,&fStack_40);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,&uStack_3c,&uStack_38,&fStack_44);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,&uStack_3c,&uStack_38,(undefined4 *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  pvStack_2c = vm;
  fStack_28 = fStack_44;
  fStack_24 = fStack_40;
  FUN_00469ae0(&DAT_005876d0,(undefined4 *)&pvStack_2c);
  uStack_30 = uStack_18;
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_18;
  }
  uStack_30 = uStack_1c;
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_1c;
  }
  uStack_30 = uStack_20;
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
    return;
  }
  iVar1 = *(int *)((int)this + 0x50);
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_20;
  return;
#undef fStack_44
#undef fStack_40
#undef uStack_3c
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef pvStack_2c
#undef fStack_28
#undef fStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
}
