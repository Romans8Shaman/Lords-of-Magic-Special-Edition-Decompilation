
void __thiscall FUN_004c23b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  int local_4;
  
  local_8 = *(int *)((int)this + 0x4c);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    puVar3 = (undefined4 *)(param_1 + 0xe0);
    do {
      iVar1 = local_4 + *(int *)((int)this + 0x4c);
      if (iVar1 < 3) {
        puVar4 = puVar3 + -7;
        puVar5 = (undefined4 *)((int)this + iVar1 * 0x4c + 0xc4);
        for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[-2] = 0;
        local_8 = local_8 + 1;
      }
      else {
        FUN_00526ea0((int)(puVar3 + -7));
      }
      local_4 = local_4 + 1;
      puVar3 = puVar3 + 0x13;
    } while (local_4 < *(int *)(param_1 + 0x4c));
  }
  *(int *)((int)this + 0x4c) = local_8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


