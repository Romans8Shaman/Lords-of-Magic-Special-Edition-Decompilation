/* Rebuilt from lomse.exe FUN_0050c980 @ 0x0050c980 (134 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0050c7f0 ((undefined4 (__fastcall *)(int))0x0050c7f0)

#define LOM_SELF_0050c980 1
uint __fastcall rb_0050c980(int *param_1)

{
  int iVar1;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x8))
#define iStack_c (*(_t_iStack_c *)(_fr + 0xc))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x10))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x14))
  
  if (param_1[0x15] < 0) {
    return 0;
  }
  iVar1 = FUN_0050c7f0((int)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_1[0xc] & 8U) == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffef;
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1), __typeof__(&local_14)))(**(code **)(*param_1 + 0x40)))(param_1,&local_14);
    if ((iVar1 != 0) &&
       ((((0 < local_14 || (0 < iStack_10)) || (0 < iStack_c)) || ((0 < iStack_8 || (0 < iStack_4)))
        ))) {
      param_1[0xc] = param_1[0xc] | 0x10;
    }
    param_1[0xc] = param_1[0xc] | 8;
  }
  return (uint)param_1[0xc] >> 4 & 1;
#undef local_14
#undef iStack_10
#undef iStack_c
#undef iStack_8
#undef iStack_4
}
