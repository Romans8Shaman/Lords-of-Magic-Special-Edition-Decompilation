
void __fastcall FUN_0052cd50(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0052d0e0((int)param_1);
  iVar1 = FUN_004518d0(&DAT_005ae974,*param_1,iVar1);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar1,3);
  if (uVar2 != 0) {
    FUN_0052d290(param_1,iVar1);
    if (param_1[0xba] != 6) {
      FUN_0041fda0(uVar2);
    }
  }
  FUN_0047af50(&DAT_005ae958);
  return;
}


