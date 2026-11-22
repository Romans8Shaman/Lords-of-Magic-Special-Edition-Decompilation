
undefined4 __thiscall FUN_00412090(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  
  FUN_004f6a80(this,param_1);
  FUN_00539660((char *)((int)this + 0x44),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x48),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x4c),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x50),4,1,param_1);
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    this_00 = (void *)((int)this + 0xc4);
    do {
      FUN_00524c20(this_00,param_1);
      iVar1 = iVar1 + 1;
      this_00 = (void *)((int)this_00 + 0x4c);
    } while (iVar1 < *(int *)((int)this + 0x4c));
  }
  FUN_00539660((char *)((int)this + 0x53c),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x540),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x544),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x548),4,1,param_1);
  FUN_004279d0(&DAT_005aeefc,*(int *)((int)this + 0x538),param_1);
  FUN_00539660((char *)((int)this + 0x54),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x58),4,1,param_1);
  FUN_00539660((char *)((int)this + 100),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x68),0x58,1,param_1);
  FUN_00539660((char *)((int)this + 0x54c),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x550),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5b0),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5b4),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5b8),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5bc),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5c0),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5c4),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5cc),4,1,param_1);
  FUN_00539660((char *)((int)this + 0x5d0),1,1,param_1);
  FUN_00539660((char *)((int)this + 0x5c8),1,1,param_1);
  return 1;
}


