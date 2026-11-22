
void __cdecl op_getmultiplayeroption(void *vm)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar6 = 0;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar6 != 4) {
        FUN_00404ab0(vm,0xe);
        return;
      }
      lVar8 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar8;
    }
  }
  pcVar4 = FUN_004b1db0(&DAT_005aa64c,SUB41(fStack_4,0));
  cVar1 = *pcVar4;
  puVar5 = FUN_004b1db0(&DAT_005aa64c,SUB41(fStack_4,0));
  cVar2 = puVar5[4];
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar7 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar7;
  iVar3 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
  *(int *)(iVar3 + 4 + iVar7 * 8) = (int)cVar2 * (int)cVar1;
  return;
}


