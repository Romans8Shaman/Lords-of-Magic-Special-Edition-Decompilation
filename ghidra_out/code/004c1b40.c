
undefined4 FUN_004c1b40(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_108;
  undefined1 local_104;
  int local_f3;
  int local_ef;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  puVar2 = FUN_00485080(&DAT_005aa12c,param_2,0x2f);
  if ((uVar1 == 0) || (puVar2 == (undefined4 *)0x0)) {
    return 0;
  }
  FUN_0048cc40((int)&local_108);
  local_104 = 0x16;
  local_f3 = param_1;
  local_ef = param_2;
  uVar3 = FUN_00489b70(&DAT_00584ae8,&local_108);
  return uVar3;
}


