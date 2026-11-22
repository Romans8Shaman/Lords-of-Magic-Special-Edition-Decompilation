
bool __thiscall FUN_004215b0(void *this,LONG param_1,LONG param_2)

{
  int iVar1;
  
  iVar1 = FUN_00420490((int)this);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_004f5a50(this,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_004b05e0((void *)((int)this + 0x55c),param_1,param_2,*(int *)((int)this + 0x14),
                         *(int *)((int)this + 0x18));
    return iVar1 != 0;
  }
  return true;
}


