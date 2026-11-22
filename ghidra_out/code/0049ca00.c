
void __fastcall FUN_0049ca00(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int local_6c [3];
  uint local_60;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_4;
  
  if (((*(int **)(param_1 + 0x3c) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x3c), iVar1 != 0)
      ) && (pbVar2 = *(byte **)(iVar1 + 8), pbVar2 != (byte *)0x0)) {
    FUN_0049cac0(param_1);
    if ((*pbVar2 & 0x33) != 0) {
      local_60 = (uint)*(ushort *)(pbVar2 + 4);
      local_6c[2] = (int)*(ushort *)(pbVar2 + 6);
      local_6c[0] = 0x6c;
      local_6c[1] = 0x1007;
      local_4 = 0x840;
      local_24 = 0x20;
      local_18 = 8;
      local_20 = 0x60;
      (/*IC:0049ca88*/**(code **)(*DAT_00585168 + 0x18))(DAT_00585168,local_6c,(undefined4 *)(param_1 + 0x34),0);
      piVar3 = *(int **)(param_1 + 0x34);
      (/*IC:0049ca95*/**(code **)(*piVar3 + 0x58))(piVar3,local_6c);
      DAT_0058372c = DAT_0058372c + local_6c[2] * local_6c[0];
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


