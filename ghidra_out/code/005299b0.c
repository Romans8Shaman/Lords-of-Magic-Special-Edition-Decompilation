
void __thiscall FUN_005299b0(void *this,int param_1,void *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_005aee6c) {
    do {
      iVar1 = FUN_004beef0((void *)(param_1 + 0x34),iVar3);
      if ((iVar1 == 0) || (iVar1 = FUN_00529360(this,2,2,iVar3), iVar1 == 0)) {
        iVar1 = FUN_004beef0((void *)(param_1 + 0x34),iVar3);
        if ((iVar1 != 0) && (iVar1 = FUN_00529360(this,2,1,iVar3), iVar1 != 0)) {
          if (*(int *)((int)param_2 + 0x54) == 0) goto LAB_00529a4a;
          iVar1 = *(int *)((int)param_2 + 0x50);
          iVar2 = *(int *)((int)param_2 + 0x54) + -1;
          *(int *)((int)param_2 + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar2 * 8) = iVar3;
          goto LAB_00529a67;
        }
      }
      else {
        if (*(int *)((int)param_2 + 0x54) == 0) {
LAB_00529a4a:
          *(undefined4 *)((int)param_2 + 0x90) = 3;
          FUN_004d4550(param_2);
          *(undefined4 *)((int)param_2 + 0x90) = 0;
          *(undefined4 *)((int)param_2 + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)param_2 + 0x50);
          iVar2 = *(int *)((int)param_2 + 0x54) + -1;
          *(int *)((int)param_2 + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar2 * 8) = iVar3;
        }
LAB_00529a67:
        FUN_004d05e0(param_2,param_3,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005aee6c);
  }
  return;
}


