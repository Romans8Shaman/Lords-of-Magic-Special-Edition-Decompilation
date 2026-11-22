/* Rebuilt from lomse.exe op_rotatez @ 0x0046ad20 (239 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00469e80 ((undefined4 (__thiscall *)(void *, float))0x00469e80)
#define FUN_004a6400 ((undefined4 (__thiscall *)(void *, float))0x004a6400)
#define FUN_004a6460 ((float10 (__fastcall *)(int))0x004a6460)
#define FUN_004a6470 ((undefined4 (__fastcall *)(int))0x004a6470)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define _DAT_0054d818 (*(double *)0x0054d818)

#define LOM_SELF_0046ad20 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0046ad20(void *vm)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    vm = __BC(void *, (float)(int)pvStack_4);
  }
  else if (uVar2 == 2) {
    vm = __BC(void *, ((float)(int)pvStack_4 * (float)_DAT_0054d818));
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    vm = pvStack_4;
  }
  FUN_00469e80(&DAT_005876d0,__BC(float, vm));
  fVar3 = FUN_004a6460(0x5ae958);
  FUN_004a6400(&DAT_005ae958,(float)((float10)__BC(float, vm) - fVar3));
  FUN_004a6470(0x5ae958);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
#undef pvStack_4
}
