/* Rebuilt from lomse.exe FUN_0052ee90 @ 0x0052ee90 (269 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7cb4 (*(uint *)0x005a7cb4)
#define DAT_005a7cb8 (*(int * *)0x005a7cb8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_0052ee90 1
void __stdcall rb_0052ee90(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  puVar4 = FUN_00485080(&DAT_005aa12c,iVar3,0x2f);
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = FUN_004c1cf0((int)puVar4);
    if (iVar3 != 0) {
      puVar5 = FUN_00485080(&DAT_005aa12c,puVar4[0x16c],0x2f);
      if (puVar5 != (undefined4 *)0x0) {
        iVar3 = FUN_004c1c50((int)puVar5);
        pvVar2 = DAT_005a7b78;
        if (iVar3 != 0) {
          uVar1 = puVar5[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar2);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          }
          else {
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = uVar1;
          }
          pvVar2 = DAT_005a7b78;
          uVar1 = puVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar2);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          }
          else {
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = uVar1;
          }
          FUN_004d05e0(DAT_005a7b78,DAT_005a7cb4,DAT_005a7cb8);
        }
      }
    }
  }
  return;
}
