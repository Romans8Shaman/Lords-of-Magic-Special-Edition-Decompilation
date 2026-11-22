
void __thiscall FUN_00474a90(void *this,uint *param_1)

{
  uint uVar1;
  
  SetCursor((HCURSOR)param_1[1]);
  uVar1 = param_1[2];
  *(uint *)((int)this + 0x178) = uVar1;
  if ((uVar1 & 2) == 0) {
    FUN_00472740(this,*param_1);
    return;
  }
  FUN_00474ad0((int)this);
  return;
}


