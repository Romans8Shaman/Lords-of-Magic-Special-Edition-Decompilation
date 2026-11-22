/* Rebuilt from lomse.exe FUN_00433690 @ 0x00433690 (424 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0041f980 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x0041f980)
#define FUN_0041f990 ((int (__thiscall *)(void *, char))0x0041f990)
#define FUN_00432a60 ((undefined4 (__thiscall *)(void *, int, int))0x00432a60)
#define FUN_00432bc0 ((int (__fastcall *)(short *))0x00432bc0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004bfd00 ((int (__fastcall *)(int, undefined4, undefined4))0x004bfd00)
#define FUN_004bfd10 ((int (__fastcall *)(int, undefined4, undefined4))0x004bfd10)
#define FUN_004bfd20 ((int (__fastcall *)(int, undefined4, undefined4))0x004bfd20)
#define FUN_004bfd30 ((undefined4 (__stdcall *)(undefined4))0x004bfd30)

#define LOM_SELF_00433690 1
int __thiscall rb_00433690(void *this,int param_1,int param_2)

{
  undefined4 *this_00;
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined4 unused_reg_1;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  if (param_1 == 1) {
    bVar7 = *(int *)((int)this + 8) == iVar3;
  }
  else {
    bVar7 = *(int *)((int)this + 8) != iVar3;
  }
  if (bVar7) {
    this_00 = FUN_00485080(&DAT_005aa12c,*(int *)this,0x2f);
    iVar4 = *(int *)((int)this + 8);
  }
  else {
    this_00 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 4),0x2f);
    iVar4 = *(int *)((int)this + 0xc);
  }
  if ((iVar4 < 0) || (0xf < iVar4)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_005af194 + iVar4 * 0x1d84;
  }
  if ((this_00 == (undefined4 *)0x0) || (puVar5 == (undefined *)0x0)) {
    return 0;
  }
  iVar6 = 0;
  psVar1 = (short *)FUN_00432a60(this,param_1,0);
  iVar4 = 7;
  unused_reg_1 = 0;
  do {
    if ((char)psVar1[2] == param_2) {
      iVar2 = FUN_00432bc0(psVar1);
      iVar6 = iVar6 - iVar2;
      unused_reg_1 = 0;
    }
    psVar1 = psVar1 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  switch(param_2) {
  case 1:
    iVar3 = FUN_004bfd00((int)puVar5,iVar3,iVar3);
    return iVar6 + iVar3;
  case 2:
    iVar3 = FUN_004bfd10((int)puVar5,unused_reg_1,iVar3);
    return iVar6 + iVar3;
  case 3:
    iVar3 = FUN_004bfd20((int)puVar5,unused_reg_1,iVar3);
    return iVar6 + iVar3;
  case 4:
    iVar3 = FUN_004bfd30(iVar3);
    return iVar6 + iVar3;
  case 5:
    iVar3 = FUN_0041f980((int)this_00,unused_reg_1,iVar3);
    return iVar6 + iVar3;
  case 6:
    iVar3 = FUN_004bfd30(iVar3);
    return iVar6 + iVar3;
  case 7:
    iVar3 = FUN_0041f990(this_00,(char)iVar3);
    iVar6 = iVar6 + iVar3;
  }
  return iVar6;
}
