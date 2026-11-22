
void __cdecl op_createartifactnow(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar2 != 0) {
      iVar2 = FUN_0041be40(this,&vm);
      if (iVar2 == 0) {
        return;
      }
      if (((int)uStack_18 < 0) || (*(int *)((int)vm + 0x4c) <= (int)uStack_18)) {
        FUN_004d41c0(this,s_no_such_unit_00555df8);
        return;
      }
      iVar2 = FUN_00427d10(&DAT_005cd340,uStack_14);
      if ((iVar2 != 0) && (iVar2 = FUN_0042d410(iVar2), iVar2 != 0)) {
        return;
      }
      piVar3 = FUN_00428080((void *)((int)vm + uStack_18 * 0x4c + 0xc4),uStack_14);
      if (piVar3 == (int *)0x0) {
        FUN_004d41c0(this,s_failed_to_create_artifact_00555e08);
        return;
      }
      piVar3[4] = piVar3[4] | 1 << ((char)*(undefined4 *)((int)vm + 0x48) + 8U & 0x1f);
      iVar2 = FUN_00427b80(*piVar3);
      if ((*(byte *)(iVar2 + 0x18) & 0x10) != 0) {
        FUN_004282a0((void *)((int)vm + uStack_18 * 0x4c + 0xc4),*(undefined4 *)((int)vm + 0x28),
                     uStack_18,piVar3[3],1);
      }
      iVar2 = piVar3[3];
      if (*(int *)((int)this + 0x54) != 0) {
        iVar1 = *(int *)((int)this + 0x50);
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
      goto LAB_0042aae7;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
LAB_0042aae7:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


