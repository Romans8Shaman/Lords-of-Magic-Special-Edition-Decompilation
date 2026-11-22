
void __thiscall FUN_004bfd70(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  
  this_00 = (int *)FUN_004fbe60(&DAT_005ae974,0,3);
  if (this_00 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = (/*IC:004bfd93*/**(code **)(*this_00 + 0x3c))(this_00);
    if (iVar1 == *(int *)((int)this + 0x15a8)) {
      if (*param_1 <= this_00[0x38]) {
        this_00[0x38] = this_00[0x38] - *param_1;
        *param_1 = 0;
        return;
      }
      *param_1 = *param_1 - this_00[0x38];
      this_00[0x38] = 0;
    }
    this_00 = (int *)FUN_004fbe60(&DAT_005ae974,(int)this_00,3);
  } while (this_00 != (int *)0x0);
  return;
}


