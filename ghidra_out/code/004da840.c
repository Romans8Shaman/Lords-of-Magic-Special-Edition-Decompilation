
void __cdecl op_savebmp(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  char cVar3;
  int iVar4;
  LPCSTR pCVar5;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  LPCSTR pCStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pCVar5 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar3 = '\0';
    pCVar5 = pCStack_4;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar3 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pCVar5 = (LPCSTR)0x0;
    }
  }
  else {
    pCVar5 = (LPCSTR)0x0;
  }
  if (pCVar5 != (LPCSTR)0x0) {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      pCStack_4 = *(LPCSTR *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(vm,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
    if (iVar1 == 0) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
    }
    else {
      this = (void *)FUN_00491ec0(&DAT_005a7b50,uStack_14);
      if (this == (void *)0x0) {
        FUN_004d41c0(vm,s_unknown_page_005726cc);
        if (*(int *)((int)vm + 0x54) == 0) {
          *(undefined4 *)((int)vm + 0x90) = 3;
          FUN_004d4550(vm);
          *(undefined4 *)((int)vm + 0x90) = 0;
          *(undefined4 *)((int)vm + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)vm + 0x50);
          iVar2 = *(int *)((int)vm + 0x54) + -1;
          *(int *)((int)vm + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        }
      }
      iVar1 = FUN_0043b500(this,pCVar5);
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar4 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar4;
        iVar2 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(uint *)(iVar2 + 4 + iVar4 * 8) = -(uint)(iVar1 != 0);
        return;
      }
      *(undefined4 *)((int)vm + 0x90) = 3;
    }
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  return;
}


