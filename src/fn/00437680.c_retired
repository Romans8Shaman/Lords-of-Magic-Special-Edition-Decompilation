/* Rebuilt from lomse.exe FUN_00437680 @ 0x00437680 (224 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00416a30 ((undefined4 (__fastcall *)(int))0x00416a30)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004e8bc0 ((undefined4 (__fastcall *)(int *))0x004e8bc0)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_00437680 1
uint __thiscall rb_00437680(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef uint _t_local_8;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
  
  local_8 = 0;
  local_c = -1;
  iVar1 = FUN_00416a30(param_1);
  if ((iVar1 != 0) && ((*(uint *)((int)this + 0x50) & 0x2100) == 0)) {
    return 0;
  }
  if ((*(uint *)((int)this + 0x50) & 0x40000) != 0) {
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x48),2);
    if (uVar2 == 0) {
      local_c = -1;
    }
    else {
      local_c = (int)*(short *)(uVar2 + 0x56);
    }
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar5 = (int *)(param_1 + 0xc4);
    do {
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      if ((*(uint *)((int)this + 0x50) & 0x100) == 0) {
        uVar3 = FUN_00525f10((int)piVar5);
        if (uVar3 != 0) {
          uVar2 = 0;
        }
      }
      if (-1 < local_c) {
        uVar3 = FUN_00529180(piVar5);
        if (uVar3 != 0) {
          iVar4 = FUN_004e8bc0(piVar5);
          if (iVar4 == local_c) goto LAB_0043773d;
        }
        uVar2 = 0;
      }
LAB_0043773d:
      piVar5 = piVar5 + 0x13;
      local_8 = local_8 | uVar2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return local_8;
#undef local_c
#undef local_8
}
