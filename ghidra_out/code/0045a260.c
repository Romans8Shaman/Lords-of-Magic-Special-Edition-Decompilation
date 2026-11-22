
void __thiscall
FUN_0045a260(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
            int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_50 [20];
  
  local_50[10] = 2;
  local_50[0xb] = 2;
  local_50[0xe] = 2;
  local_50[0x11] = 2;
  local_50[0x12] = 1;
  local_50[0x13] = 1;
  local_50[1] = 1;
  local_50[3] = 0;
  local_50[9] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0x10] = 0;
  local_50[0] = 0;
  local_50[6] = 0;
  iVar1 = *(int *)((int)this + param_1 * 4);
  local_50[2] = 0xffffffff;
  local_50[7] = 0xffffffff;
  local_50[8] = 0xffffffff;
  iVar2 = local_50[iVar1];
  local_50[0xf] = 0xfffffffe;
  local_50[4] = 6;
  iVar3 = local_50[param_3 + 0xc];
  local_50[5] = 0xfffffffa;
  iVar4 = local_50[param_2 + 3];
  param_2 = local_50[iVar1 + 6] + local_50[param_3 + 0x10] + local_50[param_2 + 9];
  *(int *)((int)this + param_1 * 4) = iVar1 + 1;
  param_1 = iVar2 + iVar3 + iVar4;
  FUN_0045a360(&param_1,&param_2,(char)param_4);
  *param_5 = *param_5 + param_1;
  *param_6 = *param_6 - param_2;
  return;
}


