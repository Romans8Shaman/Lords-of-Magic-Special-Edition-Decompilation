
void __thiscall FUN_00441830(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_14 [5];
  
  iVar1 = DAT_005cd2f0;
  uVar4 = 0;
  if (0 < DAT_005cd2f0) {
    do {
      iVar2 = FUN_00441350(this,uVar4,0,local_14,1);
      if (iVar2 != 0) {
        if (*(int *)((int)param_1 + 0x54) == 0) {
          *(undefined4 *)((int)param_1 + 0x90) = 3;
          FUN_004d4550(param_1);
          *(undefined4 *)((int)param_1 + 0x90) = 0;
          *(undefined4 *)((int)param_1 + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)param_1 + 0x50);
          iVar3 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar3;
          *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
          *(uint *)(iVar2 + 4 + iVar3 * 8) = uVar4;
        }
        FUN_004d05e0(param_1,param_2,param_3);
        iVar2 = *(int *)((int)param_1 + 0x6c);
        *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
        if (iVar2 != 0) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  return;
}


