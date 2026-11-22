/* Rebuilt from lomse.exe op_setmissiledata @ 0x004b00a0 (341 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ac0 (*(void * *)0x00583ac0)
#define FUN_004affa0 ((undefined4 (__thiscall *)(void *, void *, int))0x004affa0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_current_missile_0055cd38 (*(char (*)[])0x0055cd38)

#define LOM_SELF_004b00a0 1
void __cdecl rb_004b00a0(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_10;
  typedef float _t_fStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fVar4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_10 = 0;
    fVar4 = fStack_4;
  }
  if ((char)uStack_10 != '\0') {
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
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
      }
      else {
        if (uVar3 != 4) {
          *(undefined4 *)((int)vm + 0x90) = 0xe;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
          return;
        }
        lVar5 = __ftol((float10)fStack_4);
        fStack_4 = __BC(float, lVar5);
      }
    }
    if (DAT_00583ac0 == (void *)0x0) {
      FUN_004d41c0(vm,s_no_current_missile_0055cd38);
      return;
    }
    if (*(int *)((int)vm + 0x54) == 0) {
      *(undefined4 *)((int)vm + 0x90) = 3;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = uStack_10;
      *(float *)(iVar1 + 4 + iVar2 * 8) = fVar4;
    }
    FUN_004affa0(DAT_00583ac0,vm,__BC(int, fStack_4));
  }
  return;
#undef uStack_10
#undef fStack_4
}
