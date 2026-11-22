/* Rebuilt from lomse.exe FUN_004b1410 @ 0x004b1410 (78 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b1460 ((undefined4 (__fastcall *)(int))0x004b1460)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b1410 1
undefined4 __thiscall rb_004b1410(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return 0;
  }
  FUN_004b1460((int)this);
  *(int *)((int)this + 0xd4) = param_1;
  iVar1 = Ordinal_401(param_1 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 200) = iVar1;
  return (uint)(iVar1 != 0);
}
