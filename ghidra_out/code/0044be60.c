
void __cdecl op_setchampionname(void *vm)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  int iStack_8;
  char *pcStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pcStack_4 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    cVar3 = '\0';
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x90);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  if (iVar2 == 0) {
    if (cVar3 == '\b') {
    }
    else {
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      pcStack_4 = (char *)0x0;
    }
  }
  else {
    pcStack_4 = (char *)0x0;
  }
  if (pcStack_4 != (char *)0x0) {
    iVar2 = FUN_0041bf10(pvVar1,&iStack_8,(int *)&vm);
    if (iVar2 != 0) {
      _strncpy((char *)(iStack_8 + 0xec + (int)vm * 0x4c),pcStack_4,0x1f);
      *(undefined1 *)(iStack_8 + 0x10a + (int)vm * 0x4c) = 0;
    }
  }
  return;
}


