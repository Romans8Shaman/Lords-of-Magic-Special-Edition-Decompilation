/* Rebuilt from lomse.exe FUN_0049c900 @ 0x0049c900 (93 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058372c (*(int *)0x0058372c)
#define FUN_0049cac0 ((undefined4 (__fastcall *)(int))0x0049cac0)
#define PTR_FUN_0054da30 (*(void * *)0x0054da30)
#define thunk_FUN_004b9b30 ((undefined4 (__fastcall *)(int *))0x004b9b20)

#define LOM_SELF_0049c900 1
void __fastcall rb_0049c900(undefined4 *param_1)

{

  *param_1 = &PTR_FUN_0054da30;
  DAT_0058372c = DAT_0058372c + -0x40;
  FUN_0049cac0((int)param_1);
  thunk_FUN_004b9b30(param_1 + 0xc);
  return;
}
