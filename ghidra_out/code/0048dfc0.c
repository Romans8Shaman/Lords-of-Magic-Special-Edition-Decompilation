
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048dfc0(void *this,int param_1)

{
  void *this_00;
  int *piVar1;
  int local_10 [4];
  
  this_00 = (void *)FUN_00493360(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x10) != 0)) {
    piVar1 = (int *)FUN_004754c0(0x584ae8);
    if (piVar1 != (int *)0x0) {
      _DAT_005a79f0 = 0;
      _DAT_005a79f8 = 0;
      _DAT_005a79fc = 0;
      FUN_00497ac0(this_00,param_1);
      FUN_0048ee50(this,piVar1,1);
      FUN_004755a0(&DAT_00584ae8,piVar1);
      piVar1 = (int *)FUN_0048eb70(this,local_10);
      FUN_00500650(&DAT_00584ae8,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
      FUN_00476c20(&DAT_00584ae8);
      return;
    }
    OutputDebugStringA(s_Can_t_LockBackBuffer__0055c340);
  }
  return;
}


