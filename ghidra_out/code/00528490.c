
int __fastcall FUN_00528490(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = (int)uVar1 >> 0x1f;
  if ((*(uint *)(param_1 + 0x10) & 0x1000000) == 0) {
    return ((uVar1 ^ uVar2) - uVar2) + *(int *)(param_1 + 8) * 0x100;
  }
  return ((uVar1 ^ uVar2) - uVar2) + (*(int *)(param_1 + 8) + 1000) * 0x100;
}


