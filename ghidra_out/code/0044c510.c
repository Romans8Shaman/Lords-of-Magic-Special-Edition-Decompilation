
undefined4 __thiscall FUN_0044c510(void *this,uint param_1)

{
  int *a1;
  
  CreateDirectoryA(s_custldr_005572e4,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0053a090(&DAT_005d22f0,s_custldr__s_005572d8,param_1);
  a1 = (int *)FUN_00539610(&DAT_005d22f0,&DAT_00556168);
  if (a1 == (int *)0x0) {
    return 0;
  }
  FUN_00539660((char *)((int)this + 0x58),0x2a0,1,a1);
  FUN_00539660((char *)((int)this + 0x2f8),0x78,1,a1);
  FUN_00539660((char *)((int)this + 0x40),4,1,a1);
  FUN_00539660((char *)((int)this + 0x44),4,1,a1);
  FUN_00539660((char *)((int)this + 0x38),4,1,a1);
  (/*IC:0044c5b4*/**(code **)(**(int **)this + 0x20))(*(int **)this,a1);
  FUN_00539660((char *)((int)this + 0x54),4,1,a1);
  FUN_00539660((char *)((int)this + 0x4c),4,1,a1);
  FUN_00539660((char *)((int)this + 0x50),4,1,a1);
  FUN_00539660((char *)((int)this + 0x48),4,1,a1);
  FUN_00539660((char *)&DAT_005af0f4,4,1,a1);
  FUN_005394d0(a1);
  return 1;
}


