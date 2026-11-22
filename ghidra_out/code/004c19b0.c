
undefined4 FUN_004c19b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_108;
  undefined1 local_104;
  int local_f3;
  undefined4 local_ef;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 != 0) {
    iVar2 = FUN_004c2330(uVar1);
    if (0 < iVar2) {
      iVar2 = FUN_00506340(uVar1);
      if (iVar2 != 0) {
        FUN_0048cc40((int)&local_108);
        local_104 = 0x11;
        local_f3 = param_1;
        local_ef = param_2;
        uVar3 = FUN_00489b70(&DAT_00584ae8,&local_108);
        return uVar3;
      }
    }
  }
  return 0;
}


