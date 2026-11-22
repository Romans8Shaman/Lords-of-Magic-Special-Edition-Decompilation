/* Rebuilt from lomse.exe FUN_00508f70 @ 0x00508f70 (49 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_TileSet__GetTypeName___invalid_s_00573718 (*(char (*)[])0x00573718)

#define LOM_SELF_00508f70 1
int __thiscall rb_00508f70(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x14) <= param_1)) {
    FUN_005047d0(s_TileSet__GetTypeName___invalid_s_00573718);
    return 0;
  }
  return *(int *)((int)this + 0x10) + 4 + param_1 * 0x58;
}
