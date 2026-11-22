
undefined4 __thiscall FUN_0047e100(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_005557e0 != 2) && ((*(byte *)((int)this + 0x30) & 0x12) == 0)) {
    return 0;
  }
  iVar1 = FUN_004b0670((void *)((int)this + 0x88),param_1,param_2,*(int *)((int)this + 0x14),
                       *(int *)((int)this + 0x18));
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    uVar2 = FUN_004f5a10(this,param_1,param_2);
    return uVar2;
  }
  return 0;
}


