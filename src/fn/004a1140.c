/* Rebuilt from lomse.exe op_grantplayerknowledgeaboutartifact @ 0x004a1140 (311 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a0b70 ((undefined4 (__stdcall *)(int, char))0x004a0b70)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004a1140 1
void __cdecl rb_004a1140(void *vm)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  fVar4 = fStack_4;
  if (uVar3 == 1) {
LAB_004a11b4:
    cVar2 = SUB41(fVar4,0);
  }
  else {
    if (uVar3 == 2) {
      fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
      goto LAB_004a11b4;
    }
    if (uVar3 != 4) goto LAB_004a1253;
    lVar5 = __ftol((float10)fStack_4);
    cVar2 = (char)lVar5;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    FUN_004a0b70(__BC(int, fStack_4),cVar2);
    return;
  }
  if (uVar3 == 2) {
    FUN_004a0b70(__BC(int, fStack_4) >> 8,cVar2);
    return;
  }
  if (uVar3 == 4) {
    lVar5 = __ftol((float10)fStack_4);
    FUN_004a0b70((int)lVar5,cVar2);
    return;
  }
LAB_004a1253:
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
