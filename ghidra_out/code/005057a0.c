
void __thiscall FUN_005057a0(void *this,void *param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)((int)this + 0x25318);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    iVar2 = *(int *)((int)this + 0x255a0);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x50);
      iVar4 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = ((int)puVar1 - iVar2 >> 7) + 0x11000000;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    iVar2 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
    if (iVar2 != 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return;
}


