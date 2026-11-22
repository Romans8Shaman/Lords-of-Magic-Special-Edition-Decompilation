/* Rebuilt from lomse.exe FUN_004192c0 @ 0x004192c0 (158 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define FUN_00521e70 ((uint (__fastcall *)(int *))0x00521e70)

#define LOM_SELF_004192c0 1
uint __fastcall rb_004192c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef uint _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar4 = 0;
  local_4 = 1000000;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar3 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_00415470(piVar3);
      if (iVar1 != 0) {
        local_8 = local_8 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    puVar5 = (uint *)(param_1 + 0xd0);
    do {
      uVar2 = FUN_00521e30((int *)(puVar5 + -3));
      if (uVar2 == 0) {
        uVar2 = FUN_00521e70((int *)(puVar5 + -3));
        if ((uVar2 != 0) || (local_8 == 0)) goto LAB_0041932c;
      }
      else {
LAB_0041932c:
        if ((int)*puVar5 <= (int)local_4) {
          local_4 = *puVar5;
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  return -(uint)(local_4 != 1000000) & local_4;
#undef local_8
#undef local_4
}
