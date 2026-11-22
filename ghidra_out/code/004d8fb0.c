
void __cdecl op_linetest(void *vm)

{
  void *this;
  int iVar1;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int aiStack_2c [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  this = vm;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b7a8;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_00404ab0(vm,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,(uint *)&vm,(uint *)&fStack_38,&fStack_3c);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_34 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_34,&uStack_48,(uint *)&fStack_3c,&fStack_38);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_34 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_34,&uStack_44,(uint *)&fStack_3c,&fStack_38);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          FUN_00404ab0(this,6);
          uStack_34 = 0;
        }
        iVar1 = FUN_004026a0(&uStack_34,&uStack_40,(uint *)&fStack_3c,&fStack_38);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
          ExceptionList = pvStack_c;
          return;
        }
        FUN_004950c0(aiStack_2c,DAT_0058516c);
        uStack_4 = 0;
        FUN_004946d0(aiStack_2c,uStack_40,uStack_44,uStack_48,(uint)vm,0xffff);
        DAT_00583648 = DAT_00583648 + -0x20;
        uStack_4 = 0xffffffff;
        FUN_00495590(aiStack_2c);
        ExceptionList = pvStack_c;
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  ExceptionList = pvStack_c;
  return;
}


