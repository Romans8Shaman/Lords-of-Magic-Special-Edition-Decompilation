
void __cdecl op_rotatemap(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  uint uStack_10;
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
  iVar3 = FUN_004026a0(&uStack_8,&uStack_c,&uStack_10,(float *)&vm);
  iVar4 = DAT_005ae9b8;
  iVar2 = DAT_005ae9b4;
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  if (DAT_005ae9b4 < 1) {
    iVar3 = -1;
  }
  else {
    iVar3 = FUN_004a61e0(0x140,0xc0);
  }
  if (iVar3 < 0) {
    iVar5 = iVar2 >> 1;
    iVar4 = iVar4 >> 1;
  }
  else {
    iVar5 = iVar3 % DAT_005ae9b4;
    iVar4 = iVar3 / DAT_005ae9b4;
  }
  FUN_004a6400(&DAT_005ae958,(float)vm);
  fVar6 = FUN_004a6460(0x5ae958);
  vm = (void *)(float)fVar6;
  FUN_00469e80(&DAT_005876d0,(float)vm);
  FUN_004f76b0(0x5ae974);
  if (DAT_00583100 == '\x02') {
    FUN_00455320((int *)&DAT_005ae8e8);
    FUN_004554c0(0x5ae8e8);
  }
  FUN_00519a10(&DAT_005876d0);
  if (0 < iVar2) {
    FUN_0051ab30(&DAT_005876d0,iVar5,iVar4,0x140,0xc0);
  }
  FUN_004a6470(0x5ae958);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
}


