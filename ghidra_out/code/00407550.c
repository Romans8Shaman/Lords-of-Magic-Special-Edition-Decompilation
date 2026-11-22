
undefined4 __thiscall FUN_00407550(void *this,int param_1,int param_2)

{
  void *this_00;
  undefined4 uVar1;
  int local_158;
  int local_154;
  int local_108 [5];
  int local_f3;
  undefined4 local_ef;
  int local_e7;
  undefined1 local_e3;
  undefined1 local_e2 [226];
  
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  local_e7 = FUN_00413530(this_00,param_2);
  if (local_e7 == -1) {
    return 0;
  }
  FUN_0048cc70(local_108,0x44);
  local_f3 = param_1;
  local_158 = *(int *)((int)this_00 + 0x1c) % *(int *)((int)this + 0x4898);
  local_154 = *(int *)((int)this_00 + 0x1c) / *(int *)((int)this + 0x4898);
  FUN_00407480(local_e2,&local_158,1);
  local_ef = 0xf;
  local_e3 = 0;
  uVar1 = FUN_00489b70(&DAT_00584ae8,local_108);
  return uVar1;
}


