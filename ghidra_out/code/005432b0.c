
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005432b0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_005d5560,0x104);
  _DAT_005d52e0 = &DAT_005d5560;
  pbVar2 = DAT_005d6b38;
  if (*DAT_005d6b38 == 0) {
    pbVar2 = &DAT_005d5560;
  }
  FUN_00543350(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_0053c1f0(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_00543350(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_005d52c8 = puVar1;
  _DAT_005d52c4 = local_8 + -1;
  return;
}


