
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_cameraorientation(void *vm)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  void *pvStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    vm = (void *)(float)(int)pvStack_4;
  }
  else if (uVar3 == 2) {
    vm = (void *)((float)(int)pvStack_4 * (float)_DAT_0054d818);
  }
  else {
    if (uVar3 != 4) goto LAB_0046a710;
    vm = pvStack_4;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    pvStack_4 = (void *)(float)(int)pvStack_4;
  }
  else if (uVar3 == 2) {
    pvStack_4 = (void *)((float)(int)pvStack_4 * (float)_DAT_0054d818);
  }
  else if (uVar3 != 4) {
LAB_0046a710:
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  FUN_00469c50(&DAT_005876d0,(float)pvStack_4 * (float)_DAT_0054d7e8 * (float)_DAT_0054d7f0,
               (float)vm * (float)_DAT_0054d7e8 * (float)_DAT_0054d7f0);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
}


