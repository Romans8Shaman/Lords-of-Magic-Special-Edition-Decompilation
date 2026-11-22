
void __cdecl op_filesize(void *vm)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  DWORD DVar6;
  LPCSTR pCStack_4;
  
  DVar6 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pCStack_4 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar5 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar5 == '\b') goto LAB_004d7079;
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  pCStack_4 = (LPCSTR)0x0;
LAB_004d7079:
  if (pCStack_4 != (LPCSTR)0x0) {
    piVar2 = (int *)FUN_00539610(pCStack_4,&DAT_005572ec);
    if (piVar2 == (int *)0x0) {
      FUN_004d41c0(vm,s_error_opening_file_005725a4);
    }
    else {
      uVar3 = FUN_00548ec0((int)piVar2);
      DVar6 = FUN_00548e10(uVar3);
      FUN_005394d0(piVar2);
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)vm + 0x50);
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
  *(DWORD *)(iVar1 + 4 + iVar4 * 8) = DVar6;
  return;
}


