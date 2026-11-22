/* Rebuilt from lomse.exe FUN_0049e700 @ 0x0049e700 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583730 (*(int * *)0x00583730)
#define FUN_00476fb0 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00476fb0)
#define FUN_0049cc10 ((undefined4 (__thiscall *)(void *, int *, int, int))0x0049cc10)

#define LOM_SELF_0049e700 1
undefined4 __thiscall rb_0049e700(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  if (DAT_00583730 == (int *)0x0) {
    return 0;
  }
  if (*DAT_00583730 == 0) {
    return 0;
  }
  FUN_0049cc10(this,&local_10,param_1,param_2);
  uVar1 = FUN_00476fb0(DAT_00583730,local_10,local_c,local_8,local_4);
  return uVar1;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
