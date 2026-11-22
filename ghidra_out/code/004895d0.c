
void __cdecl op_scanforplaceholders(void *vm)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uStack_8;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_8 = 0;
    piVar4 = piStack_4;
  }
  if ((char)uStack_8 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      cVar2 = '\0';
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    iVar1 = *(int *)((int)vm + 0x90);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    piVar3 = (int *)0x0;
    if (iVar1 == 0) {
      if (cVar2 == '\b') {
        piVar3 = piStack_4;
      }
      else {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
      }
    }
    FUN_00489560(&DAT_005aa12c,(LPCSTR)piVar3,uStack_8,piVar4);
  }
  return;
}


