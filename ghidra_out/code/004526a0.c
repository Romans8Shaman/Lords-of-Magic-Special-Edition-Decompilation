
void __thiscall FUN_004526a0(void *this,void *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_004fbe60(&DAT_005ae974,0,2);
  do {
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(iVar3 + 0x80) == *(int *)((int)this + 0x28)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x28);
      if (*(int *)((int)param_1 + 0x54) == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)param_1 + 0x50);
        iVar4 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      }
      FUN_004d05e0(param_1,param_2,param_3);
      iVar2 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar3 = FUN_004fbe60(&DAT_005ae974,iVar3,2);
  } while( true );
}


