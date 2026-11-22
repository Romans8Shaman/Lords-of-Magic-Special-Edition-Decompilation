/* Rebuilt from lomse.exe FUN_00541e20 @ 0x00541e20 (150 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00544060 ((undefined4 (__cdecl *)(ushort *, uint *))0x00544060)
#define FUN_00546720 ((undefined4 (__cdecl *)(ushort *, int *, byte *, int, int, int, int))0x00546720)

#define LOM_SELF_00541e20 1
uint * __cdecl rb_00541e20(uint *param_1, byte *volatile param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14;
  typedef uint _t_local_10;
  typedef ushort _t_local_c[6];
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
  
  pbVar1 = param_2;
  uVar4 = 0;
  uVar2 = FUN_00546720(local_c,(int *)&param_2,param_2,0,0,0,0);
  if ((uVar2 & 4) == 0) {
    iVar3 = FUN_00544060(local_c,&local_14);
    if (((uVar2 & 2) != 0) || (iVar3 == 1)) {
      uVar4 = 0x80;
    }
    if (((uVar2 & 1) != 0) || (iVar3 == 2)) {
      uVar4 = uVar4 | 0x100;
    }
  }
  else {
    uVar4 = 0x200;
    local_14 = 0;
    local_10 = 0;
  }
  *param_1 = uVar4;
  param_1[1] = (int)param_2 - (int)pbVar1;
  param_1[4] = local_14;
  param_1[5] = local_10;
  return param_1;
#undef local_14
#undef local_10
#undef local_c
}
