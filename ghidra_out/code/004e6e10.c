
void __cdecl op_playergetnumgroups(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  int aiStack_3c [15];
  
  pvVar2 = vm;
  iStack_50 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_44 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_40 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_44 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_44,(uint *)&vm,&uStack_48,&fStack_4c);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    if (*(int *)((int)pvVar2 + 0x54) == 0) {
      *(undefined4 *)((int)pvVar2 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
    }
  }
  iVar3 = DAT_005ae98c;
  piVar5 = aiStack_3c;
  for (iVar4 = 0xf; iVar1 = DAT_005ae998, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  for (; iVar1 <= iVar3; iVar1 = iVar1 + 1) {
    iVar4 = FUN_004f6000(&DAT_005ae974,iVar1);
    if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) && (*(void **)(iVar4 + 0x48) == vm)) &&
       ((~*(uint *)(iVar4 + 0x30) & 0x100) != 0)) {
      aiStack_3c[*(char *)(iVar4 + 0x5ac)] = 1;
    }
  }
  piVar5 = aiStack_3c;
  iVar3 = 0xf;
  do {
    if (*piVar5 == 1) {
      iStack_50 = iStack_50 + 1;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)((int)pvVar2 + 0x54) == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)pvVar2 + 0x50);
  iVar4 = *(int *)((int)pvVar2 + 0x54) + -1;
  *(int *)((int)pvVar2 + 0x54) = iVar4;
  *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
  *(int *)(iVar3 + 4 + iVar4 * 8) = iStack_50;
  return;
}


