
uint __thiscall FUN_004d2ac0(void *this,char param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == '\x06') {
    if (*param_2 == 0) {
      uVar2 = 1;
    }
    else {
      *(int *)((int)this + 0xa84) = *(int *)((int)this + 0xa84) + param_2[1] * -8;
      uVar2 = FUN_004d2bf0(this,*param_2);
    }
    *(int *)((int)this + 0xa84) = *(int *)((int)this + 0xa84) + -0x10;
    iVar1 = FUN_004d2bf0(this,(int)param_2);
    return -(uint)(iVar1 != 0) & uVar2;
  }
  if (param_1 == '\a') {
    if (*param_2 == 0) {
      *(int *)((int)this + 0xa80) = *(int *)((int)this + 0xa80) + -0x10;
      iVar1 = FUN_004d2bf0(this,(int)param_2);
      return -(uint)(iVar1 != 0) & 1;
    }
    *(int *)((int)this + 0xa80) = *(int *)((int)this + 0xa80) + param_2[1] * -0x10;
    uVar2 = FUN_004d2bf0(this,*param_2);
    *(int *)((int)this + 0xa80) = *(int *)((int)this + 0xa80) + -0x10;
    iVar1 = FUN_004d2bf0(this,(int)param_2);
    return -(uint)(iVar1 != 0) & uVar2;
  }
  if (param_1 == '\b') {
    iVar1 = FUN_004cee20((char *)param_2);
    *(int *)((int)this + 0xa7c) = *(int *)((int)this + 0xa7c) + (-2 - iVar1);
    iVar1 = FUN_004d2bf0(this,(int)param_2);
    return (uint)(iVar1 != 0);
  }
  return 0;
}


