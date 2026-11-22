
bool FUN_004839a0(int *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  char local_4 [4];
  
  local_4[0] = -0x5c;
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  uVar1 = FUN_00539660(local_4,4,1,param_1);
  if (uVar1 != 1) {
    return false;
  }
  uVar1 = FUN_00539660(param_2,0xa4,1,param_1);
  if (uVar1 == 1) {
    uVar1 = FUN_00539660(param_3,0x240,1,param_1);
    return (bool)('\x01' - (uVar1 != 1));
  }
  return false;
}


