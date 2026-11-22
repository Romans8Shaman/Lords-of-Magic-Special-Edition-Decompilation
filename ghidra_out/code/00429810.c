
undefined4 __thiscall FUN_00429810(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00485080(this,*param_1,0x2f);
  if (((puVar1 != (undefined4 *)0x0) && (iVar2 = param_1[1], -1 < iVar2)) &&
     (iVar2 < (int)puVar1[0x13])) {
    iVar2 = FUN_004282a0(puVar1 + iVar2 * 0x13 + 0x31,*param_1,iVar2,param_1[2],param_1[3]);
    if (iVar2 != 0) {
      if (((*(byte *)(puVar1 + 0xc) & 0x20) != 0) &&
         (puVar1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
      }
      return 1;
    }
  }
  return 0;
}


