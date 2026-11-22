/* Rebuilt from lomse.exe FUN_004f2c10 @ 0x004f2c10 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define PTR_FUN_0054de30 (*(undefined * *)0x0054de30)
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f2c10 1
void * __thiscall rb_004f2c10(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0054de30;
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    Ordinal_403(this,s_c__NEWERSTORM_H_storm_h_00573258,0x3eb,0);
  }
  return this;
}
