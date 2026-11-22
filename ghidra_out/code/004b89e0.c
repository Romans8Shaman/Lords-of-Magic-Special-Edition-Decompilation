
void __cdecl op_setcomputername(void *vm)

{
  int iVar1;
  char cVar2;
  char *pcStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pcStack_4 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
  if (iVar1 == 0) {
    if (cVar2 == '\b') goto LAB_004b8a65;
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  pcStack_4 = (char *)0x0;
LAB_004b8a65:
  if (pcStack_4 != (char *)0x0) {
    if (DAT_005d1e84 == (void *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_004b80a0(DAT_005d1e84,pcStack_4,0);
    }
    if (iVar1 == 0) {
      FUN_004d41c0(vm,s_SetComputerName_failed_0055d4a0);
    }
  }
  return;
}


