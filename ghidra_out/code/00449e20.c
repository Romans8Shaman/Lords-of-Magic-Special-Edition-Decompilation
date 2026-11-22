
void __cdecl op_doshrineofteleport(void *vm)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  float fVar4;
  longlong lVar5;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  float fStack_4;
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fVar4 = fStack_4;
  }
  else if (uVar1 == 2) {
    fVar4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
      FUN_00404ab0(pvVar3,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = (float)lVar5;
  }
  if (*(int *)((int)pvVar3 + 0x54) < *(int *)((int)pvVar3 + 0x58)) {
    iVar2 = *(int *)((int)pvVar3 + 0x54) + 1;
    *(int *)((int)pvVar3 + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)pvVar3 + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)pvVar3 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar3 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    return;
  }
  pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  if (pvVar3 != (void *)0x0) {
    FUN_00448f50(pvVar3,(int)fVar4);
  }
  return;
}


