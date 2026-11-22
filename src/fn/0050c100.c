/* Rebuilt from lomse.exe FUN_0050c100 @ 0x0050c100 (160 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2d60 (*(int *)0x005d2d60)
#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define LAB_00462c80 (*(undefined *)0x00462c80) /* code label used as address */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define PTR_FUN_0054e910 (*(undefined * *)0x0054e910)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0050c100 1
void __fastcall rb_0050c100(undefined4 *param_1)

{
  undefined4 *this;
  int iVar1;

  *param_1 = &PTR_FUN_0054e910;
  DAT_005d2d60 = DAT_005d2d60 + -0x60;
  this = (undefined4 *)param_1[0x16];
  if (this != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(1)))(**(code **)*this))(this,1);
    param_1[0x16] = 0;
  }
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    FUN_00539eb0(iVar1,0xc,*(int *)(iVar1 + -4),&LAB_00462c80);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
  }
  FUN_004f59f0(param_1);
  return;
}
