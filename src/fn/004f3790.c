/* Rebuilt from lomse.exe FUN_004f3790 @ 0x004f3790 (58 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f3740 ((undefined4 (__fastcall *)(ushort *))0x004f3740)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f3790 1
void __thiscall rb_004f3790(void *this)

{
  int iVar1;
  
  if (((*(byte *)this & 1) != 0) && (iVar1 = *(int *)((int)this + 4), iVar1 != 0)) {
    FUN_00539eb0(iVar1,0x10,*(int *)(iVar1 + -4),FUN_004f3740);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
  }
  return;
}
