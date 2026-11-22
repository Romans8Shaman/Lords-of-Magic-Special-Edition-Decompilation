
void __cdecl op_getarmycontainers(void *vm)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
  }
  else {
    uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
    if (uVar3 == 0) {
      puVar4 = FUN_00485080(&DAT_005aa12c,(int)vm,0x3f);
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)((int)pvVar1 + 0x54) != 0) {
          iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
          *(int *)((int)pvVar1 + 0x54) = iVar5;
          iVar2 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = 0;
          return;
        }
      }
      else {
        uVar6 = FUN_004e7170((int)puVar4);
        if (*(int *)((int)pvVar1 + 0x54) != 0) {
          iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
          *(int *)((int)pvVar1 + 0x54) = iVar5;
          iVar2 = *(int *)((int)pvVar1 + 0x50);
          *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar6;
          return;
        }
      }
    }
    else {
      uVar6 = FUN_004e7170(uVar3);
      if (*(int *)((int)pvVar1 + 0x54) != 0) {
        iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar5;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar6;
        return;
      }
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
  }
  FUN_004d4550(pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  return;
}


