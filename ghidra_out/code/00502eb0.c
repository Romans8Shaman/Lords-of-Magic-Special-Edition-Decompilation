
undefined4 __thiscall
FUN_00502eb0(void *this,int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = FUN_00502e40((int)this);
  puVar2 = FUN_00485080((void *)((int)this + 0x25644),param_3,0x2f);
  uVar3 = FUN_00482ac0((void *)((int)this + 0x25644),param_3,3);
  iVar4 = *(int *)((int)this + 0x1b8);
  if (iVar4 == 2) {
    iVar4 = (param_2 < 0) + 1;
  }
  else if (iVar4 == 3) {
    if (param_3 < 0) {
      iVar4 = 0;
    }
    else if (puVar2 == (undefined4 *)0x0) {
      if (uVar3 == 0) {
        iVar4 = param_2;
      }
      else {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 1;
    }
  }
  else {
    if (iVar4 != 4) {
      return 0;
    }
    if ((param_3 < 0) && (param_2 < 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004f2790((void *)((int)this + 0x170),param_2,param_3,param_4);
      iVar4 = 2 - (uint)(iVar4 != 0);
    }
  }
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  else if (iVar4 == 1) {
    iVar6 = 1;
  }
  else {
    if (iVar4 != 2) goto LAB_00502fb3;
    iVar6 = 2;
  }
  uVar5 = FUN_00472df0(uVar1,iVar6);
  FUN_00472740((void *)((int)this + 0x2531c),uVar5);
LAB_00502fb3:
  if (param_1 == 0x202) {
    if (iVar4 == 1) {
      *(int *)((int)this + 0x174) = param_2;
      *(int *)((int)this + 0x180) = param_3;
      *(undefined4 *)((int)this + 0x184) = param_4;
      if (*(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this) == 3) {
        *(undefined4 *)((int)this + 0x184) = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        *(int *)((int)this + 0x17c) = param_3;
      }
      if (uVar3 != 0) {
        *(int *)((int)this + 0x178) = param_3;
      }
      FUN_004f07c0(this,(undefined4 *)((int)this + 0x170));
    }
    FUN_00503040(this,0);
  }
  return 1;
}


