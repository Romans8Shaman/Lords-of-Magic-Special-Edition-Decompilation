
void __cdecl op_getuniteffectivedata(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iStack_20;
  uint uStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,&uStack_c,&fStack_18);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar1 = FUN_0041bf10(this,&iStack_20,(int *)&vm);
    if (iVar1 == 0) {
      return;
    }
    if (uStack_1c == 0x2f) {
      FUN_00522000((void *)(iStack_20 + 0xc4 + (int)vm * 0x4c),(int *)&uStack_c,(int *)&fStack_18);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(float *)(iVar1 + 4 + iVar2 * 8) = fStack_18;
        return;
      }
    }
    else {
      iVar1 = FUN_00527e90((void *)(iStack_20 + 0xc4 + (int)vm * 0x4c),uStack_1c,&iStack_14);
      if (iVar1 == 0) {
        iVar1 = FUN_00527fa0((void *)(iStack_20 + 0xc4 + (int)vm * 0x4c),uStack_1c,&iStack_10);
        if (iVar1 == 0) {
          FUN_004d41c0(this,s_Invalid_data_id_00556604);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar2 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar2;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
            return;
          }
        }
        else if (*(int *)((int)this + 0x54) != 0) {
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
          *(int *)(iVar1 + 4 + iVar2 * 8) = iStack_10;
          return;
        }
      }
      else if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar2 * 8) = iStack_14;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


