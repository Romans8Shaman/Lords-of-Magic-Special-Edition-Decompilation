/* Rebuilt from lomse.exe FUN_004f5560 @ 0x004f5560 (106 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5770 ((undefined4 (__fastcall *)(undefined4 *))0x004f5770)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f5560 1
void * __thiscall rb_004f5560(void *this,byte param_1)

{
  if ((param_1 & 2) == 0) {
    FUN_004f5770(this);
    if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
      Ordinal_403(this,s_c__NEWERSTORM_H_storm_h_00573258,0x3eb,0);
    }
  }
  else {
    FUN_00539eb0(this,0x20,*(int *)((int)this + -4),FUN_004f5770);
    if ((int)this + -4 != 0) {
      Ordinal_403((int)this + -4,s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
      return this;
    }
  }
  return this;
}
