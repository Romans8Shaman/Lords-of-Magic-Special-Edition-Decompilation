
void __cdecl op_selectedarmiescancastbreath_q(void *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  pvVar1 = param_1;
  iVar2 = FUN_0041be40(param_1,&param_1);
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      puVar3 = FUN_00485080(&DAT_005aa12c,
                            *(int *)(&DAT_005a7da8 + iVar2 + *(int *)((int)param_1 + 0x48) * 0x400),
                            0x2f);
      if ((puVar3 != (undefined4 *)0x0) &&
         (*(char *)(puVar3 + 0x16b) == *(char *)((int)param_1 + 0x5ac))) {
        uVar4 = FUN_0052b1d0(puVar3 + 0x31);
        if (uVar4 != 0) {
          if (*(int *)((int)pvVar1 + 0x54) != 0) {
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
            *(int *)((int)pvVar1 + 0x54) = iVar5;
            *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = 0xffffffff;
            return;
          }
          goto LAB_004e27ff;
        }
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 < 0x168);
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      iVar5 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar5;
      *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = 0;
      return;
    }
LAB_004e27ff:
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


