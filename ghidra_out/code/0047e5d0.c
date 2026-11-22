
void __cdecl op_createghost(void *vm)

{
  uint uVar1;
  void *this;
  int iVar2;
  int *this_00;
  int *piVar3;
  int *piVar4;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  int aiStack_14 [5];
  
  this = vm;
  aiStack_14[0] = -1;
  aiStack_14[1] = 0xffffffff;
  aiStack_14[2] = 0xffffffff;
  aiStack_14[4] = 0xffffffff;
  aiStack_14[3] = 100;
  FUN_0040adb0(vm,&uStack_1c);
  iVar2 = FUN_004026a0(&uStack_1c,&uStack_28,(uint *)&fStack_20,&fStack_24);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,(uint *)(aiStack_14 + 4),(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
LAB_0047e82c:
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,(uint *)(aiStack_14 + 3),(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,(uint *)(aiStack_14 + 2),(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,&uStack_38,(uint *)&fStack_24,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar2 = FUN_0041bf10(this,&iStack_30,&iStack_34);
  if (iVar2 != 0) {
    FUN_0040adb0(this,&uStack_1c);
    iVar2 = FUN_004026a0(&uStack_1c,&uStack_2c,(uint *)&fStack_24,&fStack_20);
    if (iVar2 == 0) goto LAB_0047e82c;
    iVar2 = FUN_0041bf10(this,(int *)&vm,&iStack_3c);
    if (iVar2 != 0) {
      aiStack_14[0] = *(int *)((int)vm + 0x28);
      aiStack_14[1] = iStack_3c;
      this_00 = FUN_0047cc00(*(int *)(iStack_30 + 0x28),iStack_34,uStack_38,0,0,0,0);
      if (this_00 == (int *)0x0) {
        FUN_004d41c0(this,s_Couldn_t_create_follower_0055b130);
        return;
      }
      FUN_004a7d50(&DAT_005ae958,this_00,uStack_2c);
      uVar1 = this_00[0xc];
      piVar3 = aiStack_14;
      piVar4 = this_00 + 0x14;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      this_00[0xc] = uVar1 | uStack_28 & 0xc0 | 0x20;
      this_00[0x1d] = *(int *)((int)vm + 0x44);
      (/*IC:0047e8f6*/**(code **)(*this_00 + 0x2c))(this_00);
    }
  }
  return;
}


