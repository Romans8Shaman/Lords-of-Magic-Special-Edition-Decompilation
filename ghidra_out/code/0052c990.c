
void __fastcall FUN_0052c990(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0052d140((int)param_1);
  iVar1 = FUN_0041ffb0(&DAT_005ae974,*param_1,iVar1);
  puVar2 = FUN_00485080(&DAT_005aa12c,iVar1,0x3f);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0052b6f0(param_1,iVar1,0);
    if (param_1[0xba] != 6) {
      FUN_0041fda0((int)puVar2);
    }
    FUN_004ba870(&DAT_005a9ddc);
  }
  FUN_0047af50(&DAT_005ae958);
  return;
}


