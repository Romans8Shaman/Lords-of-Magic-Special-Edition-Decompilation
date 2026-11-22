
void __fastcall FUN_004ad260(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004ad0d0((int)param_1);
  if (puVar1 != (uint *)0x0) {
    iVar2 = FUN_004af140(puVar1);
    FUN_004f5a90(param_1,iVar2);
    iVar2 = FUN_004af1b0(puVar1);
    FUN_004ad0e0(param_1,iVar2);
    iVar2 = FUN_004af220(puVar1);
    FUN_004ad1a0(param_1,iVar2);
    (/*IC:004ad2a0*/**(code **)(*param_1 + 0x1c))(param_1);
  }
  return;
}


