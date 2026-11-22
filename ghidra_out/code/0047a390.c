
void __cdecl op_issoundplaying(void *vm)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte abStack_14 [4];
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  }
  else {
    piVar5 = &DAT_00585408;
    piVar6 = &DAT_005854fc;
    do {
      if ((void *)*piVar6 == vm) {
        piVar1 = (int *)*piVar5;
        if (piVar1 == (int *)0x0) {
          if (*(int *)((int)pvVar2 + 0x54) != 0) {
            iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
            *(int *)((int)pvVar2 + 0x54) = iVar4;
            iVar3 = *(int *)((int)pvVar2 + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
            return;
          }
          goto LAB_0047a462;
        }
        (/*IC:0047a426*/**(code **)(*piVar1 + 0x24))(piVar1,abStack_14);
        if ((abStack_14[0] & 5) != 0) {
          if (*(int *)((int)pvVar2 + 0x54) != 0) {
            iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
            *(int *)((int)pvVar2 + 0x54) = iVar4;
            iVar3 = *(int *)((int)pvVar2 + 0x50);
            *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 1;
            return;
          }
          goto LAB_0047a462;
        }
      }
      piVar6 = piVar6 + 7;
      piVar5 = piVar5 + 1;
    } while ((int)piVar6 < 0x585588);
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
      return;
    }
LAB_0047a462:
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


