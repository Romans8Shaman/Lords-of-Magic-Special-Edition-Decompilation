
void __thiscall FUN_00406c00(void *this,int param_1,uint param_2,int *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *this_00;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  this_00 = param_4;
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if ((puVar3 != (undefined *)0x0) && (puVar3 + 0x15e0 != (undefined *)0x0)) {
    iVar1 = *(int *)((int)this + 0x34);
    for (iVar6 = *(int *)((int)this + 0x40); iVar6 <= iVar1; iVar6 = iVar6 + 1) {
      iVar4 = FUN_004f6000(&DAT_005ae974,iVar6);
      if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) && (iVar5 = FUN_00407d50(iVar4), iVar5 == 0)
          ) && (((iVar5 = FUN_00420620(iVar4), iVar5 == 0 && (*(int *)(iVar4 + 0x48) == param_1)) &&
                ((iVar5 = FUN_004630e0(puVar3 + 0x15e0,&param_4,iVar6), iVar5 != 0 &&
                 ((int)param_4 < 0)))))) {
        uVar2 = *(undefined4 *)(iVar4 + 0x28);
        if (*(int *)((int)this_00 + 0x54) == 0) {
          *(undefined4 *)((int)this_00 + 0x90) = 3;
          FUN_004d4550(this_00);
          *(undefined4 *)((int)this_00 + 0x90) = 0;
          *(undefined4 *)((int)this_00 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)this_00 + 0x50);
          iVar5 = *(int *)((int)this_00 + 0x54) + -1;
          *(int *)((int)this_00 + 0x54) = iVar5;
          *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
        }
        FUN_004d05e0(this_00,param_2,param_3);
        iVar4 = *(int *)((int)this_00 + 0x6c);
        *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
        if (iVar4 != 0) {
          return;
        }
      }
    }
  }
  return;
}


