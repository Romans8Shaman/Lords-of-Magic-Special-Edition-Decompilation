
void __cdecl op_loadconfig(void *vm)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iStack_8;
  int iStack_4;
  
  iStack_4 = 1;
  piVar1 = (int *)FUN_00539610(s_lom_cfg_0055b4b8,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    FUN_005397f0((char *)&DAT_005aa144,4,1,piVar1);
    FUN_005397f0((char *)&DAT_005aa148,4,1,piVar1);
    FUN_005397f0((char *)&DAT_005aa14c,4,1,piVar1);
    FUN_005397f0((char *)&DAT_005aa150,4,1,piVar1);
    if (DAT_005aa1f8 != 0) {
      FUN_005397f0((char *)&iStack_8,4,1,piVar1);
      iVar3 = 0;
      if (0 < iStack_8) {
        iVar4 = 0;
        do {
          FUN_005397f0((char *)(DAT_005aa1f8 + 4 + iVar4),4,1,piVar1);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar3 < iStack_8);
      }
      if (iStack_8 < DAT_005aa1f4) {
        iVar3 = iStack_8 * 0xc;
        do {
          iStack_8 = iStack_8 + 1;
          *(undefined4 *)(DAT_005aa1f8 + 4 + iVar3) = 1;
          iVar3 = iVar3 + 0xc;
        } while (iStack_8 < DAT_005aa1f4);
      }
    }
    uVar2 = FUN_005397f0((char *)&DAT_005aa154,4,1,piVar1);
    if (uVar2 == 0) {
      DAT_005aa154 = 0;
    }
    FUN_005397f0((char *)&DAT_005aa254,4,1,piVar1);
    *(undefined4 *)(&DAT_005a8080 + DAT_005a7d8c * 0x400) = DAT_005aa254;
    uVar2 = FUN_005397f0((char *)&DAT_005aa134,0x10,1,piVar1);
    if (uVar2 == 1) {
      iStack_4 = 0;
    }
    uVar2 = FUN_005397f0((char *)&DAT_00586784,4,1,piVar1);
    if (uVar2 != 1) {
      DAT_00586784 = 1;
    }
    uVar2 = FUN_005397f0((char *)&DAT_005aa258,4,1,piVar1);
    if (uVar2 != 1) {
      DAT_005aa258 = 1;
    }
    uVar2 = FUN_005397f0((char *)&DAT_005d20bc,4,1,piVar1);
    if (uVar2 != 1) {
      DAT_005d20bc = 1;
    }
    FUN_005394d0(piVar1);
  }
  if (iStack_4 != 0) {
    CoCreateGuid((GUID *)&DAT_005aa134);
    FUN_00487220(0x5aa12c);
  }
  return;
}


