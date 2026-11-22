/* Rebuilt from lomse.exe FUN_0047c4b0 @ 0x0047c4b0 (103 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_0047bfb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047bfb0)
#define FUN_0047c010 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047c010)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_0047c4b0 1
void __fastcall rb_0047c4b0(int *param_1)

{
  int iVar1;
  uchar _fr[0x100] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_f8[62];
#define local_f8 (*(_t_local_f8 *)(_fr + 0x0))
  
  if (*param_1 != 0) {
    iVar1 = FUN_0047bfb0(param_1,local_f8);
    while (iVar1 != 0) {
      iVar1 = FUN_0047bfb0(param_1,local_f8);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
    iVar1 = FUN_0047c010(param_1,local_f8);
    while (iVar1 != 0) {
      iVar1 = FUN_0047c010(param_1,local_f8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  }
  return;
#undef local_f8
}
