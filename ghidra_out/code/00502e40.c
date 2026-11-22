
undefined4 __fastcall FUN_00502e40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = FUN_004efe80(&DAT_005aee6c,*(int *)(param_1 + 0x170));
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 8);
  }
  uVar2 = 0xffffffff;
  iVar1 = *(int *)(*(int *)(param_1 + 0x232a4) * 0x400 + 0x232a8 + param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar3 != (undefined *)0x0) {
    uVar2 = *(undefined4 *)(puVar3 + 0x15b0);
  }
  return uVar2;
}


