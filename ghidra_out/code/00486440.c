
void __cdecl op_addunitnow(void *vm)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  void *pvStack_18;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,&uStack_8);
    iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&uStack_8);
      iVar1 = FUN_004026a0(&uStack_8,(uint *)&pvStack_18,(uint *)&fStack_10,&fStack_c);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        FUN_0040adb0(this,&uStack_8);
        iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
        if (iVar1 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          if ((((int)uStack_20 < 0) || (DAT_005cd2f0 <= (int)uStack_20)) || (DAT_005cd2f4 == 0)) {
            iVar1 = 0;
          }
          else {
            iVar1 = DAT_005cd2f4 + uStack_20 * 1000;
          }
          if (iVar1 == 0) {
            FUN_004d41c0(this,s_bad_unit_type_0055b4a8);
            return;
          }
          FUN_00480130(&DAT_005aa12c,uStack_14,pvStack_18,uStack_1c,uStack_20,
                       *(undefined4 *)(iVar1 + 0xec),-1,*(undefined4 *)(iVar1 + 0xe8),&iStack_28,
                       &iStack_24,0,-1);
          if (0 < (int)vm) {
            puVar2 = FUN_00485080(&DAT_005aa12c,iStack_28,0x2f);
            if (puVar2 != (undefined4 *)0x0) {
              puVar2[iStack_24 * 0x13 + 0x35] = (int)vm << 8;
            }
          }
          if (*(int *)((int)this + 0x54) == 0) {
            *(undefined4 *)((int)this + 0x90) = 3;
            FUN_004d4550(this);
            *(undefined4 *)((int)this + 0x90) = 0;
            *(undefined4 *)((int)this + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)this + 0x50);
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar3 * 8) = iStack_28;
          }
          if (*(int *)((int)this + 0x54) != 0) {
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
            *(int *)(iVar1 + 4 + iVar3 * 8) = iStack_24;
            return;
          }
          *(undefined4 *)((int)this + 0x90) = 3;
        }
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


