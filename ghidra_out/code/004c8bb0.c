
void __fastcall
FUN_004c8bb0(int *param_1,undefined4 unused_reg_1,int *unused_stack_0,int *unused_stack_4)

{
  uint uVar1;
  short *arg1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  arg1 = (short *)Ordinal_401(param_1[3] << 1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uVar1 = param_1[3];
  psVar6 = arg1;
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    psVar6[0] = 0;
    psVar6[1] = 0;
    psVar6 = psVar6 + 2;
  }
  iVar5 = 0;
  for (iVar3 = (uVar1 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)psVar6 = 0;
    psVar6 = (short *)((int)psVar6 + 1);
  }
  iVar3 = param_1[3];
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      iVar4 = (int)*(short *)(*param_1 + 2 + iVar7);
      if ((-1 < iVar4) && (iVar4 < iVar3)) {
        arg1[iVar4] = arg1[iVar4] + 1;
      }
      iVar3 = param_1[3];
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 6;
    } while (iVar5 < iVar3);
  }
  iVar3 = 0;
  *unused_stack_0 = 0;
  if (0 < param_1[3]) {
    psVar6 = arg1;
    do {
      iVar5 = (int)*psVar6;
      if ((int)*psVar6 <= *unused_stack_0) {
        iVar5 = *unused_stack_0;
      }
      *unused_stack_0 = iVar5;
      iVar3 = iVar3 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar3 < param_1[3]);
  }
  uVar1 = param_1[3];
  psVar6 = arg1;
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    psVar6[0] = 0;
    psVar6[1] = 0;
    psVar6 = psVar6 + 2;
  }
  for (iVar3 = (uVar1 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)psVar6 = 0;
    psVar6 = (short *)((int)psVar6 + 1);
  }
  iVar3 = param_1[3];
  iVar5 = 0;
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      iVar4 = (int)*(short *)(*param_1 + 4 + iVar7);
      if ((-1 < iVar4) && (iVar4 < iVar3)) {
        arg1[iVar4] = arg1[iVar4] + 1;
      }
      iVar3 = param_1[3];
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 6;
    } while (iVar5 < iVar3);
  }
  iVar3 = 0;
  *unused_stack_4 = 0;
  if (0 < param_1[3]) {
    psVar6 = arg1;
    do {
      iVar5 = (int)*psVar6;
      if ((int)*psVar6 <= *unused_stack_4) {
        iVar5 = *unused_stack_4;
      }
      *unused_stack_4 = iVar5;
      iVar3 = iVar3 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar3 < param_1[3]);
  }
  if (arg1 != (short *)0x0) {
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  return;
}


