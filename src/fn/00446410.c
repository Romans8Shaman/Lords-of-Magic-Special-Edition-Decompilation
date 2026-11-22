/* Rebuilt from lomse.exe op_enumchildren @ 0x00446410 (359 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae94c (*(int *)0x005ae94c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004526a0 ((undefined4 (__thiscall *)(void *, void *, uint, int *))0x004526a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_No_building_or_city_00556824 (*(char (*)[])0x00556824)

#define LOM_SELF_00446410 1
void __cdecl rb_00446410(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  void *this_01;
  uint uVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define piStack_c (*(_t_piStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x14))
  
  this = vm;
  FUN_0040adb0(vm,&uStack_8);
  iVar1 = FUN_0041da00((int)this);
  if (iVar1 == 0) {
    if (((char)uStack_8 == '\x06') && (uVar2 = uStack_8, (uStack_8 & 0x100) == 0))
    goto LAB_00446461;
    *(undefined4 *)((int)this + 0x90) = 0x12;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  uVar2 = 0;
LAB_00446461:
  if (((char)uVar2 == '\x06') && ((uVar2 & 0x100) == 0)) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
      piStack_c = piStack_4;
    }
    iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,&uStack_14,&fStack_18);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    if (vm == (void *)0xfffffffd) {
      vm = *(void **)(DAT_005ae94c + 0x28);
    }
    this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
    this_01 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
    if (this_00 != (void *)0x0) {
      FUN_004526a0(this_00,this,uVar2,piStack_4);
      return;
    }
    if (this_01 == (void *)0x0) {
      FUN_004d41c0(this,s_No_building_or_city_00556824);
      return;
    }
    if (this_01 != (void *)0x0) {
      FUN_004526a0(this_01,this,uVar2,piStack_4);
    }
  }
  return;
#undef fStack_18
#undef uStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
