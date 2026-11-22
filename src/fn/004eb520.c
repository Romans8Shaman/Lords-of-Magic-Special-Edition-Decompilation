/* Rebuilt from lomse.exe FUN_004eb520 @ 0x004eb520 (343 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define DAT_00584728 (*(int *)0x00584728)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_00492910 ((int (__thiscall *)(void *, int))0x00492910)
#define FUN_004eb680 ((undefined4 (__thiscall *)(void *, int, int))0x004eb680)

#define LOM_SELF_004eb520 1
int * __thiscall rb_004eb520(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  iVar5 = 0;
  DAT_00583650 = DAT_00583650 + 0x10;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  piVar4 = (int *)((int)this + 0x4c);
  DAT_00584728 = DAT_00584728 + 0x158;
  iVar3 = 6;
  piVar1 = piVar4;
  do {
    piVar1[-6] = 0;
    *piVar1 = 0;
    piVar1[-0xe] = 100;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = FUN_00492760(&DAT_005a7b50,*param_1);
  *(int *)((int)this + 0x2c) = iVar3;
  puVar2 = (undefined4 *)FUN_00492910(&DAT_005a7b50,param_1[1]);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    *(undefined4 *)((int)this + 4) = *puVar2;
    *(undefined4 *)((int)this + 8) = puVar2[1];
    *(undefined4 *)((int)this + 0xc) = puVar2[2];
    *(undefined4 *)((int)this + 0x10) = puVar2[3];
  }
  iVar3 = FUN_00492760(&DAT_005a7b50,param_1[2]);
  *(int *)((int)this + 0x30) = iVar3;
  iVar3 = param_1[3];
  *(int *)this = iVar3;
  if (0 < iVar3 + 1) {
    piVar1 = param_1 + 10;
    do {
      iVar3 = FUN_00492760(&DAT_005a7b50,piVar1[-6]);
      piVar4[-6] = iVar3;
      iVar3 = FUN_00492760(&DAT_005a7b50,*piVar1);
      *piVar4 = iVar3;
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *(int *)this + 1);
  }
  *(int *)((int)this + 0xd4) = param_1[0x12];
  *(int *)((int)this + 100) = param_1[0x10];
  *(int *)((int)this + 0x68) = param_1[0x11];
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  puVar2 = (undefined4 *)((int)this + 0x14);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 100;
    puVar2 = puVar2 + 1;
  }
  FUN_004eb680(this,0,0);
  return this;
}
