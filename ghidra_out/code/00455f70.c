
void __thiscall FUN_00455f70(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((-1 < param_1) && (iVar2 = *(int *)((int)this + 0x6c), param_1 < iVar2)) && (-1 < param_2))
     && (param_2 < *(int *)((int)this + 0x70))) {
    uVar1 = FUN_00455640(&DAT_005ae8e8,param_3);
    FUN_004558c0(&DAT_005aa12c,param_1,param_2,uVar1);
    if (param_3 == 0) {
      param_3 = (int)DAT_005ae91c;
    }
    else if (param_3 == 1) {
      param_3 = (int)DAT_005ae91d;
    }
    else if (param_3 == 2) {
      param_3 = (int)DAT_005ae91e;
    }
    FUN_00455e50(this,param_2 * iVar2 + param_1,param_3);
    switch(param_3) {
    case 0:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,0);
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,0);
      iVar2 = param_2 + 1;
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + param_1,0);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + -1 + param_1,0);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + 1 + param_1,0);
      return;
    case 1:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,1);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,1);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + -1 + param_1,1);
      return;
    case 2:
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,2);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,2);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + -1 + param_1,2);
      FUN_00455ef0(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,2);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + -1 + param_1,2);
      return;
    case 3:
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,3);
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,3);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + -1 + param_1,3);
      return;
    case 4:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + -1 + param_1,4);
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,4);
      iVar2 = param_2 + -1;
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + param_1,4);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + 1 + param_1,4);
      FUN_00455ef0(this,iVar2 * *(int *)((int)this + 0x6c) + -1 + param_1,4);
      return;
    case 5:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,5);
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,5);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + 1 + param_1,5);
      return;
    case 6:
      FUN_00455e50(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + param_1,6);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,6);
      FUN_00455ef0(this,(param_2 + -1) * *(int *)((int)this + 0x6c) + 1 + param_1,6);
      FUN_00455ef0(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,6);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + 1 + param_1,6);
      return;
    case 7:
      FUN_00455e50(this,param_2 * *(int *)((int)this + 0x6c) + 1 + param_1,7);
      FUN_00455e50(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + param_1,7);
      FUN_00455ef0(this,(param_2 + 1) * *(int *)((int)this + 0x6c) + 1 + param_1,7);
    }
  }
  return;
}


