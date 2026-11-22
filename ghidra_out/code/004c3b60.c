
undefined4 __thiscall FUN_004c3b60(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) && (*(int *)((int)this + 8) != 0)) {
    piVar1 = (int *)FUN_004c3b00(this,param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_004c3980(piVar1);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


