
uint __cdecl FUN_00541c00(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = *param_1 + 1;
  uVar1 = FUN_00541bb0(param_2);
  uVar2 = FUN_0053b6e0(uVar1);
  while (uVar2 != 0) {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_00541bb0(param_2);
    uVar2 = FUN_0053b6e0(uVar1);
  }
  return uVar1;
}


