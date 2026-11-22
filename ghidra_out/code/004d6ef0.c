
void __cdecl op_fileexists(void *vm)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  LPCSTR pCStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pCStack_4 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar5 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar2 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar2 == 0) {
    if (cVar5 == '\b') goto LAB_004d6f76;
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  pCStack_4 = (LPCSTR)0x0;
LAB_004d6f76:
  bVar1 = 0;
  if (pCStack_4 != (LPCSTR)0x0) {
    piVar3 = (int *)FUN_00539610(pCStack_4,&DAT_005572ec);
    if (piVar3 != (int *)0x0) {
      bVar1 = 1;
      FUN_005394d0(piVar3);
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)vm + 0x50);
  iVar4 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar4;
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)bVar1;
  return;
}


