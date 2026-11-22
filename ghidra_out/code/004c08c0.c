
undefined4 __thiscall FUN_004c08c0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x4c))) {
    iVar1 = param_1 + param_2 * 0x4c;
    uVar2 = FUN_00525f20(iVar1 + 0xc4);
    if (uVar2 != 0) {
      FUN_004bbb70(this,&param_2,&param_1);
      if (-1 < param_2) {
        puVar3 = FUN_00485080(&DAT_005aa12c,param_2,0x2f);
        *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) =
             *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) & 0xfffffffe;
        *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) =
             *(uint *)(puVar3[param_1 * 0x13 + 0x36] + 8) | 2;
      }
      *(uint *)(*(int *)(iVar1 + 0xd8) + 8) = *(uint *)(*(int *)(iVar1 + 0xd8) + 8) & 0xfffffffd;
      *(uint *)(*(int *)(iVar1 + 0xd8) + 8) = *(uint *)(*(int *)(iVar1 + 0xd8) + 8) | 1;
      return 1;
    }
  }
  return 0;
}


