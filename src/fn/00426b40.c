/* Rebuilt from lomse.exe FUN_00426b40 @ 0x00426b40 (469 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)

#define LOM_SELF_00426b40 1
undefined4 __thiscall rb_00426b40(void *this, int volatile param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar3 = param_1;
  if ((*(uint *)(param_1 + 0x18) & 0x8000) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x100000) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) < 0) {
    return 0;
  }
  puVar4 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 4),0x2f);
  if ((puVar4 != (undefined4 *)0x0) && (puVar4[0x12] != *(int *)((int)this + 0x48))) {
    puVar4 = (undefined4 *)0x0;
  }
  bVar2 = false;
  if (puVar4 != (undefined4 *)0x0) {
    if ((((int)puVar4[0x14e] < 0) || (puVar4[0x153] != *(int *)((int)this + 0x28))) ||
       ((puVar4[0xc] & 0x8000) == 0)) {
      bVar2 = true;
    }
    if ((puVar4 != (undefined4 *)0x0) && (puVar5 = puVar4, !bVar2)) goto LAB_00426c26;
  }
  puVar5 = FUN_004fbed0(&DAT_005ae974,0);
  if (puVar5 != (undefined4 *)0x0) {
    do {
      if (((puVar5[0x153] == *(int *)((int)this + 0x28)) &&
          (puVar5[0x12] == *(int *)((int)this + 0x48))) && ((puVar5[0xc] & 0x8000) != 0)) break;
      puVar5 = FUN_004fbed0(&DAT_005ae974,(int)puVar5);
    } while (puVar5 != (undefined4 *)0x0);
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 4) = puVar5[10];
      goto LAB_00426c26;
    }
  }
  puVar5 = puVar4;
LAB_00426c26:
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)(iVar3 + 0xc) = 0;
    return 0;
  }
  if (*(int *)((int)this + 0x54) != puVar5[0x15]) {
    return 0;
  }
  param_1 = puVar5[0x14e];
  iVar8 = 0;
  if (param_1 < 0) {
    return 0;
  }
  iVar6 = FUN_00427880(&DAT_005aeefc,&param_1,0);
  iVar1 = *(int *)(DAT_005ae970 + (iVar6 + puVar5[7] * 8) * 4);
  while ((iVar6 != 8 && (-1 < param_1))) {
    iVar6 = FUN_00427880(&DAT_005aeefc,&param_1,0);
    iVar8 = iVar8 + 1;
    iVar1 = *(int *)(DAT_005ae970 + (iVar6 + iVar1 * 8) * 4);
  }
  if (iVar1 != *(int *)((int)this + 0x1c)) {
    return 0;
  }
  *(int *)(iVar3 + 0xc) = iVar8;
  param_1 = puVar5[0x14e];
  FUN_00427880(&DAT_005aeefc,&param_1,0);
  for (; 0 < iVar8; iVar8 = iVar8 + -1) {
    uVar7 = FUN_00427880(&DAT_005aeefc,&param_1,0);
    *(byte *)(iVar8 + 0x23 + iVar3) = (char)uVar7 - 4U & 7;
  }
  return 1;
}
