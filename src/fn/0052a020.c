/* Rebuilt from lomse.exe op_setunitlevelrangeproc @ 0x0052a020 (100 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d2f48 (*(undefined4 *)0x005d2f48)
#define DAT_005d2f4c (*(undefined4 *)0x005d2f4c)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0052a020 1
void __cdecl rb_0052a020(void *param_1)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    DAT_005d2f48 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    DAT_005d2f4c = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 6;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  DAT_005d2f48 = 0;
  DAT_005d2f4c = local_4;
  return;
#undef local_4
}
