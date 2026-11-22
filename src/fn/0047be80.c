/* Rebuilt from lomse.exe FUN_0047be80 @ 0x0047be80 (163 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9e04 (*(undefined4 *)0x005a9e04)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_00474a60 ((undefined4 * (__thiscall *)(void *, undefined4 *))0x00474a60)
#define FUN_00474a90 ((undefined4 (__thiscall *)(void *, uint *))0x00474a90)
#define FUN_00474af0 ((undefined4 (__fastcall *)(void *))0x00474af0)
#define FUN_004c4c10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c10)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define SetEvent (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d050) /* KERNEL32.DLL!SetEvent via IAT */
#define Sleep (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d0d0) /* KERNEL32.DLL!Sleep via IAT */

#define LOM_SELF_0047be80 1
undefined4 __thiscall rb_0047be80(void *this,undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_c[3];
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x38);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = FUN_004c4c10((void *)((int)this + 8),param_1);
  LeaveCriticalSection(lpCriticalSection);
  while (iVar1 == 0) {
    FUN_00474a60(&DAT_005a9e04,local_c);
    FUN_00474af0(&DAT_005a9e04);
    Sleep(100);
    FUN_00474a90(&DAT_005a9e04,local_c);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = FUN_004c4c10((void *)((int)this + 8),param_1);
    LeaveCriticalSection(lpCriticalSection);
  }
  SetEvent(*(HANDLE *)this);
  return 1;
#undef local_c
}
