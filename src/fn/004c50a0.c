/* Rebuilt from lomse.exe FUN_004c50a0 @ 0x004c50a0 (151 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c4fa0 ((undefined4 (__thiscall *)(void *, undefined4 *, uint))0x004c4fa0)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004c50a0 1
undefined4 __thiscall rb_004c50a0(void *this,undefined4 *param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  local_4 = this;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)this;
  if (iVar1 == *(int *)((int)this + 4)) {
    *param_2 = 0;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  FUN_004c4fa0(this,&local_4,4);
  if (param_1 == (undefined4 *)0x0) {
    *(int *)this = iVar1;
    *param_2 = (int)local_4;
  }
  else {
    if (*param_2 < (int)local_4) {
      *(int *)this = iVar1;
      *param_2 = (int)local_4;
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    *param_2 = (int)local_4;
    FUN_004c4fa0(this,param_1,(uint)local_4);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 1;
#undef local_4
}
