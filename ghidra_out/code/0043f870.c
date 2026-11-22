
void __cdecl op_entersprite(void *vm)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar1 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(pvVar2,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(pvVar2,0xe);
    return;
  }
  pvVar2 = (void *)FUN_00482ac0(&DAT_005aa12c,uStack_14,0);
  if (pvVar2 == (void *)0x0) {
    OutputDebugStringA(s_SF_enterbuilding___no_army_00556668);
    return;
  }
  pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  pvVar4 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  pvVar5 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
  if (pvVar3 != (void *)0x0) {
    FUN_004225a0(pvVar2,pvVar3,1);
    return;
  }
  if (pvVar4 != (void *)0x0) {
    FUN_004225a0(pvVar2,pvVar4,1);
    return;
  }
  if (pvVar5 != (void *)0x0) {
    FUN_004225a0(pvVar2,pvVar5,1);
  }
  return;
}


