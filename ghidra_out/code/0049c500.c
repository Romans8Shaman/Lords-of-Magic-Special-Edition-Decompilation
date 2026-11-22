
void __cdecl op_drawimpframe(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int *this_00;
  ushort auStack_38 [2];
  uint uStack_34;
  ushort auStack_30 [2];
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  this = vm;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054ae7b;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_00404ab0(vm,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&uStack_2c,(uint *)&fStack_20,&fStack_24);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&uStack_28,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,(uint *)auStack_38,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    pvStack_1c = *(void **)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    pvStack_1c = (void *)0x0;
    uStack_18 = uStack_10;
  }
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&uStack_34,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_0040adb0(this,&pvStack_1c);
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,(uint *)auStack_30,(uint *)&fStack_24,&fStack_20);
  if (iVar1 != 0) {
    FUN_0040adb0(this,&uStack_14);
    iVar1 = FUN_004026a0(&uStack_14,(uint *)&vm,(uint *)&fStack_24,&fStack_20);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00492850(&DAT_005a7b50,(int)vm);
      if (piVar2 == (int *)0x0) {
        FUN_004d41c0(this,s_drawimpframe___no_such_imp_0055c8a0);
        ExceptionList = pvStack_c;
        return;
      }
      pvStack_1c = (void *)Ordinal_401(0x70,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      uStack_4 = 0;
      if (pvStack_1c == (void *)0x0) {
        this_00 = (int *)0x0;
      }
      else {
        this_00 = FUN_004f2cc0(pvStack_1c,*piVar2,0);
      }
      uStack_4 = 0xffffffff;
      FUN_004f31f0(this_00,*piVar2,auStack_30[0],uStack_34,auStack_38[0]);
      (/*IC:0049c80d*/**(code **)(*this_00 + 0x18))(this_00,uStack_28,uStack_2c);
      FUN_004753d0(0x584ae8);
      ExceptionList = pvStack_c;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  ExceptionList = pvStack_c;
  return;
}


