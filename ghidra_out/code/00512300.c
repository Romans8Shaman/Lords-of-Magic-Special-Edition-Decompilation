
int __thiscall FUN_00512300(void *this,byte *unused_stack_4,undefined4 param_p2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = FUN_00495370((void *)((int)this + 0x284),unused_stack_4);
  if (iVar1 == 0) {
    return 0;
  }
  pCVar2 = (LPCSTR)FUN_004bfd30(unused_stack_4);
  iVar1 = FUN_00512240(this,pCVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_005119b0((int)this);
    FUN_005122a0(this,pCVar2);
  }
  return iVar1;
}


