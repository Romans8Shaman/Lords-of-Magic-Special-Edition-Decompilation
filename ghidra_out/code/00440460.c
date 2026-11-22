
void __cdecl op_getbuildingparent(void *vm)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_0044051b;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar6;
    }
  }
  puVar2 = FUN_00485400(&DAT_005aa12c,(int)fStack_4,7);
  if (puVar2 == (undefined *)0x0) {
    FUN_004d41c0(vm,s_building_in_upgradebuilding_does_0055663c);
    return;
  }
  uVar3 = FUN_0043de50((int)puVar2);
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar5 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar5;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = uVar3;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_0044051b:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


