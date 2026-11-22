
int __thiscall FUN_004c0020(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  *param_1 = -1;
  for (this_00 = (int *)FUN_004fbe60(&DAT_005ae974,0,3); this_00 != (int *)0x0;
      this_00 = (int *)FUN_004fbe60(&DAT_005ae974,(int)this_00,3)) {
    iVar1 = (/*IC:004c004c*/**(code **)(*this_00 + 0x3c))(this_00);
    if (iVar1 == *(int *)((int)this + 0x15a8)) {
      iVar1 = this_00[0x35];
      if ((iVar2 < iVar1) || ((iVar1 == iVar2 && (this_00[0x20] == *(int *)((int)this + 0x15b0)))))
      {
        *param_1 = this_00[10];
        iVar2 = iVar1;
      }
    }
  }
  return iVar2;
}


