/* Rebuilt from lomse.exe FUN_00545750 @ 0x00545750 (102 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d57d8 (*(undefined *)0x005d57d8)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)

#define LOM_SELF_00545750 1
void __cdecl rb_00545750(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_005d57d8)) {
    FUN_0053bce0(*(undefined **)(param_1 + 0xc));
    FUN_0053bce0(*(undefined **)(param_1 + 0x10));
    FUN_0053bce0(*(undefined **)(param_1 + 0x14));
    FUN_0053bce0(*(undefined **)(param_1 + 0x18));
    FUN_0053bce0(*(undefined **)(param_1 + 0x1c));
    FUN_0053bce0(*(undefined **)(param_1 + 0x20));
    FUN_0053bce0(*(undefined **)(param_1 + 0x24));
  }
  return;
}
