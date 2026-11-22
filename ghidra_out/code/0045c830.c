
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0045c830(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = DAT_005a7b78;
  if ((char)DAT_005a7d1c != '\0') {
    if (DAT_005a7b78[0x15] == 0) {
      DAT_005a7b78[0x24] = 3;
      FUN_004d4550(puVar2);
      puVar2[0x24] = 0;
      puVar2[0x29] = 0;
    }
    else {
      iVar3 = DAT_005a7b78[0x15] + -1;
      DAT_005a7b78[0x15] = iVar3;
      iVar1 = puVar2[0x14];
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d1c,DAT_005a7d20,-1);
  }
  puVar2 = DAT_005a7b78;
  if (DAT_005aa1c4 != '\0') {
    if (DAT_005a7b78[0x15] == 0) {
      DAT_005a7b78[0x24] = 3;
      FUN_004d4550(puVar2);
      puVar2[0x24] = 0;
      puVar2[0x29] = 0;
    }
    else {
      iVar3 = DAT_005a7b78[0x15] + -1;
      DAT_005a7b78[0x15] = iVar3;
      iVar1 = puVar2[0x14];
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
    }
    FUN_004d05e0(DAT_005a7b78,_DAT_005aa1c4,DAT_005aa1c8);
  }
  FUN_0048c3c0(2);
  uVar4 = 0;
  if (*(int *)((int)param_1 + 0x4ff4) == 0) {
    *(undefined4 *)((int)param_1 + 0x4ff4) = 1;
    *(undefined4 *)((int)param_1 + 0x5000) = 1;
    DAT_00584ca0 = 0;
    FUN_00472740(&DAT_005a9e04,0x2b);
    FUN_00472720(&DAT_005a9e04);
    FUN_0048c140();
    FUN_0048c6a0();
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
      *(undefined4 *)((int)param_1 + 0x5024) = 0;
      FUN_004372e0((undefined4 *)((int)param_1 + 0x22db0));
      FUN_0047c4b0((int *)((int)param_1 + 0x228bc));
      FUN_0042e5a0((void *)((int)param_1 + 0x3b24),DAT_005a7b78,0);
      FUN_0045c9b0(param_1);
    }
    uVar4 = 1;
  }
  return uVar4;
}


