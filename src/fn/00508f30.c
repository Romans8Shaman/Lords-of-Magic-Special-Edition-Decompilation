/* Rebuilt from lomse.exe FUN_00508f30 @ 0x00508f30 (55 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_TileSet__SetType_failed_005736fc (*(char (*)[])0x005736fc)

#define LOM_SELF_00508f30 1
undefined4 __thiscall rb_00508f30(void *this,int param_1,undefined4 param_2)

{
  if (((param_1 < 0) || (*(int *)((int)this + 0x2c) <= param_1)) ||
     (*(int *)((int)this + 0x18) == 0)) {
    FUN_005047d0(s_TileSet__SetType_failed_005736fc);
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x18) + param_1 * 4) = param_2;
  return 1;
}
