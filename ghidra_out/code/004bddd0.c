
undefined4 __thiscall FUN_004bddd0(void *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004bdca0(this,param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_3 = *puVar1;
  return 1;
}


