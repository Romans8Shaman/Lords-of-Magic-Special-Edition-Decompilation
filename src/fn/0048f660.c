/* Rebuilt from lomse.exe op_cleardialog @ 0x0048f660 (189 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_0048d620 ((undefined4 (__fastcall *)(int))0x0048d620)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_bad_dialog_identifier_0055c384 (*(char (*)[])0x0055c384)

#define LOM_SELF_0048f660 1
void __cdecl rb_0048f660(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
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
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar3);
    }
  }
  iVar1 = FUN_005005f0(&DAT_00584ae8,__BC(uint, fStack_4));
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_bad_dialog_identifier_0055c384);
    return;
  }
  FUN_0048d620(iVar1);
  return;
#undef fStack_4
}
