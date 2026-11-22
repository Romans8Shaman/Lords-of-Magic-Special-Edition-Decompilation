/* Rebuilt from lomse.exe FUN_0049c890 @ 0x0049c890 (107 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058372c (*(int *)0x0058372c)
#define FUN_0049c830 ((undefined4 (__fastcall *)(int))0x0049c830)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define FUN_0052b240 ((undefined4 (__fastcall *)(undefined4 *))0x0052b240)
#define PTR_FUN_0054da30 (*(void * *)0x0054da30)

#define LOM_SELF_0049c890 1
undefined4 * __fastcall rb_0049c890(undefined4 *param_1)

{

  FUN_0052b240(param_1 + 0xc);
  *param_1 = &PTR_FUN_0054da30;
  DAT_0058372c = DAT_0058372c + 0x40;
  FUN_0049c830((int)param_1);
  param_1[0xd] = 0;
  FUN_0049da80(param_1,0);
  return param_1;
}
