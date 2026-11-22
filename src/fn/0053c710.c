/* Rebuilt from lomse.exe FUN_0053c710 @ 0x0053c710 (82 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005440a0 ((undefined4 (__cdecl *)(uint *, byte *))0x005440a0)
#define FUN_005440e0 ((undefined4 (__cdecl *)(uint *, byte *))0x005440e0)

#define LOM_SELF_0053c710 1
void __cdecl rb_0053c710(int param_1, uint *param_2, byte *volatile param_3)

{
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_8;
  typedef uint _t_uStack_4;
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x0))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x4))
  
  if (param_1 == 0) {
    FUN_005440e0((uint *)&param_3,param_3);
    *param_2 = (uint)param_3;
    return;
  }
  FUN_005440a0(&uStack_8,param_3);
  *param_2 = uStack_8;
  param_2[1] = uStack_4;
  return;
#undef uStack_8
#undef uStack_4
}
