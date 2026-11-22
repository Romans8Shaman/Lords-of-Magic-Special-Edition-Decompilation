
void __cdecl op_gettempsavegamefilename(void *vm)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = FUN_00505110(&DAT_00584ae8,0,0xffffffff);
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
  *(undefined4 *)(iVar1 + iVar3 * 8) = 8;
  *(char **)(iVar1 + 4 + iVar3 * 8) = pcVar2;
  return;
}


