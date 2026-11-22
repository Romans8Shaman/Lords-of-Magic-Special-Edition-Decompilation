
int __thiscall FUN_00497d80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00498110((int)this);
  iVar2 = FUN_00497940(this);
  if ((param_1 < iVar2) && (-1 < param_1)) {
    if (iVar2 - iVar1 < param_1) {
      param_1 = iVar2 - iVar1;
    }
    *(int *)((int)this + 0x20) = param_1;
  }
  return *(int *)((int)this + 0x20);
}


