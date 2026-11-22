/* Rebuilt from lomse.exe FUN_00495960 @ 0x00495960 (217 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00583658 (*(int *)0x00583658)
#define FUN_0046ba20 ((undefined4 (__stdcall *)(void))0x0046ba20)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00495960 1
void __fastcall rb_00495960(int *param_1)

{
  int *arg1;
  int iVar1;
  int *piVar2;

  DAT_00583658 = DAT_00583658 + -0x4c;
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    iVar1 = 2;
    piVar2 = param_1;
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        arg1 = *(int **)*piVar2;
        if (arg1 != (int *)0x0) {
          DAT_00583648 = DAT_00583648 + -0x20;
          FUN_00495590(arg1);
          Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        }
        if (*piVar2 != 0) {
          DAT_0058364c = DAT_0058364c + -0x14;
          Ordinal_403(*piVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        }
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00539eb0(param_1 + 2,0x10,4,FUN_0046ba20);
  return;
}
