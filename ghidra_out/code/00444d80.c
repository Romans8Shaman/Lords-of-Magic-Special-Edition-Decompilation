
void __cdecl op_enumbuildbuilding(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  int *piStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  FUN_0040adb0(vm,&uStack_8);
  iVar2 = FUN_0041da00((int)this);
  if (iVar2 == 0) {
    if (((char)uStack_8 == '\x06') && (uVar5 = uStack_8, (uStack_8 & 0x100) == 0))
    goto LAB_00444dbd;
    FUN_00404ab0(this,0x12);
  }
  uVar5 = 0;
LAB_00444dbd:
  if ((char)uVar5 == '\x06') {
    if ((uVar5 & 0x100) != 0) {
      FUN_004d41c0(this,s_invalid_data_005567d8);
      return;
    }
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
      piStack_c = piStack_4;
    }
    iVar2 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_14,&fStack_18);
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        piStack_c = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_10 = 0;
        piStack_c = piStack_4;
      }
      iVar2 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_18,&fStack_14);
      if (iVar2 != 0) {
        iVar2 = 1;
        do {
          piVar3 = FUN_0043d300(&DAT_005cd31c,uStack_1c,(int)vm,iVar2);
          if (piVar3 != (int *)0x0) {
            if (*(int *)((int)this + 0x54) == 0) {
              *(undefined4 *)((int)this + 0x90) = 3;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
            }
            else {
              iVar1 = *(int *)((int)this + 0x50);
              iVar4 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar4;
              *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
            }
            FUN_004d05e0(this,uVar5,piStack_4);
            iVar1 = *(int *)((int)this + 0x6c);
            *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
            if (iVar1 != 0) {
              return;
            }
          }
          iVar2 = iVar2 + 1;
          if (3 < iVar2) {
            return;
          }
        } while( true );
      }
    }
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  FUN_004d41c0(this,s_invalid_data_005567d8);
  return;
}


