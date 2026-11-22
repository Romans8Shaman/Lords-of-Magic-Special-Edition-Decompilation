/* Rebuilt from lomse.exe FUN_0052c9f0 @ 0x0052c9f0 (328 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9ddc (*(undefined4 *)0x005a9ddc)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_0041fda0 ((undefined4 (__fastcall *)(int))0x0041fda0)
#define FUN_0041fde0 ((int (__thiscall *)(void *, int, int))0x0041fde0)
#define FUN_00420970 ((undefined4 (__fastcall *)(void *))0x00420970)
#define FUN_0047af50 ((undefined4 (__fastcall *)(void *))0x0047af50)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004ba870 ((undefined4 (__fastcall *)(void *))0x004ba870)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_0052b6f0 ((undefined4 (__thiscall *)(void *, int, uint))0x0052b6f0)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)

#define LOM_SELF_0052c9f0 1
void __fastcall rb_0052c9f0(int *param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  bVar1 = false;
  iVar2 = FUN_0052d140((int)param_1);
  iVar7 = DAT_005ae98c;
  iVar4 = iVar2;
  iVar5 = DAT_005ae998;
  if (iVar2 == -1) {
    while( true ) {
      if (iVar7 < iVar5) {
        return;
      }
      pvVar3 = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
      if ((((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 4) == 0)) &&
          (*(int *)((int)pvVar3 + 0x48) == *param_1)) &&
         ((iVar4 = FUN_00420970(pvVar3), iVar4 != 0 &&
          ((*(uint *)((int)pvVar3 + 0x30) & 0x1c00000) == 0)))) break;
      iVar5 = iVar5 + 1;
    }
    FUN_0052b6f0(param_1,*(int *)((int)pvVar3 + 0x28),0);
    if (param_1[0xba] != 6) {
      FUN_0041fda0((int)pvVar3);
    }
    FUN_004ba870(&DAT_005a9ddc);
    FUN_0047af50(&DAT_005ae958);
    return;
  }
  do {
    iVar5 = FUN_0041fde0(&DAT_005ae974,*param_1,iVar4);
    puVar6 = FUN_00485080(&DAT_005aa12c,iVar5,0x3f);
    if (puVar6 == (undefined4 *)0x0) {
LAB_0052cb03:
      bVar1 = true;
    }
    else {
      iVar7 = FUN_00420970(puVar6);
      if ((iVar7 != 0) && ((puVar6[0xc] & 0x1c00000) == 0)) {
        FUN_0052b6f0(param_1,iVar5,0);
        if (param_1[0xba] != 6) {
          FUN_0041fda0((int)puVar6);
        }
        FUN_004ba870(&DAT_005a9ddc);
        goto LAB_0052cb03;
      }
    }
    if (iVar5 == iVar2) {
      bVar1 = true;
    }
    if (iVar5 == iVar4) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0047af50(&DAT_005ae958);
      return;
    }
    iVar4 = iVar5;
  } while( true );
}
