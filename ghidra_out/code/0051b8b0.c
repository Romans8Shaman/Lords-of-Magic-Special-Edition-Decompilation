
void __fastcall FUN_0051b8b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c3bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = FUN_004c6fb0();
  iVar4 = puVar2[0x6c];
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0x74) != iVar4) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,0x14,*(int *)(iVar1 + -4),op_sunlight);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    piVar3 = (int *)Ordinal_401(iVar4 * 0x14 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    uStack_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar3 + 1;
      *piVar3 = iVar4;
      FUN_00539ff0(piVar5,0x14,iVar4,&LAB_0051bc20,op_sunlight);
    }
    uStack_4 = 0xffffffff;
    *(int **)(param_1 + 0x70) = piVar5;
    if (piVar5 == (int *)0x0) {
      FUN_005047d0(s_Can_t_allocate_region_data__00573dd4);
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      *(int *)(param_1 + 0x74) = iVar4;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  ExceptionList = local_c;
  return;
}


