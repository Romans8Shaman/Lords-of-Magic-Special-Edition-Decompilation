
int __cdecl
FUN_004f3d20(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_18;
  undefined4 local_14;
  
  local_38 = param_3;
  local_34 = param_4;
  local_18 = 0;
  local_14 = 0;
  if (param_5 == 0) {
    local_28 = *param_2;
    local_2c = param_1;
    iVar1 = FUN_00536cb0((int)&local_38,s_1_0_7_0055d368,0x38);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00536cd0((byte *)&local_38,4);
    if (iVar1 != 1) {
      FUN_00536b50((int)&local_38);
      return iVar1;
    }
    *param_2 = local_24;
  }
  else {
    local_28 = *param_2;
    local_2c = param_1;
    iVar1 = FUN_00536cb0((int)&local_38,s_1_0_7_0055d368,0x38);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = *param_2 / param_5;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        local_28 = param_5;
        local_2c = param_1;
        FUN_00536cd0((byte *)&local_38,4);
        param_1 = param_1 + param_6;
        uVar2 = uVar2 - 1;
        uVar3 = local_24;
      } while (uVar2 != 0);
    }
    *param_2 = uVar3;
  }
  iVar1 = FUN_00536b50((int)&local_38);
  return iVar1;
}


