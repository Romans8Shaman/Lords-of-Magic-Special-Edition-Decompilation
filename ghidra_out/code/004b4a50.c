
void __fastcall FUN_004b4a50(int param_1)

{
  int *piVar1;
  uint uVar2;
  DWORD arg1;
  char *arg1_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  CHAR local_104 [260];
  
  puVar5 = (undefined4 *)(param_1 + 0x14);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 100;
  puVar5 = (undefined4 *)(param_1 + 0xd0);
  do {
    puVar5[-0x29] = 0;
    puVar5[6] = 0;
    iVar3 = iVar3 + -1;
    puVar6 = puVar5;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar5 + 0x30;
  } while (iVar3 != 0);
  DAT_00584aa0 = 0;
  DAT_00584aa4 = 1;
  DAT_00584ae4 = 0;
  GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
  piVar1 = (int *)FUN_00539610(local_104,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00548ec0((int)piVar1);
    arg1 = FUN_00548e10(uVar2);
    arg1_00 = (char *)Ordinal_401(arg1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    FUN_005397f0(arg1_00,1,arg1,piVar1);
    uVar2 = 0;
    DAT_00584424 = 0;
    if (arg1 != 0) {
      do {
        DAT_00584424 = DAT_00584424 + (uint)(byte)arg1_00[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < arg1);
    }
    if (arg1_00 != (char *)0x0) {
      Ordinal_403(arg1_00,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    FUN_005394d0(piVar1);
  }
  return;
}


