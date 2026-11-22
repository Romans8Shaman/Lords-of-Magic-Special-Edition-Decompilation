/* Rebuilt from lomse.exe op_createghost @ 0x0047e5d0 (816 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_0047cc00 ((int * (__cdecl *)(int, int, int, int, int, int, int))0x0047cc00)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_Couldn_t_create_follower_0055b130 (*(char (*)[])0x0055b130)

#define LOM_SELF_0047e5d0 1
void __cdecl rb_0047e5d0(void *vm)

{
  uint uVar1;
  void *this;
  int iVar2;
  int *this_00;
  int *piVar3;
  int *piVar4;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_3c;
  typedef uint _t_uStack_38;
  typedef int _t_iStack_34;
  typedef int _t_iStack_30;
  typedef uint _t_uStack_2c;
  typedef uint _t_uStack_28;
  typedef undefined4 _t_fStack_24;
  typedef undefined4 _t_fStack_20;
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_uStack_18;
  typedef int _t_aiStack_14[5];
#define iStack_3c (*(_t_iStack_3c *)(_fr + 0x4))
#define uStack_38 (*(_t_uStack_38 *)(_fr + 0x8))
#define iStack_34 (*(_t_iStack_34 *)(_fr + 0xc))
#define iStack_30 (*(_t_iStack_30 *)(_fr + 0x10))
#define uStack_2c (*(_t_uStack_2c *)(_fr + 0x14))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x18))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x1c))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x20))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x24))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x28))
#define aiStack_14 (*(_t_aiStack_14 *)(_fr + 0x2c))
  
  this = vm;
  aiStack_14[0] = -1;
  aiStack_14[1] = 0xffffffff;
  aiStack_14[2] = 0xffffffff;
  aiStack_14[4] = 0xffffffff;
  aiStack_14[3] = 100;
  FUN_0040adb0(vm,&uStack_1c);
  iVar2 = FUN_004026a0(&uStack_1c,&uStack_28,(uint *)&fStack_20,&fStack_24);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,(uint *)(aiStack_14 + 4),(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
LAB_0047e82c:
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,(uint *)(aiStack_14 + 3),(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,(uint *)(aiStack_14 + 2),(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,&uStack_38,(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar2 = FUN_0041bf10(this,&iStack_30,&iStack_34);
  if (iVar2 != 0) {
    FUN_0040adb0(this,&uStack_1c);
    iVar2 = FUN_004026a0(&uStack_1c,&uStack_2c,(uint *)&fStack_24,&fStack_20);
    if (iVar2 == 0) goto LAB_0047e82c;
    iVar2 = FUN_0041bf10(this,(int *)&vm,&iStack_3c);
    if (iVar2 != 0) {
      aiStack_14[0] = *(int *)((int)vm + 0x28);
      aiStack_14[1] = iStack_3c;
      this_00 = FUN_0047cc00(*(int *)(iStack_30 + 0x28),iStack_34,uStack_38,0,0,0,0);
      if (this_00 == (int *)0x0) {
        FUN_004d41c0(this,s_Couldn_t_create_follower_0055b130);
        return;
      }
      FUN_004a7d50(&DAT_005ae958,this_00,uStack_2c);
      uVar1 = this_00[0xc];
      piVar3 = aiStack_14;
      piVar4 = this_00 + 0x14;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      this_00[0xc] = uVar1 | uStack_28 & 0xc0 | 0x20;
      this_00[0x1d] = *(int *)((int)vm + 0x44);
      ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x2c)))(this_00);
    }
  }
  return;
#undef iStack_3c
#undef uStack_38
#undef iStack_34
#undef iStack_30
#undef uStack_2c
#undef uStack_28
#undef fStack_24
#undef fStack_20
#undef uStack_1c
#undef uStack_18
#undef aiStack_14
}
