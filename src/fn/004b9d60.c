/* Rebuilt from lomse.exe FUN_004b9d60 @ 0x004b9d60 (81 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b9dc0 ((undefined4 (__fastcall *)(int *))0x004b9dc0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b9d60 1
undefined4 __thiscall rb_004b9d60(void *this,int param_1)

{
  int iVar1;
  
  FUN_004b9dc0(this);
  if (param_1 < 1) {
    return 0;
  }
  iVar1 = Ordinal_401(param_1 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}
