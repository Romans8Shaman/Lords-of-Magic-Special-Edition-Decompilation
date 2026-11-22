/* Rebuilt from lomse.exe FUN_004c4eb0 @ 0x004c4eb0 (112 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c4eb0 1
bool __thiscall rb_004c4eb0(void *this,undefined4 param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  if (*(int *)((int)this + 0xc) != 0) {
    Ordinal_403(*(int *)((int)this + 0xc),s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  iVar1 = Ordinal_401(param_1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  return iVar1 != 0;
}
