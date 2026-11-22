/* Rebuilt from lomse.exe FUN_004bee50 @ 0x004bee50 (159 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004bee50 1
undefined4 __thiscall rb_004bee50(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  iVar1 = *(int *)this;
  iVar2 = param_1 + 0x1f >> 5;
  if ((iVar1 != 0) && (*(int *)((int)this + 4) + 0x1f >> 5 != iVar2)) {
    if (iVar1 != 0) {
      Ordinal_403(iVar1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)this == 0) {
    iVar1 = Ordinal_401(iVar2 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)this = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)this + -4 + iVar1 * 4) = 0;
    } while (iVar1 < iVar2);
  }
  *(int *)((int)this + 4) = param_1;
  return 1;
}
