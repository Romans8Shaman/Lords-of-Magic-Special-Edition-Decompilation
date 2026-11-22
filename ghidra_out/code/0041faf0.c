
int __thiscall FUN_0041faf0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)this != 0) && (0 < param_1)) && (param_1 < 0x10)) &&
     ((-1 < param_2 && (param_2 < 0xf)))) {
    iVar1 = 1;
    iVar2 = 0;
    if (1 < param_1) {
      do {
        iVar2 = iVar2 + iVar1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1);
    }
    iVar2 = iVar2 + param_2;
    if ((-1 < iVar2) && (iVar2 < *(int *)((int)this + 4))) {
      return *(int *)this + iVar2 * 8;
    }
  }
  return 0;
}


