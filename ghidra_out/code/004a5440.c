
undefined4 __thiscall FUN_004a5440(void *this,int *param_1)

{
  int iVar1;
  char local_4 [4];
  
  local_4[0] = '\b';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_00539660((char *)((int)this + 0x5c),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x60),4,1,param_1);
  FUN_00539660(local_4,4,1,param_1);
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      FUN_00539660((char *)(*(int *)((int)this + 0x54) + iVar1 * 8),0x200,1,param_1);
      FUN_00487730(&DAT_005aa12c,param_1);
      iVar1 = iVar1 + 0x40;
    } while (iVar1 < *(int *)((int)this + 0x58));
  }
  return 1;
}


