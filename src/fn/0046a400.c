/* Rebuilt from lomse.exe op_cameraposition @ 0x0046a400 (459 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00469d00 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x00469d00)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define _DAT_0054d818 (*(double *)0x0054d818)

#define LOM_SELF_0046a400 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0046a400(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_18;
  typedef float _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef void * _t_pvStack_c;
  typedef uint _t_uStack_8;
  typedef void * _t_pvStack_4;
#define pvStack_18 (*(_t_pvStack_18 *)(_fr + 0x0))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define pvStack_c (*(_t_pvStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_c = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
    pvStack_c = pvStack_4;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    vm = __BC(void *, (float)(int)pvStack_c);
  }
  else if (uVar1 == 2) {
    vm = __BC(void *, ((float)(int)pvStack_c * (float)_DAT_0054d818));
  }
  else {
    if (uVar1 != 4) goto LAB_0046a5bc;
    vm = pvStack_c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_10,(uint *)&pvStack_18,&fStack_14);
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
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvStack_18 = __BC(void *, (float)(int)pvStack_4);
  }
  else if (uVar1 == 2) {
    pvStack_18 = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054d818));
  }
  else {
    if (uVar1 != 4) {
LAB_0046a5bc:
      FUN_00404ab0(this,0xe);
      return;
    }
    pvStack_18 = pvStack_4;
  }
  FUN_00469d00(&DAT_005876d0,pvStack_18,__BC(undefined4, fStack_14),vm);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
#undef pvStack_18
#undef fStack_14
#undef uStack_10
#undef pvStack_c
#undef uStack_8
#undef pvStack_4
}
