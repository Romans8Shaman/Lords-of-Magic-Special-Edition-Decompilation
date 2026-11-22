
undefined4 * __thiscall FUN_004ea470(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_3 < 4) && ((param_2 < 0 || (*(int *)((int)this + 0x20c) <= param_2)))) {
    *param_1 = 1;
    param_1[1] = 0;
    return param_1;
  }
  uVar2 = 0;
  switch(param_3) {
  case 0:
    uVar1 = *(undefined4 *)(param_2 * 0x10 + 0xc + (int)this);
    *param_1 = 1;
    param_1[1] = uVar1;
    return param_1;
  case 1:
    uVar1 = *(undefined4 *)((param_2 + 1) * 0x10 + (int)this);
    *param_1 = 1;
    param_1[1] = uVar1;
    return param_1;
  case 2:
  case 3:
    uVar1 = *(undefined4 *)(param_2 * 0x10 + 0x14 + (int)this);
    *param_1 = 1;
    param_1[1] = uVar1;
    return param_1;
  case 4:
    uVar1 = *(undefined4 *)((int)this + 0x20c);
    *param_1 = 1;
    param_1[1] = uVar1;
    return param_1;
  case 5:
    uVar1 = *(undefined4 *)this;
    *param_1 = 1;
    param_1[1] = uVar1;
    return param_1;
  case 6:
    uVar1 = *(undefined4 *)((int)this + 4);
    *param_1 = 1;
    param_1[1] = uVar1;
    return param_1;
  case 7:
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 1;
    param_1[1] = uVar1;
    return param_1;
  case 8:
    *param_1 = *(undefined4 *)((int)this + 0x210);
    param_1[1] = *(undefined4 *)((int)this + 0x214);
    return param_1;
  case 9:
    uVar2 = FUN_004e9f00((int)this);
  }
  *param_1 = 1;
  param_1[1] = uVar2;
  return param_1;
}


