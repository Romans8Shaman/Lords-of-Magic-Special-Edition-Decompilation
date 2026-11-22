/* Rebuilt from lomse.exe op_singlerand @ 0x004b5950 (375 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004b5950 1
void __cdecl rb_004b5950(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef void * _t_pvStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x14))
  
  uStack_10 = FUN_0053a110();
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    pvVar4 = pvStack_4;
  }
  else if (uVar1 == 2) {
    pvVar4 = (void *)((int)pvStack_4 >> 8);
  }
  else if (uVar1 == 4) {
    lVar5 = __ftol((float10)__BC(float, pvStack_4));
    pvVar4 = (void *)lVar5;
  }
  else {
    FUN_00404ab0(this,0xe);
    pvVar4 = vm;
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
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  iVar2 = (int)pvVar4 + (1 - uStack_14);
  if (1 < iVar2) {
    uStack_14 = (int)uStack_10 % iVar2 + uStack_14;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar3;
  iVar2 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar3 * 8) = uStack_14;
  return;
#undef uStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef pvStack_4
}
