
undefined4 __thiscall
FUN_0048e260(void *this,LONG unused_stack_8,LONG unused_stack_12,undefined4 param_p4)

{
  POINT pt;
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT local_10;
  
  FUN_0048ec90(this,&local_10.left);
  pt.y = unused_stack_12;
  pt.x = unused_stack_8;
  BVar1 = PtInRect(&local_10,pt);
  if (BVar1 != 0) {
    return 1;
  }
  iVar3 = 0;
  if (*(int *)((int)this + 0x50) < 1) {
    return 0;
  }
  iVar4 = 0;
  do {
    uVar2 = FUN_0048e300((void *)(*(int *)((int)this + 0x4c) + iVar4),unused_stack_8,unused_stack_12
                         ,*(int *)((int)this + 0x3c),*(int *)((int)this + 0x40));
    if (uVar2 != 0) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2c;
  } while (iVar3 < *(int *)((int)this + 0x50));
  return 0;
}


