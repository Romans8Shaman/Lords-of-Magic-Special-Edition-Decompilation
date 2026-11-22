/* Rebuilt from lomse.exe FUN_004c5c00 @ 0x004c5c00 (146 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c51d0 ((undefined4 (__fastcall *)(int))0x004c51d0)
#define FUN_004c5210 ((undefined4 (__fastcall *)(int))0x004c5210)
#define FUN_004c5aa0 ((undefined4 (__fastcall *)(undefined4 *))0x004c5aa0)
#define FUN_004c6270 ((undefined4 (__fastcall *)(int))0x004c6270)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c5c00 1
void __fastcall rb_004c5c00(int *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  if (*param_1 != 0) {
    Ordinal_403(*param_1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    *param_1 = 0;
  }
  iVar1 = param_1[0x6b];
  if (iVar1 != 0) {
    FUN_00539eb0(iVar1,0x19c,*(int *)(iVar1 + -4),FUN_004c5210);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    param_1[0x6b] = 0;
  }
  FUN_004c51d0((int)(param_1 + 4));
  FUN_004c6270((int)param_1);
  FUN_004c5aa0(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  return;
}
