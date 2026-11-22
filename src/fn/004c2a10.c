/* Rebuilt from lomse.exe FUN_004c2a10 @ 0x004c2a10 (83 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c1cc0 ((undefined4 (__fastcall *)(int))0x004c1cc0)
#define _DAT_0054dcd4 (*(float *)0x0054dcd4)
#define _DAT_0054dcd8 (*(float *)0x0054dcd8)
#define _DAT_0054dcdc (*(float *)0x0054dcdc)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004c2a10 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall rb_004c2a10(int param_1,undefined4 unused_reg_1,int unused_stack_0)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0.0;
  iVar1 = FUN_004c1c50(param_1);
  if ((iVar1 == 1) && (iVar1 = FUN_004c1cc0(param_1), iVar1 == 1)) {
    local_4 = _DAT_0054dcd4;
  }
  fVar2 = (float10)local_4;
  if ((*(uint *)(param_1 + 0x30) & 0x20000000) != 0) {
    fVar2 = fVar2 - (float10)_DAT_0054dcd8;
  }
  lVar3 = __ftol((float10)unused_stack_0 * (fVar2 - (float10)_DAT_0054dcdc));
  return (int)lVar3;
#undef local_4
}
