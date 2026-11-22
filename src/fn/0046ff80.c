/* Rebuilt from lomse.exe FUN_0046ff80 @ 0x0046ff80 (138 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583258 (*(int *)0x00583258)
#define DAT_0058325c (*(undefined4 *)0x0058325c)
#define FUN_0046fd80 ((undefined4 (__stdcall *)(undefined4, char *, undefined4))0x0046fd80)
#define FUN_0046fe60 ((undefined4 (__thiscall *)(void *, undefined4))0x0046fe60)
#define FUN_00470090 ((undefined4 (__thiscall *)(void *, int))0x00470090)
#define Ordinal_103 ((undefined4 (__stdcall *)(undefined4))0x00533882) /* thunk -> STORM.DLL!Ordinal_103 */
#define Ordinal_118 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4))0x00533888) /* thunk -> STORM.DLL!Ordinal_118 */
#define s_JoiningPlayer_00557c2c (*(char (*)[])0x00557c2c)

#define LOM_SELF_0046ff80 1
undefined4 __fastcall rb_0046ff80(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  undefined4 *arg6;
  int iVar1;
  
  DAT_00583258 = -1;
  DAT_0058325c = 0;
  Ordinal_103(FUN_0046fd80);
  if (-1 < DAT_00583258) {
    iVar1 = FUN_0046fe60(param_1,DAT_00583258);
    if (iVar1 != 0) {
      arg6 = (undefined4 *)((int)param_1 + 0x2c4);
      *(undefined4 *)((int)param_1 + 0x3c8) = *(undefined4 *)((int)param_1 + 0x3b4);
      *arg6 = 0;
      iVar1 = Ordinal_118(*(undefined4 *)((int)param_1 + 0x3b4),unused_stack_0,0,
                          (int)param_1 + 0x104,s_JoiningPlayer_00557c2c,arg6);
      if (iVar1 != 0) {
        FUN_00470090(param_1,0);
        return 1;
      }
      *arg6 = 0xffff;
    }
  }
  return 0;
}
