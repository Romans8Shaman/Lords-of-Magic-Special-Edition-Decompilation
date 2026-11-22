/* Rebuilt from lomse.exe FUN_0044ab50 @ 0x0044ab50 (104 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int * *)0x005d1e84)
#define FUN_00505f30 ((undefined4 (__stdcall *)(undefined1 *, uint, undefined4))0x00505f30)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_EnumGamesProc_returning_FALSE_00556d20 (*(char (*)[])0x00556d20)

#define LOM_SELF_0044ab50 1
undefined4 __stdcall rb_0044ab50(int param_1, undefined4 param_2, byte param_3, undefined4 unused_stack_12)

{
  undefined4 uVar1;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_auStack_34[52];
#define auStack_34 (*(_t_auStack_34 *)(_fr + 0x4))
  
  if ((param_3 & 1) != 0) {
    OutputDebugStringA(s_EnumGamesProc_returning_FALSE_00556d20);
    return 0;
  }
  FUN_00505f30(auStack_34,*(uint *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (DAT_005d1e84 == (int *)0x0) {
    return 0;
  }
  uVar1 = ((undefined4 (__thiscall *)(__typeof__((void *)(DAT_005d1e84)), __typeof__(*(undefined4 *)(param_1 + 0x30)), __typeof__(param_1 + 8), __typeof__(auStack_34)))(**(code **)(*DAT_005d1e84 + 0x2c)))
                    ((void *)(DAT_005d1e84),*(undefined4 *)(param_1 + 0x30),param_1 + 8,auStack_34);
  return uVar1;
#undef auStack_34
}
