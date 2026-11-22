
undefined4 FUN_004b9470(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108 [5];
  undefined4 local_f3 [16];
  undefined4 local_b3;
  
  FUN_0048cc70(local_108,0x4f);
  iVar1 = 0;
  puVar2 = local_f3;
  do {
    iVar1 = iVar1 + 1;
    FUN_004b8fa0(&DAT_005cd358,iVar1,&local_118);
    *puVar2 = local_118;
    puVar2[1] = local_114;
    puVar2[2] = local_110;
    puVar2[3] = local_10c;
    puVar2 = puVar2 + 4;
  } while (iVar1 < 4);
  local_b3 = DAT_005d1f68;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return 1;
}


