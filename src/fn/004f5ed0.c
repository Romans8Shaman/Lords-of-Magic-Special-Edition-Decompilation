/* Rebuilt from lomse.exe FUN_004f5ed0 @ 0x004f5ed0 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ba1a0 ((undefined4 (__fastcall *)(undefined4 *))0x004ba1a0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004f5ed0 1
void * __thiscall rb_004f5ed0(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    FUN_004ba1a0(this);
    if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
      Ordinal_403(this,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  else {
    FUN_00539eb0(this,0x58,*(int *)((int)this + -4),FUN_004ba1a0);
    if ((int)this + -4 != 0) {
      Ordinal_403((int)this + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      return this;
    }
  }
  return this;
}
