
void __fastcall FUN_00530f00(int *param_1)

{
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_64 [23];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Ordinal_19(*param_1);
  uStack_70 = 0;
  uStack_68 = 0x1e0;
  uStack_74 = 0;
  uStack_6c = 0x280;
  if (param_1[0x89] == 0) {
    FUN_005319b0(param_1,4,param_1[0x87],param_1[0x88]);
    (/*IC:00530f7b*/**(code **)(*DAT_00585170 + 0x1c))(DAT_00585170,0,0,DAT_00585174,&uStack_74,0);
  }
  else {
    FUN_005319b0(param_1,1,param_1[0x87],param_1[0x88]);
  }
  Ordinal_21(*param_1);
  if (*(int *)(*param_1 + 0x68) != 0) {
    FUN_00531930(param_1);
  }
  if (param_1[0x89] == 0) {
    auStack_64[0] = 100;
    uStack_8 = 0;
    uStack_4 = 0;
    (/*IC:00531002*/**(code **)(*DAT_00585170 + 0x14))
              (DAT_00585170,0,DAT_0058517c,param_1 + 0x83,0x1010000,auStack_64);
    (/*IC:00531018*/**(code **)(*DAT_0058516c + 0x1c))(DAT_0058516c,0,0,DAT_00585170,0,0);
    return;
  }
  (/*IC:00530fc2*/**(code **)(*DAT_0058516c + 0x1c))
            (DAT_0058516c,param_1[0x87],param_1[0x88],DAT_00585170,param_1 + 0x83,0);
  return;
}


