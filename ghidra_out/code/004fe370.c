
void __fastcall FUN_004fe370(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 arg1;
  
  iVar2 = *(int *)((int)param_1 + 0x255a0);
  if (iVar2 != 0) {
    FUN_00539eb0(iVar2,0x80,*(int *)(iVar2 + -4),FUN_0048d670);
    if (iVar2 + -4 != 0) {
      Ordinal_403(iVar2 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
  }
  FUN_004c4bb0((undefined4 *)((int)param_1 + 0x487dc));
  FUN_004b64d0((int)param_1 + 0x48870);
  FUN_0047fd20((int)param_1 + 0x25644);
  FUN_00491b00((int *)((int)param_1 + 0x23068));
  while (puVar1 = DAT_0058340c, puVar1 != (undefined4 *)0x0) {
    DAT_0058340c = (undefined4 *)puVar1[0xf];
    if (puVar1 != (undefined4 *)0x0) {
      (/*IC:004fe3f6*/**(code **)*puVar1)(puVar1,1);
    }
  }
  DAT_0058340c = (undefined4 *)0x0;
  puVar1 = DAT_005836f4;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_005836f4 = (undefined4 *)puVar1[0xf];
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (/*IC:004fe428*/**(code **)*puVar1)(puVar1,0);
    }
    puVar1 = DAT_005836f4;
    if (iVar2 != 0) {
      Ordinal_403(iVar2,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      puVar1 = DAT_005836f4;
    }
  }
  DAT_005836f4 = (undefined4 *)0x0;
  FUN_0049aae0((int)param_1);
  (/*IC:004fe471*/**(code **)(*(int *)((int)param_1 + 0x2be8) + 0x48))((void *)((int)param_1 + 0x2be8));
  FUN_00531030((undefined4 *)((int)param_1 + 0x1cd8));
  FUN_00478410((int *)((int)param_1 + 0x920));
  FUN_00475370((int)param_1);
  FUN_004c9900((undefined4 *)((int)param_1 + 0x278));
  iVar2 = *(int *)((int)param_1 + 0x23090);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x90) = 0x16;
    *(undefined4 *)(iVar2 + 0x70) = 1;
    *(undefined4 *)(iVar2 + 0x6c) = 1;
  }
  FUN_00495590((int *)((int)param_1 + 0x23070));
  if (*(int *)((int)param_1 + 0x6d0) != 0) {
    Ordinal_403(*(int *)((int)param_1 + 0x6d0),s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  *(undefined4 *)((int)param_1 + 0x6d0) = 0;
  FUN_005050d0(param_1);
  FUN_004feaf0((int)param_1);
  if (DAT_00584c14 != 0) {
    if (*(int *)((int)param_1 + 8) == 0) {
      Ordinal_252(*(undefined4 *)((int)param_1 + 0x120));
      Ordinal_252(*(undefined4 *)((int)param_1 + 0x124));
      Ordinal_252(*(undefined4 *)((int)param_1 + 0x118));
      arg1 = *(undefined4 *)((int)param_1 + 0x11c);
    }
    else {
      Ordinal_252(*(undefined4 *)((int)param_1 + 0x114));
      Ordinal_252(*(undefined4 *)((int)param_1 + 0x120));
      Ordinal_252(*(undefined4 *)((int)param_1 + 0x124));
      Ordinal_252(*(undefined4 *)((int)param_1 + 0x118));
      arg1 = *(undefined4 *)((int)param_1 + 0x11c);
    }
    Ordinal_252(arg1);
  }
  OutputDebugStringA(s_SFileDestroy_not_called_00573448);
  DeleteFileA(s_temp_tmp_0057343c);
  return;
}


