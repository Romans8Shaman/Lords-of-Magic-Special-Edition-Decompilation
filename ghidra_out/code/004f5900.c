
void __thiscall FUN_004f5900(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (*(char *)((int)this + 4) != '\x01') {
      return;
    }
    iVar1 = FUN_004f5940((int)this);
    if (iVar1 == 0) {
      return;
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(int *)this != 0) {
    FUN_004f5800(*(int *)this);
    *(undefined4 *)this = 0;
  }
  return;
}


