
undefined4 __thiscall FUN_0052b3b0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int local_8;
  uint local_4;
  
  local_8 = 0;
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    local_8 = local_8 + 1;
  }
  local_4 = 0xc;
  uVar2 = FUN_00539660((char *)&local_8,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  uVar2 = FUN_00539660((char *)&local_4,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  if ((local_8 < 1) || (pcVar3 = *(char **)this, pcVar3 == (char *)0x0)) {
    return 1;
  }
  do {
    uVar2 = FUN_00539660(pcVar3,local_4,1,param_1);
    if (uVar2 != 1) {
      return 0;
    }
    pcVar3 = *(char **)(pcVar3 + 0xc);
  } while (pcVar3 != (char *)0x0);
  return 1;
}


