
int __thiscall FUN_004b9e20(void *this,LPCSTR param_1)

{
  int iVar1;
  short *psVar2;
  char local_300 [768];
  
  if (*(int *)((int)this + 8) <= *(int *)((int)this + 4)) {
    return -1;
  }
  iVar1 = FUN_004a2380(param_1,(int)local_300);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = 0;
  do {
    local_300[iVar1] = local_300[iVar1] << 2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x300);
  psVar2 = FUN_0049b2a0(&DAT_00584ae8,local_300,param_1);
  *(short **)(*(int *)this + *(int *)((int)this + 4) * 4) = psVar2;
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1;
}


