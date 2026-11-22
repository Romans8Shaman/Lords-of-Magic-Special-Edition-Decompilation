
void __thiscall FUN_004223f0(void *this,int *param_1)

{
  undefined4 *this_00;
  void *pvVar1;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    return;
  }
  pvVar1 = (void *)FUN_00482ac0(this,param_1[1],2);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_00482ac0(this,param_1[1],3);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)FUN_00482ac0(this,param_1[1],1);
      if (pvVar1 == (void *)0x0) {
        return;
      }
    }
  }
  FUN_004225a0(this_00,pvVar1,1);
  return;
}


