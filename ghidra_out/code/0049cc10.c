
int * __thiscall FUN_0049cc10(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_4;
  
  FUN_0049cc80(this,&local_10);
  local_10 = local_10 + param_2;
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 == 0) {
    iVar1 = local_10;
    iVar2 = local_4;
  }
  else {
    local_4 = (uint)*(ushort *)(iVar1 + 4) + local_c + param_3;
    iVar1 = (uint)*(ushort *)(iVar1 + 2) + local_10;
    iVar2 = local_c + param_3;
  }
  *param_1 = local_10;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  param_1[3] = local_4;
  return param_1;
}


