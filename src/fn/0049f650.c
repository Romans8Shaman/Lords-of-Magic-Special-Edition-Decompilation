/* Rebuilt from lomse.exe op_setplayerintelinfo @ 0x0049f650 (636 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0049f370 ((undefined4 (__thiscall *)(void *, int, int, int))0x0049f370)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_getplayerintelinfo___no__me__pla_0055c908 (*(char (*)[])0x0055c908)
#define s_getplayerintelinfo___no__you__pl_0055c8e0 (*(char (*)[])0x0055c8e0)

#define LOM_SELF_0049f650 1
void __cdecl rb_0049f650(void *vm)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_auStack_8[2];
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x0))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x18))
  
  pvVar2 = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar3 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
  if (iVar3 != 0) {
    FUN_0040adb0(pvVar2,auStack_8);
    iVar3 = FUN_004026a0(auStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar3 != 0) {
      FUN_0040adb0(pvVar2,auStack_8);
      iVar3 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
      if (iVar3 != 0) {
        FUN_0040adb0(pvVar2,auStack_8);
        iVar3 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
        pvVar1 = DAT_005a7b78;
        if (iVar3 != 0) {
          if (((int)uStack_1c < 0) || (0xf < (int)uStack_1c)) {
            puVar5 = (undefined *)0x0;
          }
          else {
            puVar5 = &DAT_005af194 + uStack_1c * 0x1d84;
          }
          if (puVar5 == (undefined *)0x0) {
            FUN_004d41c0(pvVar2,s_getplayerintelinfo___no__me__pla_0055c908);
            return;
          }
          if (((int)vm < 0) || (0xf < (int)vm)) {
            puVar5 = (undefined *)0x0;
          }
          else {
            puVar5 = puVar5 + (int)vm * 0x88 + 0xd28;
          }
          if (puVar5 == (undefined *)0x0) {
            FUN_004d41c0(pvVar2,s_getplayerintelinfo___no__you__pl_0055c8e0);
            return;
          }
          uStack_20 = 0x32;
          if (DAT_005a7d84 != 0) {
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
              iVar3 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(uint *)(iVar3 + 4 + iVar4 * 8) = uStack_1c;
            }
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
              iVar3 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(void **)(iVar3 + 4 + iVar4 * 8) = vm;
            }
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
              iVar3 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 10;
            }
            FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
            pvVar2 = DAT_005a7b78;
            FUN_0040adb0(DAT_005a7b78,auStack_8);
            iVar3 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
            if (iVar3 == 0) {
              *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
          }
          FUN_0049f370(puVar5 + 0x18,uStack_14,uStack_18,uStack_20);
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef auStack_8
}
