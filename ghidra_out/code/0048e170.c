
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048e170(void *this,int param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  int local_10 [4];
  
  this_00 = (void *)FUN_00493360(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_00497b00(this_00,param_1,param_2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004754c0(0x584ae8);
      if (piVar2 == (int *)0x0) {
        OutputDebugStringA(s_Can_t_LockBackBuffer__0055c340);
        return 1;
      }
      _DAT_005a79f0 = 0;
      _DAT_005a79f8 = 0;
      _DAT_005a79fc = 0;
      FUN_0048ee50(this,piVar2,1);
      FUN_004755a0(&DAT_00584ae8,piVar2);
      piVar2 = (int *)FUN_0048eb70(this,local_10);
      FUN_00500650(&DAT_00584ae8,*piVar2,piVar2[1],piVar2[2],piVar2[3]);
      FUN_00476c20(&DAT_00584ae8);
      return 1;
    }
  }
  return 0;
}


