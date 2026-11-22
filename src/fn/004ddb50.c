/* Rebuilt from lomse.exe op_getbuttonstaydown @ 0x004ddb50 (230 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00493330 ((int (__thiscall *)(void *, int))0x00493330)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_button_00572890 (*(char (*)[])0x00572890)

#define LOM_SELF_004ddb50 1
void __cdecl rb_004ddb50(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
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
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_004ddc0c;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar4);
    }
  }
  iVar1 = FUN_00493330(&DAT_005a7b50,__BC(int, fStack_4));
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_no_button_00572890);
    return;
  }
  uVar3 = *(uint *)(iVar1 + 0xc);
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(uint *)(iVar1 + 4 + iVar2 * 8) = -(uint)((uVar3 & 4) != 0);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_004ddc0c:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
