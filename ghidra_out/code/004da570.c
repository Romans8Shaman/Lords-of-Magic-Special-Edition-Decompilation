
void __cdecl op_lbm(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int extraout_EDX;
  uint uStack_130;
  char acStack_12c [300];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_130 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar4 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar2 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar2 == 0) {
    if (cVar4 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uStack_130 = 0;
      iVar2 = extraout_EDX;
    }
  }
  else {
    uStack_130 = 0;
  }
  if (uStack_130 != 0) {
    iVar2 = FUN_00491df0(&DAT_005a7b50,iVar2,uStack_130);
    if (iVar2 < 0) {
      FUN_0053a090(acStack_12c,s__s_not_found_005726bc,uStack_130);
      FUN_004d41c0(vm,acStack_12c);
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}


