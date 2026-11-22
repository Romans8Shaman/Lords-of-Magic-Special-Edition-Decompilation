/* Rebuilt from lomse.exe FUN_00406fc0 @ 0x00406fc0 (223 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00421960 ((int (__thiscall *)(void *))0x00421960)
#define FUN_004630e0 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004630e0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00406fc0 1
int __thiscall rb_00406fc0(void *this,int param_1)

{
  undefined *puVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_4 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x40);
  iVar3 = 999999;
  local_c = -1;
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar1 == (undefined *)0x0) {
    return -1;
  }
  if (puVar1 + 0x15e0 == (undefined *)0x0) {
    return -1;
  }
  if (iVar4 <= local_4) {
    do {
      this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar4);
      if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) == 0)) {
        FUN_004630e0(puVar1 + 0x15e0,&local_8,iVar4);
        if (local_8 < 0) {
          iVar2 = FUN_00407d50((int)this_00);
          if ((iVar2 == 0) && (*(int *)((int)this_00 + 0x48) == param_1)) {
            iVar2 = FUN_00421960(this_00);
            if (iVar2 < iVar3) {
              iVar3 = iVar2;
              local_c = iVar4;
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= local_4);
  }
  return local_c;
#undef local_c
#undef local_8
#undef local_4
}
