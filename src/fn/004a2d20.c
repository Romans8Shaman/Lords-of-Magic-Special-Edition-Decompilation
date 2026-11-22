/* Rebuilt from lomse.exe FUN_004a2d20 @ 0x004a2d20 (82 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a2c10 ((undefined4 (__fastcall *)(int))0x004a2c10)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004a2d20 1
undefined4 __thiscall rb_004a2d20(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  FUN_004a2c10((int)this);
  iVar1 = Ordinal_401(param_1 << 9,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0x14) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 1;
}
