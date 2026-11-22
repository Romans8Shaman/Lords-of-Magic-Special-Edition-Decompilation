/* Rebuilt from lomse.exe FUN_00419360 @ 0x00419360 (127 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)
#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define FUN_00521e70 ((uint (__fastcall *)(int *))0x00521e70)

#define LOM_SELF_00419360 1
void __thiscall rb_00419360(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar4 = 0;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar3 = (int *)((int)this + 0xc4);
    do {
      iVar1 = FUN_00415470(piVar3);
      if (iVar1 != 0) {
        local_4 = local_4 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar4 < *(int *)((int)this + 0x4c));
  }
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar3 = (int *)((int)this + 0xd0);
    do {
      uVar2 = FUN_00521e30(piVar3 + -3);
      if (uVar2 == 0) {
        uVar2 = FUN_00521e70(piVar3 + -3);
        if ((uVar2 != 0) || (local_4 == 0)) goto LAB_004193c2;
      }
      else {
LAB_004193c2:
        *piVar3 = *piVar3 - param_1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar4 < *(int *)((int)this + 0x4c));
  }
  return;
#undef local_4
}
