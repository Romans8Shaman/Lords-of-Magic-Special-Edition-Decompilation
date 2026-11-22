/* Rebuilt from lomse.exe FUN_00415940 @ 0x00415940 (287 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00415610 ((undefined4 (__thiscall *)(void *, int))0x00415610)
#define FUN_00415a60 ((undefined4 (__fastcall *)(int))0x00415a60)
#define FUN_00415c20 ((undefined4 (__thiscall *)(void *, int *, int))0x00415c20)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_004bb120 ((undefined4 (__thiscall *)(void *, int))0x004bb120)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004f65e0 ((undefined4 (__thiscall *)(void *, int))0x004f65e0)
#define FUN_00526300 ((undefined4 (__cdecl *)(int))0x00526300)

#define LOM_SELF_00415940 1
undefined4 __thiscall rb_00415940(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *this_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_00415610(this,(int)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004f65e0(&DAT_005ae974,*(int *)((int)this + 0x28));
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    puVar2 = (undefined4 *)((int)this + 0xe0);
    do {
      puVar4 = puVar2 + -7;
      puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x4c) * 0x4c + 0xc4);
      for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[-2] = 0;
      iVar1 = iVar1 + 1;
      *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + 1;
      puVar2 = puVar2 + 0x13;
    } while (iVar1 < *(int *)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  FUN_00415a60((int)param_1);
  FUN_00415c20(param_1,(int *)0x0,-1);
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) & 0x9fffffff;
  *(undefined4 *)((int)param_1 + 0x5cc) = 0;
  FUN_00483be0(&DAT_005aa12c,this);
  FUN_00526300((int)param_1);
  if (((*(uint *)((int)param_1 + 0x30) & 0x80000) != 0) && (-1 < *(int *)((int)param_1 + 0x550))) {
    iVar1 = *(int *)((int)param_1 + 0x48);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if (this_00 != (undefined *)0x0) {
      FUN_004bb120(this_00,(int)param_1);
    }
    if (*(int *)((int)param_1 + 0x48) == DAT_005a7d8c) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    }
  }
  return 1;
}
