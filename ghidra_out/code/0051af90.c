
void __cdecl op_calclighttables(void *vm)

{
  int iVar1;
  uint uVar2;
  int *piStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar2 = 0;
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (((char)uVar2 == '\x06') && ((uVar2 & 0x100) == 0)) {
    FUN_005116b0(&DAT_005876d0,vm,uVar2,piStack_4);
    return;
  }
  FUN_004d41c0(vm,s_calclighttables___bad_args_00573bc4);
  return;
}


