/* Rebuilt from lomse.exe op_windowswaitcursorsleep @ 0x00474b20 (237 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9e04 (*(undefined4 *)0x005a9e04)
#define FUN_00474a60 ((undefined4 * (__thiscall *)(void *, undefined4 *))0x00474a60)
#define FUN_00474a90 ((undefined4 (__thiscall *)(void *, uint *))0x00474a90)
#define FUN_00474af0 ((undefined4 (__fastcall *)(void *))0x00474af0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_0_to_30000_only_005586a4 (*(char (*)[])0x005586a4)

#define LOM_SELF_00474b20 1
void __cdecl rb_00474b20(void *vm)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_10;
  typedef uint _t_auStack_c[3];
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define auStack_c (*(_t_auStack_c *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_10 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
      fStack_10 = __BC(float, (__BC(int, fStack_10) >> 8));
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar3 = __ftol((float10)fStack_10);
      fStack_10 = __BC(float, lVar3);
    }
  }
  if ((__BC(int, fStack_10) < 0) || (30000 < __BC(int, fStack_10))) {
    FUN_004d41c0(vm,s_0_to_30000_only_005586a4);
    return;
  }
  FUN_00474a60(&DAT_005a9e04,auStack_c);
  FUN_00474af0(&DAT_005a9e04);
  Sleep(__BC(DWORD, fStack_10));
  FUN_00474a90(&DAT_005a9e04,auStack_c);
  return;
#undef fStack_10
#undef auStack_c
}
