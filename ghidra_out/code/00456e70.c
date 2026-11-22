
void __thiscall FUN_00456e70(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0x6c))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0x70))) {
    FUN_00456460(this,param_2 * *(int *)((int)this + 0x6c) + param_1);
    if (param_3 == 0) {
      FUN_00456460(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1);
      FUN_00456460(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1);
      iVar1 = 0;
      do {
        FUN_00456460(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + iVar1 + -2 + param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 5);
      return;
    }
    if (param_3 == 4) {
      FUN_00456460(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1);
      FUN_00456460(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1);
      iVar1 = 0;
      do {
        FUN_00456460(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + iVar1 + -2 + param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 5);
      return;
    }
    if (param_3 == 2) {
      FUN_00456460(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1);
      FUN_00456460(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1);
      iVar1 = 0;
      do {
        FUN_00456460(this,(iVar1 + -2 + param_2) * *(int *)((int)this + 0x6c) + -1 + param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 5);
      return;
    }
    FUN_00456460(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1);
    FUN_00456460(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1);
    iVar1 = 0;
    do {
      FUN_00456460(this,(iVar1 + -2 + param_2) * *(int *)((int)this + 0x6c) + 1 + param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
  }
  return;
}


