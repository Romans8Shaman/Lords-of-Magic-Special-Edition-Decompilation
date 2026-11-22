/* Rebuilt from lomse.exe FUN_004c39b0 @ 0x004c39b0 (121 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c3b00 ((int (__thiscall *)(void *, int))0x004c3b00)
#define FUN_0052c720 ((undefined4 (__thiscall *)(void *, undefined4))0x0052c720)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c39b0 1
void __fastcall rb_004c39b0(undefined4 *param_1)

{
  void *this;
  int iVar1;
  
  if (param_1[2] != 0) {
    iVar1 = 0;
    if (0 < (int)param_1[1]) {
      do {
        this = (void *)FUN_004c3b00(param_1,iVar1);
        if (this != (void *)0x0) {
          FUN_0052c720(this,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[1]);
    }
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,4,*(int *)(iVar1 + -4),op_sunlight);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
