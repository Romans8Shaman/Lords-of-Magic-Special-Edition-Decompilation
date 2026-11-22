
undefined4 __fastcall FUN_0049b220(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  short *psVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 local_300;
  undefined1 local_2ff [767];
  
  iVar3 = *(int *)(*param_1 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  iVar7 = 0;
  puVar6 = local_2ff;
  do {
    puVar4 = (undefined1 *)(*(int *)(iVar3 + 8) + iVar7);
    iVar7 = iVar7 + 4;
    uVar1 = puVar4[1];
    uVar2 = *puVar4;
    puVar6[-1] = puVar4[2];
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    puVar6 = puVar6 + 3;
  } while (iVar7 < 0x400);
  psVar5 = FUN_0049b2a0(&DAT_00584ae8,&local_300,param_1 + 3);
  param_1[0x47] = (int)psVar5;
  return 1;
}


