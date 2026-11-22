
void __fastcall FUN_004f3130(int param_1)

{
  undefined4 *a3;
  byte *pbVar1;
  int *a1;
  int iVar2;
  uint *puVar3;
  undefined1 auStack_72 [6];
  uint local_6c [18];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_4;
  
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (pbVar1 = *(byte **)(*(int *)(param_1 + 0x38) + 8), (*pbVar1 & 0x33) != 0)) {
    a1 = *(int **)(param_1 + 0x58);
    a3 = (undefined4 *)(param_1 + 0x58);
    if (a1 != (int *)0x0) {
      (/*IC:004f315a*/**(code **)(*a1 + 8))(a1);
    }
    local_6c[3] = (uint)*(ushort *)(pbVar1 + 4);
    puVar3 = local_6c;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_6c[2] = (uint)*(ushort *)(pbVar1 + 6);
    local_6c[0] = 0x6c;
    uStack_4 = 0x840;
    local_6c[1] = 0x1007;
    uStack_24 = 0x20;
    uStack_18 = 8;
    uStack_20 = 0x60;
    (/*IC:004f31bf*/**(code **)(*DAT_00584ab4 + 0x18))(DAT_00584ab4,local_6c,a3,0);
    (/*IC:004f31c7*/**(code **)(*(int *)*a3 + 0x6c))((int *)*a3);
    (/*IC:004f31e3*/**(code **)(*(int *)*a3 + 0x74))((int *)*a3,8,auStack_72 + -6);
  }
  return;
}


