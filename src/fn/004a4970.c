/* Rebuilt from lomse.exe FUN_004a4970 @ 0x004a4970 (396 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_005838a4 (*(int *)0x005838a4)
#define FUN_0046ba20 ((undefined4 (__stdcall *)(void))0x0046ba20)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00498b90 ((undefined4 (__fastcall *)(int *))0x00498b90)
#define FUN_004a4b00 ((undefined4 (__thiscall *)(void *, int))0x004a4b00)
#define FUN_004b1460 ((undefined4 (__fastcall *)(int))0x004b1460)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define thunk_FUN_004f5f40 ((undefined4 (__fastcall *)(int))0x004f5d10)
#define thunk_FUN_00508b00 ((undefined4 (__fastcall *)(undefined4 *))0x00508af0)
#define thunk_FUN_00531a80 ((undefined4 (__fastcall *)(int *))0x00531a70)

#define LOM_SELF_004a4970 1
void __fastcall rb_004a4970(void *param_1)

{
  int iVar1;

  DAT_005838a4 = DAT_005838a4 + -0x308;
  FUN_004a4b00(param_1,1);
  FUN_004b1460((int)param_1);
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * -8
    ;
    if (*(int *)((int)param_1 + 0xa8) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0xa8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)param_1 + 0xa8) = 0;
  }
  if (*(int *)((int)param_1 + 0xac) != 0) {
    DAT_005838a4 = DAT_005838a4 +
                   *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * -0x10;
    iVar1 = *(int *)((int)param_1 + 0xac);
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,0x10,*(int *)(iVar1 + -4),FUN_0046ba20);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    *(undefined4 *)((int)param_1 + 0xac) = 0;
  }
  thunk_FUN_00531a80((int *)((int)param_1 + 0x2e8));
  FUN_00498b90((int *)((int)param_1 + 0x278));
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)((int)param_1 + 0x254));
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)((int)param_1 + 0x234));
  thunk_FUN_00508b00((undefined4 *)((int)param_1 + 0xd8));
  thunk_FUN_004f5f40((int)param_1 + 0x1c);
  return;
}
