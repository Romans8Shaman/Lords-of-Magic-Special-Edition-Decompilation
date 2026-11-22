
void __thiscall FUN_00484f40(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 0;
  pbVar3 = (byte *)((int)this + 0x6640);
  do {
    if ((*pbVar3 & 1) != 0) {
      if (*(int *)((int)param_1 + 0x54) == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
      }
      else {
        iVar1 = *(int *)((int)param_1 + 0x50);
        iVar2 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar2 * 8) = iVar4;
      }
      FUN_004d05e0(param_1,param_2,param_3);
      iVar1 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar1 != 0) {
        return;
      }
    }
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 0x1d84;
    if (0xf < iVar4) {
      return;
    }
  } while( true );
}


