
int __thiscall FUN_004be0c0(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int local_14 [5];
  
  iVar2 = 0;
  for (this_00 = (int *)FUN_004fbf80(&DAT_005ae974,*(int *)((int)this + 0x15a8),0);
      this_00 != (int *)0x0;
      this_00 = (int *)FUN_004fbf80(&DAT_005ae974,*(int *)((int)this + 0x15a8),(int)this_00)) {
    iVar1 = (/*IC:004be0f0*/**(code **)(*this_00 + 0x40))(this_00,local_14);
    if (iVar1 != 0) {
      iVar2 = iVar2 + local_14[param_1];
    }
  }
  iVar1 = FUN_004bdf60(this,param_1);
  iVar2 = iVar2 + iVar1 * -0x100;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2 >> 8;
}


