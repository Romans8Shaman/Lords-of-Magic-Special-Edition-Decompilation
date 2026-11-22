
undefined4 __thiscall FUN_00489560(void *this,LPCSTR param_1,uint param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004fe6e0(&DAT_00584ae8,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_005397f0(this,4,1,piVar1);
  FUN_004a5390(piVar1);
  FUN_00489260((void *)((int)this + 0x4848),piVar1,param_2,param_3);
  FUN_005394d0(piVar1);
  return 1;
}


