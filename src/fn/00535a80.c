/* Rebuilt from lomse.exe FUN_00535a80 @ 0x00535a80 (231 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00535a80 1
void __cdecl rb_00535a80(int param_1,int param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  uVar2 = *(ushort *)(param_2 + 2);
  iVar7 = 0;
  local_4 = 0xffffffff;
  iVar3 = 7;
  iVar8 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar8 = 3;
  }
  *(undefined2 *)(param_2 + 6 + param_3 * 4) = 0xffff;
  if (-1 < param_3) {
    puVar6 = (ushort *)(param_2 + 6);
    uVar4 = (uint)uVar2;
    param_2 = param_3 + 1;
    do {
      uVar5 = (uint)*puVar6;
      iVar7 = iVar7 + 1;
      if ((iVar3 <= iVar7) || (uVar4 != uVar5)) {
        if (iVar7 < iVar8) {
          psVar1 = (short *)(param_1 + 0xa74 + uVar4 * 4);
          *psVar1 = *psVar1 + (short)iVar7;
        }
        else if (uVar4 == 0) {
          if (iVar7 < 0xb) {
            *(short *)(param_1 + 0xab8) = *(short *)(param_1 + 0xab8) + 1;
          }
          else {
            *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
          }
        }
        else {
          if (uVar4 != local_4) {
            psVar1 = (short *)(param_1 + 0xa74 + uVar4 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xab4) = *(short *)(param_1 + 0xab4) + 1;
        }
        iVar7 = 0;
        local_4 = uVar4;
        if (uVar5 == 0) {
          iVar3 = 0x8a;
          iVar8 = 3;
        }
        else if (uVar4 == uVar5) {
          iVar3 = 6;
          iVar8 = 3;
        }
        else {
          iVar3 = 7;
          iVar8 = 4;
        }
      }
      puVar6 = puVar6 + 2;
      param_2 = param_2 + -1;
      uVar4 = uVar5;
    } while (param_2 != 0);
  }
  return;
#undef local_4
}
