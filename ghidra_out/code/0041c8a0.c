
void __cdecl op_setunitdata(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  int aiStack_14 [2];
  float fStack_c;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    uVar4 = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  if ((char)uVar4 != '\0') {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      fStack_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar3 = 0;
      fStack_c = fStack_4;
    }
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 1) {
      fVar5 = fStack_c;
    }
    else if (uVar3 == 2) {
      fVar5 = (float)((int)fStack_c >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar6 = __ftol((float10)fStack_c);
      fVar5 = (float)lVar6;
    }
    iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_14);
    if (iVar1 != 0) {
      if ((((vm != &DAT_005aa78c) && (vm != &DAT_005aad68)) && (vm != &DAT_005ab344)) &&
         (vm != &DAT_005ab920)) {
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = uVar4;
          *(float *)(iVar1 + 4 + iVar2 * 8) = fStack_4;
        }
        FUN_0041de50(vm,aiStack_14[0],(int)fVar5,this);
        return;
      }
      FUN_004d41c0(this,s_cannot_modify_this_army___005559c8);
    }
  }
  return;
}


