/* Rebuilt from lomse.exe FUN_00476f70 @ 0x00476f70 (28 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053a320 ((undefined4 (__cdecl *)(undefined1 *, uint, uint, undefined *))0x0053a320)
#define LAB_00476f50 (*(undefined *)0x00476f50) /* code label used as address */

#define LOM_SELF_00476f70 1
void __fastcall rb_00476f70(uint *param_1)

{
  if (1 < (int)*param_1) {
    FUN_0053a320((undefined1 *)param_1[4],*param_1,0x10,&LAB_00476f50);
  }
  return;
}
