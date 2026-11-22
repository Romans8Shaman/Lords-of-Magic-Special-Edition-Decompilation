
void __cdecl op_findmatchingbrain(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  float fStack_4;
  
  pvVar2 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar7 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar7 = 0;
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  if ((char)uVar7 == '\0') {
    return;
  }
  if (*(int *)((int)pvVar2 + 0x54) < *(int *)((int)pvVar2 + 0x58)) {
    iVar3 = *(int *)((int)pvVar2 + 0x54) + 1;
    *(int *)((int)pvVar2 + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)pvVar2 + 0x50) + -8 + iVar3 * 8);
    fVar4 = *(float *)(*(int *)((int)pvVar2 + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar2 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar5 = 0;
    fVar4 = fStack_4;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fVar4 = (float)((int)fVar4 >> 8);
    }
    else {
      if (uVar5 != 4) {
        *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
        goto LAB_0041072a;
      }
      lVar8 = __ftol((float10)fVar4);
      fVar4 = (float)lVar8;
    }
  }
  iVar3 = FUN_0041be40(pvVar2,&vm);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_0040f1c0(&DAT_005aeed0,(int)vm,(uint)fVar4,uVar7,(int)fStack_4);
  if (*(int *)((int)pvVar2 + 0x54) != 0) {
    iVar6 = *(int *)((int)pvVar2 + 0x54) + -1;
    *(int *)((int)pvVar2 + 0x54) = iVar6;
    iVar1 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar1 + iVar6 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar6 * 8) = iVar3;
    return;
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 3;
LAB_0041072a:
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


