
void __thiscall
FUN_004a6e90(void *this,int param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_4;
  
  iVar1 = *(int *)((int)this + 0x6c);
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  iVar2 = param_2 + param_1 % iVar1;
  iVar4 = param_1 % iVar1 - param_2;
  local_4 = param_1 / iVar1 - param_2;
  param_1 = param_2 + param_1 / iVar1;
  param_2 = iVar2;
  if (*(int *)((int)this + 0x14) == 0) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (local_4 < 0) {
      local_4 = 0;
    }
    if (iVar1 <= iVar2) {
      param_2 = iVar1 + -1;
    }
    if (*(int *)((int)this + 0x70) <= param_1) {
      param_1 = *(int *)((int)this + 0x70) + -1;
    }
  }
  do {
    iVar1 = local_4;
    if (param_2 < iVar4) {
      return;
    }
    for (; iVar1 <= param_1; iVar1 = iVar1 + 1) {
      iVar2 = FUN_004a51c0(this,iVar4,iVar1);
      iVar2 = FUN_004a8300(this,iVar2,0);
      uVar3 = FUN_00482ac0(&DAT_005aa12c,iVar2,0);
      if ((uVar3 != 0) && (iVar2 = (/*IC:004a6f39*/*(code *)param_4)(uVar3,param_3), iVar2 == 0)) {
        return;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


