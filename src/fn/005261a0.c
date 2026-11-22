/* Rebuilt from lomse.exe FUN_005261a0 @ 0x005261a0 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_005261a0 1
undefined4 __thiscall rb_005261a0(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  if (*(int *)((int)this + 4) < param_1) {
    if (*(int *)((int)this + 8) != 0) {
      Ordinal_403(*(int *)((int)this + 8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    iVar1 = Ordinal_401(param_1 * 8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)this + 8) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 4) = 0;
      return 0;
    }
    *(int *)((int)this + 4) = param_1;
  }
  return 1;
}
