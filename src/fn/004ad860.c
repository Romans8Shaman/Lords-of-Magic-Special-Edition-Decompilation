/* Rebuilt from lomse.exe FUN_004ad860 @ 0x004ad860 (165 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004ad050 ((int * (__thiscall *)(void *, int *))0x004ad050)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_Insufficient_memory_to_add_missi_0055cc58 (*(char (*)[])0x0055cc58)

#define LOM_SELF_004ad860 1
int * __fastcall rb_004ad860(int param_1,undefined4 unused_reg_1,int *unused_stack_0)

{
  void *this;
  int *piVar1;

  this = (void *)Ordinal_401(0x148,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_004ad050(this,unused_stack_0);
  }
  if (piVar1 == (int *)0x0) {
    OutputDebugStringA(s_Insufficient_memory_to_add_missi_0055cc58);
    return (int *)0x0;
  }
  FUN_004a7d50((void *)(param_1 + 0x482c),piVar1,*unused_stack_0);
  return piVar1;
}
