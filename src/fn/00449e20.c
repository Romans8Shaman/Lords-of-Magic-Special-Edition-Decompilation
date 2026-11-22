/* Rebuilt from lomse.exe op_doshrineofteleport @ 0x00449e20 (334 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00448f50 ((undefined4 (__thiscall *)(void *, int))0x00448f50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00449e20 1
void __cdecl rb_00449e20(void *vm)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef float _t_fStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fVar4 = fStack_4;
  }
  else if (uVar1 == 2) {
    fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar1 != 4) {
      FUN_00404ab0(pvVar3,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = __BC(float, lVar5);
  }
  if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
    iVar2 = *(int *)((int)pvVar3 + 0x54) + 1;
    *(int *)((int)pvVar3 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar3 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    return;
  }
  pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  if (pvVar3 != (void *)0x0) {
    FUN_00448f50(pvVar3,__BC(int, fVar4));
  }
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef fStack_4
}
