/* Rebuilt from lomse.exe FUN_00531b20 @ 0x00531b20 (197 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00531a80 ((undefined4 (__fastcall *)(int *))0x00531a80)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00531b20 1
undefined4 __thiscall rb_00531b20(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x18);
  if (iVar3 != 0) {
    iVar1 = iVar3;
    for (iVar2 = *(int *)(iVar3 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar1 = iVar2;
    }
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 0x1c);
    *(int *)((int)this + 0x1c) = iVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (*(int *)this != 0) {
    Ordinal_403(*(int *)this,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar3 = Ordinal_401(param_1 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)this = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    Ordinal_403(*(int *)((int)this + 4),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  iVar3 = Ordinal_401(param_1 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 4) = iVar3;
  if (iVar3 == 0) {
    FUN_00531a80(this);
    return 0;
  }
  *(int *)((int)this + 8) = param_1;
  return 1;
}
