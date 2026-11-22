/* Rebuilt from lomse.exe FUN_00543ce0 @ 0x00543ce0 (157 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00543c00 ((undefined4 (__cdecl *)(int, int))0x00543c00)
#define FUN_00543c70 ((undefined4 (__cdecl *)(int, int))0x00543c70)

#define LOM_SELF_00543ce0 1
undefined4 __cdecl rb_00543ce0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = 0x1f - ((((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(param_1 + iVar3 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_00543c00(param_1,param_2 + 1), iVar1 == 0)) {
    local_4 = FUN_00543c70(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + iVar3 * 4) = *(uint *)(param_1 + iVar3 * 4) & -1 << (bVar2 & 0x1f);
  iVar3 = iVar3 + 1;
  if (iVar3 < 3) {
    puVar4 = (undefined4 *)(param_1 + iVar3 * 4);
    for (iVar1 = 3 - iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return local_4;
#undef local_4
}
