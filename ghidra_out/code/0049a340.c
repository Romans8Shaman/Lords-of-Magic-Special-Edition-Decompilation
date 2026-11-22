
uint __thiscall FUN_0049a340(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint local_4;
  
  piVar5 = *(int **)((int)this + 8);
  uVar4 = 0xffffffff;
  local_4 = 0xffffffff;
  if (piVar5 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)this;
  uVar2 = 0;
  uVar3 = 0xffffffff;
  if (0 < iVar1) {
    do {
      if (*piVar5 == *param_1) {
        uVar4 = uVar2;
      }
      if (*piVar5 == -1) {
        local_4 = uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 3;
    } while ((int)uVar2 < iVar1);
    uVar3 = local_4;
  }
  if ((int)uVar4 < 0) {
    if (0x7fffffff < uVar3) {
      uVar3 = *(uint *)((int)this + 4);
    }
  }
  else {
    uVar3 = uVar4;
  }
  if ((int)uVar3 < iVar1) {
    piVar5 = (int *)(*(int *)((int)this + 8) + uVar3 * 0xc);
    *piVar5 = *param_1;
    piVar5[1] = param_1[1];
    piVar5[2] = param_1[2];
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return uVar3;
  }
  return 0xffffffff;
}


