/* Rebuilt from lomse.exe FUN_004b7a20 @ 0x004b7a20 (237 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa134 (*(undefined4 *)0x005aa134)
#define DAT_005aa138 (*(undefined4 *)0x005aa138)
#define DAT_005aa13c (*(undefined4 *)0x005aa13c)
#define DAT_005aa140 (*(undefined4 *)0x005aa140)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cd358 (*(undefined *)0x005cd358)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004b2310 ((undefined4 (__fastcall *)(int))0x004b2310)
#define FUN_004b6030 ((undefined4 (__stdcall *)(int))0x004b6030)
#define FUN_004b7b50 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004b7b50)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8f40 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4))0x004b8f40)
#define FUN_004b9470 ((undefined4 (__stdcall *)(void))0x004b9470)
#define FUN_004c03b0 ((undefined4 (__stdcall *)(undefined4, char *))0x004c03b0)

#define LOM_SELF_004b7a20 1
void __stdcall rb_004b7a20(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  
  if (DAT_005d1e84 == 0) {
    bVar6 = true;
  }
  else {
    iVar5 = *(int *)(DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
    bVar6 = iVar5 == iVar1;
  }
  if (bVar6) {
    iVar1 = 0;
    puVar4 = &DAT_005af194;
    iVar5 = 0;
    do {
      iVar2 = FUN_004b6030(iVar1);
      if (-1 < iVar2) {
        FUN_004b7b50(iVar1,iVar2);
      }
      if ((iVar5 < 0) || (0x1d83f < iVar5)) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar4;
      }
      if (puVar3[0x44] != '\0') {
        if ((iVar5 < 0) || (0x1d83f < iVar5)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar4;
        }
        FUN_004c03b0(iVar1,puVar3 + 0x44);
      }
      iVar5 = iVar5 + 0x1d84;
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x1d84;
    } while (iVar5 < 0x1d840);
    FUN_004b2310(0x5aa12c);
    FUN_004b8f40(&DAT_005cd358,0,DAT_005aa134,DAT_005aa138,DAT_005aa13c,DAT_005aa140);
    FUN_004b9470();
  }
  return;
}
