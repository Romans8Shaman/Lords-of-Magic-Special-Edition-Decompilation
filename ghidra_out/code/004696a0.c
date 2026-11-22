
void __cdecl op_isonlywizardleft_q(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar3 = DAT_005ae98c;
  iStack_4 = 0;
  for (iVar4 = DAT_005ae998; iVar4 <= iVar3; iVar4 = iVar4 + 1) {
    iVar1 = FUN_004f6000(&DAT_005ae974,iVar4);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) && (iVar2 = FUN_00407d50(iVar1), iVar2 == 0))
       && (((iVar2 = FUN_00420620(iVar1), iVar2 == 0 && (*(int *)(iVar1 + 0x48) == DAT_005577c8)) &&
           (iVar1 = FUN_00525fc0((int *)(iVar1 + 0xc4)), iVar1 == 0)))) {
      iStack_4 = iStack_4 + 1;
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)vm + 0x50);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
  *(int *)(iVar4 + 4 + iVar3 * 8) = iStack_4;
  return;
}


