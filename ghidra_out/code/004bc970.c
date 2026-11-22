
void __thiscall FUN_004bc970(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0xd24);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    DAT_005844c8 = iVar1;
    FUN_004d05e0(param_1,param_2,param_3);
    iVar2 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
    if (iVar2 != 0) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  return;
}


