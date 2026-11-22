/* Rebuilt from lomse.exe op_setproviderbackground @ 0x00470640 (353 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int * *)0x005d1e84)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_Invalid_provider_id_00557f6c (*(char (*)[])0x00557f6c)

#define LOM_SELF_00470640 1
void __cdecl rb_00470640(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  float a2;
  longlong lVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef float _t_fStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    a2 = fStack_4;
  }
  else if (uVar2 == 2) {
    a2 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar2 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar3 = __ftol((float10)fStack_4);
    a2 = __BC(float, lVar3);
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (((int)vm < 0) || (7 < (int)vm)) {
    FUN_004d41c0(this,s_Invalid_provider_id_00557f6c);
  }
  else if (DAT_005d1e84 != (int *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(DAT_005d1e84), __typeof__(vm), __typeof__(a2)))(**(code **)(*DAT_005d1e84 + 0x68)))(DAT_005d1e84,vm,a2);
    return;
  }
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef fStack_4
}
