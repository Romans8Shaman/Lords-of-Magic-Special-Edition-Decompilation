
void __cdecl op_getdiskfreespace(void *vm)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  char cVar4;
  DWORD DStack_14;
  DWORD DStack_10;
  DWORD DStack_c;
  DWORD DStack_8;
  LPCSTR pCStack_4;
  
  DStack_14 = 0;
  DStack_10 = 0;
  DStack_c = 0;
  DStack_8 = 0;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pCStack_4 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar4 = '\0';
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (cVar4 == '\b') goto LAB_004d6d76;
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  pCStack_4 = (LPCSTR)0x0;
LAB_004d6d76:
  if (pCStack_4 != (LPCSTR)0x0) {
    BVar2 = GetDiskFreeSpaceA(pCStack_4,&DStack_14,&DStack_10,&DStack_c,&DStack_8);
    if (BVar2 == 0) {
      FUN_004d41c0(vm,s_error_getting_info_00572590);
    }
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)vm + 0x50);
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(DWORD *)(iVar1 + 4 + iVar3 * 8) = DStack_14;
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)vm + 0x50);
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(DWORD *)(iVar1 + 4 + iVar3 * 8) = DStack_10;
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)vm + 0x50);
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(DWORD *)(iVar1 + 4 + iVar3 * 8) = DStack_c;
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  iVar1 = *(int *)((int)vm + 0x50);
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(DWORD *)(iVar1 + 4 + iVar3 * 8) = DStack_8;
  return;
}


