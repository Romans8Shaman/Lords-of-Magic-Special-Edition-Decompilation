
undefined4 __thiscall FUN_00527200(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  switch(param_1) {
  case 0x96:
    *param_2 = *(int *)this;
    return 1;
  case 0x97:
    iVar1 = FUN_00521f30(this);
    *param_2 = iVar1;
    return 1;
  case 0x98:
    *param_2 = *(int *)((int)this + 4);
    return 1;
  case 0x99:
    *param_2 = *(int *)((int)this + 0xc);
    return 1;
  default:
    return 0;
  case 0x9b:
    iVar1 = FUN_00525fc0(this);
    *param_2 = iVar1;
    return 1;
  case 0x9d:
    break;
  case 0x9e:
    *param_2 = *(int *)((int)this + 0x20);
    return 1;
  case 0x9f:
    uVar2 = FUN_00529180(this);
    if (uVar2 == 0) {
      return 0;
    }
    *param_2 = *(int *)(uVar2 + 0x14);
    return 1;
  case 0xa0:
    *param_2 = *(int *)((int)this + 0x24);
    return 1;
  }
  uVar2 = FUN_00529140(this);
  if (uVar2 == 0) {
    *param_2 = -1;
    return 1;
  }
  *param_2 = *(int *)(*(int *)((int)this + 0x14) + 0x10);
  return 1;
}


