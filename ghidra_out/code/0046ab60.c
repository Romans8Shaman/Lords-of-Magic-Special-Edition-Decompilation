
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_rotatex(void *vm)

{
  int iVar1;
  uint uVar2;
  void *pvStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    vm = (void *)(float)(int)pvStack_4;
  }
  else if (uVar2 == 2) {
    vm = (void *)((float)(int)pvStack_4 * (float)_DAT_0054d818);
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    vm = pvStack_4;
  }
  FUN_00469d80(&DAT_005876d0,(float)vm);
  FUN_004a6470(0x5ae958);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
}


