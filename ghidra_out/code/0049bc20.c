
void __cdecl op_playimp(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  DWORD DStack_28;
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
  puStack_8 = &LAB_0054ae5b;
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
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&DStack_28,(uint *)&fStack_20,&fStack_24);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
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
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,(uint *)&vm,(uint *)&fStack_24,&fStack_20);
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
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&uStack_30,(uint *)&fStack_24,&fStack_20);
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
  iVar1 = FUN_004026a0((uint *)&pvStack_1c,&uStack_2c,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_14 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_10 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_14 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_14,&uStack_34,(uint *)&fStack_24,&fStack_20);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  piVar2 = (int *)FUN_00492850(&DAT_005a7b50,uStack_34);
  if (piVar2 == (int *)0x0) {
    FUN_004d41c0(this,s_playimp___no_such_imp_0055c828);
    ExceptionList = pvStack_c;
    return;
  }
  pvStack_1c = (void *)Ordinal_401(0x70,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (pvStack_1c == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_004f2cc0(pvStack_1c,*piVar2,0);
  }
  uStack_4 = 0xffffffff;
  if (piVar2 == (int *)0x0) {
    FUN_004d41c0(this,s_playimp___failed_to_create_Anima_0055c804);
    ExceptionList = pvStack_c;
    return;
  }
  (/*IC:0049bf31*/**(code **)(piVar2[1] + 4))(piVar2 + 1,0);
  iVar1 = 0;
  if (0 < (int)vm) {
    do {
      FUN_004f34c0(piVar2);
      (/*IC:0049bf59*/**(code **)(*piVar2 + 0x18))(piVar2,uStack_2c,uStack_30);
      FUN_004753d0(0x584ae8);
      Sleep(DStack_28);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)vm);
  }
  (/*IC:0049bf7c*/**(code **)*piVar2)(piVar2,1);
  ExceptionList = pvStack_c;
  return;
}


