/* Rebuilt from lomse.exe FUN_005440a0 @ 0x005440a0 (56 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00544060 ((undefined4 (__cdecl *)(ushort *, uint *))0x00544060)
#define FUN_00546720 ((undefined4 (__cdecl *)(ushort *, int *, byte *, int, int, int, int))0x00546720)

#define LOM_SELF_005440a0 1
void __cdecl rb_005440a0(uint *param_1, byte *volatile param_2)

{
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef ushort _t_local_c[6];
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  FUN_00546720(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_00544060(local_c,param_1);
  return;
#undef local_c
}
