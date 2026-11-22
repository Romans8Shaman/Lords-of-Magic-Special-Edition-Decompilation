
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_scale(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  FUN_00469f00(&DAT_005876d0,(int)vm);
  _DAT_005ae968 = vm;
  if (0 < iVar2) {
    FUN_00519b30(&DAT_005876d0,1);
    FUN_0051ab30(&DAT_005876d0,iVar5,iVar4,0x140,0xc0);
    FUN_004a6470(0x5ae958);
  }
  return;
}


