
void __thiscall FUN_0047aed0(void *this,uint param_p1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_p1;
  if (((*(int *)((int)this + 0x13b4) != 0) && (-1 < (int)param_p1)) && ((int)param_p1 < 10)) {
    piVar1 = *(int **)((int)this + 0x784);
    if ((piVar1 != (int *)0x0) &&
       ((/*IC:0047aefd*/**(code **)(*piVar1 + 0x24))(piVar1,&param_p1), (param_p1 & 5) != 0)) {
      return;
    }
    FUN_0053a110();
    FUN_0047a8b0(this,uVar2);
  }
  return;
}


