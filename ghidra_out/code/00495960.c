
void __fastcall FUN_00495960(int *param_1)

{
  int *arg1;
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054ac06;
  pvStack_c = ExceptionList;
  local_4 = 0;
  DAT_00583658 = DAT_00583658 + -0x4c;
  ExceptionList = &pvStack_c;
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    iVar1 = 2;
    piVar2 = param_1;
    ExceptionList = &pvStack_c;
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        arg1 = *(int **)*piVar2;
        if (arg1 != (int *)0x0) {
          DAT_00583648 = DAT_00583648 + -0x20;
          FUN_00495590(arg1);
          Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        }
        if (*piVar2 != 0) {
          DAT_0058364c = DAT_0058364c + -0x14;
          Ordinal_403(*piVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        }
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_4 = 0xffffffff;
  FUN_00539eb0(param_1 + 2,0x10,4,FUN_0046ba20);
  ExceptionList = pvStack_c;
  return;
}


