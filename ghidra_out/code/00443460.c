
void __cdecl op_canstayinside_q(void *vm)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  bVar1 = 0;
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
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
    uVar5 = FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
    if (uVar4 != 0) {
      uVar5 = FUN_0043e7b0(uVar4);
    }
    if (uVar5 == 0) {
      OutputDebugStringA(s_This_building_has_no_capital_som_00556724);
    }
    else if (0 < *(int *)(uVar5 + 0xd4)) {
      bVar1 = 1;
    }
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      iVar6 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar6;
      *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
      *(uint *)(iVar3 + 4 + iVar6 * 8) = -(uint)bVar1;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


