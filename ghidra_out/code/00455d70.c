
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00455d70(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_48;
  int local_44;
  int local_40 [16];
  
  iVar3 = 0;
  local_40[1] = 0xffffffff;
  local_40[2] = 0;
  local_40[3] = 0xffffffff;
  local_40[4] = 1;
  local_40[5] = 0xffffffff;
  local_40[6] = 1;
  local_40[7] = 0;
  local_40[8] = 1;
  local_40[9] = 1;
  local_40[10] = 0;
  local_40[0xb] = 1;
  local_40[0xc] = 0xffffffff;
  local_40[0xd] = 1;
  local_40[0xe] = 0xffffffff;
  local_40[0xf] = 0;
  local_48 = 0.0;
  piVar4 = local_40 + 1;
  local_44 = 8;
  do {
    iVar1 = piVar4[-1] + param_2;
    iVar2 = param_3 + *piVar4;
    if ((((-1 < iVar1) && (iVar1 < *(int *)((int)param_1 + 0x6c))) && (-1 < iVar2)) &&
       (iVar2 < *(int *)((int)param_1 + 0x70))) {
      iVar1 = FUN_004a5170(param_1,iVar1,iVar2);
      iVar3 = iVar3 + 1;
      local_48 = *(float *)(*(int *)((int)param_1 + 0x54) + 4 + iVar1 * 8) + local_48;
    }
    piVar4 = piVar4 + 2;
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  if (iVar3 < 1) {
    return (float10)_DAT_0054d6b8;
  }
  return (float10)local_48 / (float10)iVar3;
}


