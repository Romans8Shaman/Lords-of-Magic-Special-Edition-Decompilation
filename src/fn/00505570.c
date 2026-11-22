/* Rebuilt from lomse.exe op_setactivateprocedure @ 0x00505570 (290 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_dialog_0055c39c (*(char (*)[])0x0055c39c)

#define LOM_SELF_00505570 1
void __cdecl rb_00505570(void *vm)

{
  int iVar1;
  uint uVar2;
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
    fVar4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    fVar4 = fStack_4;
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_005055e2;
    *(undefined4 *)((int)vm + 0x90) = 0x12;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_005055e2:
  if ((char)uVar3 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
      }
      else {
        if (uVar2 != 4) {
          FUN_00404ab0(vm,0xe);
          return;
        }
        lVar5 = __ftol((float10)fStack_4);
        fStack_4 = __BC(float, lVar5);
      }
    }
    iVar1 = FUN_005005f0(&DAT_00584ae8,__BC(uint, fStack_4));
    if (iVar1 == 0) {
      FUN_004d41c0(vm,s_no_dialog_0055c39c);
      return;
    }
    *(uint *)(iVar1 + 0x2c) = uVar3;
    *(float *)(iVar1 + 0x30) = fVar4;
  }
  return;
#undef fStack_4
}
