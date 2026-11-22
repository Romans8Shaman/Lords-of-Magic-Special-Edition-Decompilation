/* Rebuilt from lomse.exe FUN_004c6230 @ 0x004c6230 (49 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6270 ((undefined4 (__fastcall *)(int))0x004c6270)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c6230 1
uint __fastcall rb_004c6230(int param_1)

{
  int iVar1;
  
  FUN_004c6270(param_1);
  iVar1 = Ordinal_401(*(int *)(param_1 + 0xc) << 2,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)(param_1 + 0x1b4) = iVar1;
  return (uint)(iVar1 != 0);
}
