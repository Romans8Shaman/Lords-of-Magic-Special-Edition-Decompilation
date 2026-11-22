
void __fastcall FUN_00531bf0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_005ae9c8;
  iVar1 = DAT_005ae9c4;
  iVar3 = DAT_005ae9c8 * DAT_005ae9c4;
  *(int *)((int)param_1 + 0xc) = DAT_005ae9c4;
  if (*(int *)((int)param_1 + 8) != iVar3) {
    FUN_00531b20(param_1,iVar3);
    DAT_005d3858 = 0;
    DAT_00574404 = 0xffffffff;
    DAT_00574408 = 0xffffffff;
    DAT_0057440c = 0xffffffff;
    DAT_00574410 = 0xffffffff;
    if (0 < *(int *)((int)param_1 + 8)) {
      iVar3 = 0;
      if (0 < *(int *)((int)param_1 + 8)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(*(int *)((int)param_1 + 4) + -4 + iVar3 * 4) = 1;
        } while (iVar3 < *(int *)((int)param_1 + 8));
      }
      FUN_00531c70(param_1,(iVar2 >> 1) * iVar1 + (iVar1 >> 1));
    }
  }
  return;
}


