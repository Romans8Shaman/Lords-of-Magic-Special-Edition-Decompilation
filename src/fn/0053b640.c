/* Rebuilt from lomse.exe FUN_0053b640 @ 0x0053b640 (98 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define FUN_00541d40 ((uint (__cdecl *)(int, uint))0x00541d40)
#define FUN_00541e20 ((undefined4 (__cdecl *)(uint *, byte *))0x00541e20)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_0053b640 1
float10 __cdecl rb_0053b640(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_18[6];
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
  
  while( true ) {
    if (DAT_00575094 < 2) {
      uVar2 = (byte)PTR_DAT_00574e88[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_00541d40((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  iVar3 = -1;
  pbVar4 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  iVar3 = FUN_00541e20(local_18,param_1);
  return (float10)*(double *)(iVar3 + 0x10);
#undef local_18
}
