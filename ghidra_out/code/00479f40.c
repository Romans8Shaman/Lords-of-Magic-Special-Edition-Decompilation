
void __cdecl op_getspeechvolume(void *vm)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (int)DAT_00586778 >> 0x1f;
  uVar2 = DAT_00586778 ^ uVar4;
  if (*(int *)((int)vm + 0x54) == 0) {
    *(undefined4 *)((int)vm + 0x90) = 3;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)vm + 0x50);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar3 * 8) = 100 - (int)(uVar2 - uVar4) / 0x19;
  return;
}


