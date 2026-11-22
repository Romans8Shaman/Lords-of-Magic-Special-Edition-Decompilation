
undefined4 __thiscall FUN_00500050(void *this,uint param_1,int param_2)

{
  int *piVar1;
  int *this_00;
  int *piVar2;
  int *piVar3;
  
  this_00 = (int *)FUN_005005f0(this,param_1);
  if (this_00 != (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x25318);
    if (this_00 == piVar2) {
      FUN_00490370(this_00,param_2);
      return 1;
    }
    piVar3 = (int *)*piVar2;
    if ((int *)*piVar2 != (int *)0x0) {
      do {
        if (piVar3 == this_00) {
          *piVar2 = *piVar3;
          *this_00 = *(int *)((int)this + 0x25318);
          *(int **)((int)this + 0x25318) = this_00;
          FUN_00490370(this_00,param_2);
          return 1;
        }
        piVar1 = (int *)*piVar3;
        piVar2 = piVar3;
        piVar3 = piVar1;
      } while (piVar1 != (int *)0x0);
      return 0;
    }
  }
  return 0;
}


