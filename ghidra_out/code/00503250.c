
void __thiscall FUN_00503250(void *this,int unused_stack_8,int param_p3)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *this_00;
  uint uVar5;
  uint uVar6;
  int *this_01;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *this_02;
  int local_5e8 [375];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c0ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00411610(local_5e8);
  local_4 = 0;
  bVar2 = false;
  FUN_00473930(0x5a9e04);
  iVar3 = FUN_004a6e60((void *)((int)this + 0x29e70),unused_stack_8,param_p3);
  uVar4 = FUN_00482ac0(&DAT_005aa12c,iVar3,1);
  DAT_005aec24 = -1;
  if (uVar4 != 0) {
    DAT_005aec24 = iVar3;
  }
  pvVar1 = (void *)((int)this + 0x25644);
  uVar4 = FUN_00482ac0(pvVar1,iVar3,7);
  if (uVar4 != 0) {
    iVar3 = *(int *)(uVar4 + 0x44);
  }
  *(int *)((int)this + 0x252e0) = iVar3;
  this_00 = FUN_00485080(pvVar1,iVar3,0x2f);
  uVar5 = FUN_00482ac0(pvVar1,iVar3,2);
  uVar6 = FUN_00482ac0(pvVar1,iVar3,3);
  uVar4 = FUN_00482ac0(pvVar1,iVar3,1);
  this_01 = FUN_0052d240(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  this_02 = (int *)0x0;
  if (this_01 != (int *)0x0) {
    uVar7 = FUN_0052d190(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
    if (uVar7 == 0) {
      uVar7 = 0xffffffff;
    }
    FUN_00415170(this_01,local_5e8,uVar7);
    this_02 = local_5e8;
    bVar2 = true;
  }
  if (this_00 == (int *)0x0) {
    if (uVar6 != 0) {
      if (this_02 == (int *)0x0) {
        FUN_0052d290((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),iVar3);
        goto LAB_00503741;
      }
      if ((*(int *)(uVar6 + 0x1c) == this_02[7]) && ((*(byte *)(this_02 + 0xc) & 8) != 0)) {
        FUN_00487dc0(this_02[10],iVar3);
        goto LAB_00503741;
      }
      if ((*(int *)(uVar6 + 0x1c) != this_02[0x152]) || ((*(byte *)(this_02 + 0xc) & 8) == 0))
      goto LAB_0050372c;
LAB_00503694:
      FUN_00530440((int)this_02);
      goto LAB_00503741;
    }
    if (uVar5 == 0) {
      if (uVar4 != 0) {
        if (this_02 == (int *)0x0) {
          FUN_0052d390((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),iVar3);
          goto LAB_00503741;
        }
        goto LAB_00503662;
      }
      iVar3 = FUN_004a6180((void *)((int)this + 0x29e70),unused_stack_8,param_p3);
      if (this_02 == (int *)0x0) goto LAB_00503741;
      if ((iVar3 == this_02[0x152]) && ((*(byte *)(this_02 + 0xc) & 8) != 0)) goto LAB_0050370c;
    }
    else {
      uVar4 = uVar5;
      if (this_02 == (int *)0x0) {
        FUN_0052d320((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),iVar3);
        goto LAB_00503741;
      }
LAB_00503662:
      if ((*(int *)(uVar4 + 0x1c) == this_02[7]) && ((*(byte *)(this_02 + 0xc) & 8) != 0)) {
        FUN_00487dc0(this_02[10],iVar3);
        goto LAB_00503741;
      }
      if ((*(int *)(uVar4 + 0x1c) == this_02[0x152]) && ((*(byte *)(this_02 + 0xc) & 8) != 0))
      goto LAB_00503694;
    }
LAB_0050372c:
    iVar3 = *(int *)((int)this + 0x232a4);
  }
  else {
    iVar8 = FUN_00420620((int)this_00);
    if ((iVar8 != 0) && (iVar8 = FUN_00458170(), iVar8 != 0)) {
      *(undefined4 *)((int)this + 0x252e0) = 0xffffffff;
      goto LAB_00503741;
    }
    if ((this_00 == this_02) || (this_00 == this_01)) {
      if ((((uVar5 == 0) || ((*(byte *)(uVar5 + 0x30) & 2) == 0)) &&
          ((uVar6 == 0 || ((*(byte *)(uVar6 + 0x30) & 2) == 0)))) &&
         ((uVar4 == 0 || ((*(byte *)(uVar4 + 0x30) & 2) == 0)))) {
        uVar4 = FUN_00407d80((int)this_00);
        if ((uVar4 == 0) && (iVar3 = FUN_004c1cf0((int)this_00), iVar3 == 0)) {
          FUN_0041ed80(this_00,0x17);
        }
        FUN_004d05e0(*(void **)((int)this + 0x23090),*(uint *)((int)this + 0x25714),
                     *(int **)((int)this + 0x25718));
      }
      else {
        FUN_00503040(&DAT_00584ae8,1);
        FUN_00530390(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
        FUN_00503040(&DAT_00584ae8,0);
      }
      goto LAB_00503741;
    }
    if (this_02 == (int *)0x0) {
      iVar3 = FUN_0052b640((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),
                           iVar3);
      if (iVar3 != 0) {
        uVar4 = FUN_00407d80((int)this_00);
        if ((uVar4 == 0) && (iVar3 = FUN_004c1cf0((int)this_00), iVar3 == 0)) {
          FUN_0041ed80(this_00,0x17);
        }
        FUN_004d05e0(*(void **)((int)this + 0x23090),*(uint *)((int)this + 0x25714),
                     *(int **)((int)this + 0x25718));
        FUN_004ba870(&DAT_005a9ddc);
      }
      goto LAB_00503741;
    }
    iVar3 = FUN_00415610(this_02,(int)this_00);
    if ((iVar3 == 0) && (this_00[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
      uVar9 = FUN_00415770(this_02,(int)this_00);
      pvVar1 = *(void **)((int)this + 0x23090);
      if (*(int *)((int)pvVar1 + 0x54) == 0) {
        *(undefined4 *)((int)pvVar1 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar8 = *(int *)((int)pvVar1 + 0x54) + -1;
        *(int *)((int)pvVar1 + 0x54) = iVar8;
        iVar3 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar3 + iVar8 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar8 * 8) = uVar9;
      }
      FUN_004d05e0(*(void **)((int)this + 0x23090),*(uint *)((int)this + 0x25670),
                   *(int **)((int)this + 0x25674));
    }
    iVar3 = (/*IC:00503445*/**(code **)(*this_02 + 0x3c))(this_02);
    iVar8 = (/*IC:0050344e*/**(code **)(*this_00 + 0x3c))(this_00);
    if ((iVar3 == iVar8) && (this_02[7] == this_00[7])) {
      iVar3 = FUN_00415610(this_02,(int)this_00);
      if (iVar3 != 0) {
        FUN_00487e80(this_02[10],this_00[10]);
      }
      goto LAB_00503741;
    }
    if ((this_00[7] == this_02[0x152]) && ((*(byte *)(this_02 + 0xc) & 8) != 0)) {
LAB_0050370c:
      FUN_00530440((int)this_02);
      goto LAB_00503741;
    }
    iVar3 = *(int *)((int)this + 0x232a4);
  }
  FUN_0052c0c0((void *)(iVar3 * 0x400 + 0x232a8 + (int)this),unused_stack_8,param_p3,1,0,0);
LAB_00503741:
  if (bVar2) {
    FUN_004117f0(local_5e8,0);
  }
  local_4 = 0xffffffff;
  FUN_00411910(local_5e8);
  ExceptionList = pvStack_c;
  return;
}


