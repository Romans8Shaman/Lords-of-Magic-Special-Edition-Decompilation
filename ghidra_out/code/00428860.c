
void __thiscall FUN_00428860(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  DAT_00555d70 = 0;
  DAT_00555d74 = *(undefined4 *)((int)this + 0x22c40);
  if (0 < *(int *)((int)this + 0x22c3c)) {
    puVar3 = (undefined4 *)((int)this + 0x22a68);
    do {
      DAT_005788c4 = puVar3 + -3;
      DAT_00555d6c = *puVar3;
      FUN_004d05e0(param_1,param_2,param_3);
      iVar1 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar1 != 0) {
        return;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 6;
    } while (iVar2 < *(int *)((int)this + 0x22c3c));
  }
  return;
}


