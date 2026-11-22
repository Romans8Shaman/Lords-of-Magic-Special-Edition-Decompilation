/* Rebuilt from lomse.exe FUN_00406ee0 @ 0x00406ee0 (223 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00421840 ((undefined4 (__fastcall *)(void *))0x00421840)
#define FUN_004630e0 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004630e0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00406ee0 1
int __thiscall rb_00406ee0(void *this,int param_1)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_4 = *(int *)((int)this + 0x34);
  iVar5 = *(int *)((int)this + 0x40);
  iVar4 = 999999;
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
  if (iVar5 <= local_4) {
    do {
      pvVar2 = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
      if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 4) == 0)) {
        FUN_004630e0(puVar1 + 0x15e0,&local_8,iVar5);
        if (local_8 < 0) {
          iVar3 = FUN_00407d50((int)pvVar2);
          if ((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x48) == param_1)) {
            iVar3 = FUN_00421840(pvVar2);
            if (iVar3 < iVar4) {
              iVar4 = iVar3;
              local_c = iVar5;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_4);
  }
  return local_c;
#undef local_c
#undef local_8
#undef local_4
}
