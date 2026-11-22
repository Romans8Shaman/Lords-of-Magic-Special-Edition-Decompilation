/* Rebuilt from lomse.exe FUN_004117f0 @ 0x004117f0 (276 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d4f0 ((undefined4 (__fastcall *)(int))0x0042d4f0)
#define FUN_004b0260 ((undefined4 (__fastcall *)(int *))0x004b0260)
#define FUN_005291e0 ((uint (__fastcall *)(int))0x005291e0)

#define LOM_SELF_004117f0 1
undefined4 __thiscall rb_004117f0(void *this,uint param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  local_8 = 0xf;
  puVar2 = (undefined4 *)((int)this + 0xe0);
  do {
    if ((param_1 & 1) != 0) {
      this_00 = (undefined4 *)FUN_005291e0((int)(puVar2 + -7));
      if (this_00 != (undefined4 *)0x0) {
        puVar3 = this_00 + 0xb;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(1)))(**(code **)*this_00))(this_00,1);
      }
    }
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[-2] = 0;
    puVar2 = puVar2 + 0x13;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((param_1 & 2) == 0) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x58c) = 0;
    *(undefined4 *)((int)this + 0x598) = 0;
    *(undefined4 *)((int)this + 0x564) = 0;
    *(undefined4 *)((int)this + 0x560) = 0;
    *(undefined4 *)((int)this + 0x55c) = 0;
    *(undefined4 *)((int)this + 0x578) = 0;
    *(undefined4 *)((int)this + 0x57c) = 0;
    *(undefined4 *)((int)this + 0x580) = 0;
    *(undefined4 *)((int)this + 0x584) = 0;
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(puVar2), __typeof__(1)))(**(code **)*puVar2))(puVar2,1);
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
    puVar2 = *(undefined4 **)((int)this + 0x58c);
    if (puVar2 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(puVar2), __typeof__(1)))(**(code **)*puVar2))(puVar2,1);
      *(undefined4 *)((int)this + 0x58c) = 0;
    }
    puVar2 = *(undefined4 **)((int)this + 0x598);
    if (puVar2 != (undefined4 *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(puVar2), __typeof__(1)))(**(code **)*puVar2))(puVar2,1);
      *(undefined4 *)((int)this + 0x598) = 0;
    }
    FUN_004b0260((int *)((int)this + 0x55c));
    FUN_0042d4f0((int)this + 0x568);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x538) = 0xffffffff;
  *(undefined4 *)((int)this + 0x550) = 0xffffffff;
  return 0xffffffff;
#undef local_8
}
