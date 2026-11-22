
void __fastcall FUN_00472260(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00471490(param_1 + 0xf4);
  FUN_00471490(param_1 + 300);
  FUN_00471490(param_1 + 0x70);
  FUN_00471490(0x5aa60c);
  puVar1 = &DAT_005aa2f4;
  do {
    if (*(int *)(puVar1 + -0x28) != 0) {
      FUN_00471490((int)puVar1);
      FUN_00471490((int)(puVar1 + 0x60));
    }
    puVar1 = puVar1 + 200;
  } while ((int)puVar1 < 0x5aa614);
  iVar2 = param_1 + 0x19c;
  iVar3 = 4;
  do {
    FUN_00471490(iVar2);
    iVar2 = iVar2 + 0x38;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


