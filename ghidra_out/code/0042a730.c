
void __cdecl op_createartifact(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      iVar1 = FUN_0041be40(this,&vm);
      if (iVar1 != 0) {
        if (((int)uStack_18 < 0) || (*(int *)((int)vm + 0x4c) <= (int)uStack_18)) {
          FUN_004d41c0(this,s_no_such_unit_00555df8);
        }
        else {
          iVar1 = FUN_00427d10(&DAT_005cd340,uStack_14);
          if ((iVar1 != 0) && (iVar1 = FUN_0042d410(iVar1), iVar1 != 0)) {
            return;
          }
          piVar2 = FUN_00428080((void *)((int)vm + uStack_18 * 0x4c + 0xc4),uStack_14);
          if (piVar2 == (int *)0x0) {
            FUN_004d41c0(this,s_failed_to_create_artifact_00555e08);
            return;
          }
          piVar2[4] = piVar2[4] | 1 << ((char)*(undefined4 *)((int)vm + 0x48) + 8U & 0x1f);
          iVar1 = FUN_00427b80(*piVar2);
          if ((*(byte *)(iVar1 + 0x18) & 0x10) != 0) {
            FUN_004282a0((void *)((int)vm + uStack_18 * 0x4c + 0xc4),*(undefined4 *)((int)vm + 0x28)
                         ,uStack_18,piVar2[3],1);
            return;
          }
        }
      }
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


