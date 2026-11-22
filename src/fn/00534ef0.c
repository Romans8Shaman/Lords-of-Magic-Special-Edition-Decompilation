/* Rebuilt from lomse.exe FUN_00534ef0 @ 0x00534ef0 (115 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00536940 ((uint (__cdecl *)(uint, int))0x00536940)

#define LOM_SELF_00534ef0 1
void __cdecl rb_00534ef0(undefined2 *param_1,int param_2,short *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef ushort _t_auStack_20[16];
#define auStack_20 (*(_t_auStack_20 *)(_fr + 0x0))
  
  uVar1 = 0;
  puVar3 = auStack_20;
  iVar4 = 0xf;
  do {
    puVar3 = puVar3 + 1;
    uVar1 = (*param_3 + uVar1) * 2;
    iVar4 = iVar4 + -1;
    *puVar3 = uVar1;
    param_3 = param_3 + 1;
  } while (iVar4 != 0);
  if (-1 < param_2) {
    iVar4 = param_2 + 1;
    do {
      uVar2 = (uint)(ushort)param_1[1];
      if (uVar2 != 0) {
        uVar1 = auStack_20[uVar2];
        auStack_20[uVar2] = uVar1 + 1;
        uVar2 = FUN_00536940((uint)uVar1,uVar2);
        *param_1 = (short)uVar2;
      }
      param_1 = param_1 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
#undef auStack_20
}
