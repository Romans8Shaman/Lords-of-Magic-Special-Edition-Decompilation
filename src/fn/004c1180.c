/* Rebuilt from lomse.exe FUN_004c1180 @ 0x004c1180 (402 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d0c (*(uint *)0x005a7d0c)
#define DAT_005a7d10 (*(int * *)0x005a7d10)
#define FUN_00421960 ((int (__thiscall *)(void *))0x00421960)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c1180 1
undefined4 __thiscall rb_004c1180(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  pvVar4 = (void *)FUN_00482ac0(this,*param_1,0);
  if (pvVar4 != (void *)0x0) {
    iVar5 = FUN_004c1cf0((int)pvVar4);
    if (iVar5 != 0) {
      puVar6 = FUN_00485080(this,*(int *)((int)pvVar4 + 0x5b0),0x2f);
      if (puVar6 != (undefined4 *)0x0) {
        iVar5 = *(int *)((int)pvVar4 + 0x5b8);
        if ((iVar5 < 0) || (0xf < iVar5)) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)this + iVar5 * 0x1d84 + 0x5068;
        }
        if (iVar5 != 0) {
          iVar5 = FUN_00421960(pvVar4);
          pvVar3 = DAT_005a7b78;
          iVar5 = (int)((ulonglong)((longlong)iVar5 * -0x51eb851f) >> 0x20);
          uVar1 = *(undefined4 *)((int)pvVar4 + 0x5b8);
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar3);
            *(undefined4 *)((int)pvVar3 + 0x90) = 0;
            *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar7 * 8) = uVar1;
          }
          pvVar4 = DAT_005a7b78;
          uVar1 = puVar6[0x12];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar4);
            *(undefined4 *)((int)pvVar4 + 0x90) = 0;
            *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          }
          else {
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            iVar2 = *(int *)((int)pvVar4 + 0x50);
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar7 * 8) = uVar1;
          }
          pvVar4 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar4);
            *(undefined4 *)((int)pvVar4 + 0x90) = 0;
            *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar7 * 8) = (iVar5 >> 5) - (iVar5 >> 0x1f);
          }
          FUN_004d09a0(DAT_005a7b78,DAT_005a7d0c,DAT_005a7d10,-3);
          return 1;
        }
      }
    }
  }
  return 0;
}
