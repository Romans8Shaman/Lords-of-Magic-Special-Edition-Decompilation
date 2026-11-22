
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004efeb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0052d240((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar2 = FUN_0052c8a0((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)), -1 < iVar2)) {
    _DAT_00584c58 = *(undefined4 *)(param_1 + 0x48);
    _DAT_00584c78 = *(undefined4 *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    DAT_00584c7c = puVar1[10];
    _DAT_00584c8c = puVar1[(iVar2 + 3) * 0x13];
    _DAT_00584c90 = 0xffffffff;
    DAT_00584c80 = iVar2;
    switch(*(undefined4 *)(param_1 + 0xc)) {
    case 0:
      FUN_00503040(&DAT_00584ae8,2);
      return 1;
    case 1:
    case 2:
      FUN_00503040(&DAT_00584ae8,3);
      return 1;
    case 3:
      FUN_00503040(&DAT_00584ae8,1);
      _DAT_00584c64 = DAT_00584c7c;
      _DAT_00584c68 = DAT_00584c7c;
      _DAT_00584c6c = DAT_00584c80;
      FUN_004f07c0(&DAT_00584ae8,(undefined4 *)&DAT_00584c58);
      FUN_00503040(&DAT_00584ae8,0);
      return 1;
    case 4:
      FUN_00503040(&DAT_00584ae8,4);
      return 1;
    }
  }
  return 0;
}


