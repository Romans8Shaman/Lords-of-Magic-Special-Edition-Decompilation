
void __cdecl op_getpercentcomment(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x8c);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar3;
  iVar2 = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)(iVar1 != 0);
  return;
}


