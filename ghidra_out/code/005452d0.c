
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_C(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_005d56b2;
  if (DAT_005d5318 == 0) {
    FUN_0053bce0(DAT_005d567c);
    FUN_0053bce0(DAT_005d5680);
    FUN_0053bce0(DAT_005d5684);
    DAT_005d567c = (undefined *)0x0;
    DAT_005d5680 = (undefined *)0x0;
    DAT_005d5684 = (char *)0x0;
    uVar4 = FUN_0053c1f0(2);
    *(undefined4 *)PTR_PTR_00577db0 = uVar4;
    if (*(undefined2 **)PTR_PTR_00577db0 == (undefined2 *)0x0) {
      return;
    }
    **(undefined2 **)PTR_PTR_00577db0 = DAT_0055e260;
    uVar4 = FUN_0053c1f0(2);
    *(undefined4 *)(PTR_PTR_00577db0 + 4) = uVar4;
    if (*(undefined1 **)(PTR_PTR_00577db0 + 4) == (undefined1 *)0x0) {
      return;
    }
    **(undefined1 **)(PTR_PTR_00577db0 + 4) = 0;
    uVar4 = FUN_0053c1f0(2);
    *(undefined4 *)(PTR_PTR_00577db0 + 8) = uVar4;
    if (*(undefined1 **)(PTR_PTR_00577db0 + 8) == (undefined1 *)0x0) {
      return;
    }
    **(undefined1 **)(PTR_PTR_00577db0 + 8) = 0;
  }
  else {
    iVar1 = FUN_005479e0(1,uVar5,0xe,(char *)&DAT_005d567c);
    iVar2 = FUN_005479e0(1,uVar5,0xf,(char *)&DAT_005d5680);
    iVar3 = FUN_005479e0(1,uVar5,0x10,(char *)&DAT_005d5684);
    FUN_00545710(DAT_005d5684);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_0053bce0(DAT_005d567c);
      FUN_0053bce0(DAT_005d5680);
      FUN_0053bce0(DAT_005d5684);
      DAT_005d567c = (undefined *)0x0;
      DAT_005d5680 = (undefined *)0x0;
      DAT_005d5684 = (char *)0x0;
      return;
    }
    if (*(undefined **)PTR_PTR_00577db0 != &DAT_00577d78) {
      FUN_0053bce0(*(undefined **)PTR_PTR_00577db0);
      FUN_0053bce0(*(undefined **)(PTR_PTR_00577db0 + 4));
      FUN_0053bce0(*(undefined **)(PTR_PTR_00577db0 + 8));
    }
    *(undefined **)PTR_PTR_00577db0 = DAT_005d567c;
    *(undefined **)(PTR_PTR_00577db0 + 4) = DAT_005d5680;
    *(char **)(PTR_PTR_00577db0 + 8) = DAT_005d5684;
  }
  _DAT_0057509c = 1;
  DAT_00575098 = **(undefined1 **)PTR_PTR_00577db0;
  return;
}


