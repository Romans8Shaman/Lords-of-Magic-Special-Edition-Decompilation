
void __thiscall FUN_00419360(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar3 = (int *)((int)this + 0xc4);
    do {
      iVar1 = FUN_00415470(piVar3);
      if (iVar1 != 0) {
        local_4 = local_4 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar4 < *(int *)((int)this + 0x4c));
  }
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar3 = (int *)((int)this + 0xd0);
    do {
      uVar2 = FUN_00521e30(piVar3 + -3);
      if (uVar2 == 0) {
        uVar2 = FUN_00521e70(piVar3 + -3);
        if ((uVar2 != 0) || (local_4 == 0)) goto LAB_004193c2;
      }
      else {
LAB_004193c2:
        *piVar3 = *piVar3 - param_1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar4 < *(int *)((int)this + 0x4c));
  }
  return;
}


