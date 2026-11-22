
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_setbuildingrequirementdata(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fVar3 = (float)((int)fStack_4 << 8);
  }
  else {
    fVar3 = fStack_4;
    if (uVar1 != 2) {
      if (uVar1 != 4) goto LAB_00444783;
      lVar4 = __ftol((float10)fStack_4 * (float10)_DAT_0054d528);
      fVar3 = (float)lVar4;
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) {
LAB_00444783:
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar4;
    }
  }
  iVar2 = FUN_004442d0(this,&vm);
  if (iVar2 != 0) {
    switch(fStack_4) {
    case 0.0:
      *(float *)((int)vm + 0x10) = fVar3;
      return;
    default:
      FUN_004d41c0(this,s_invalid_data_id_00555b78);
      break;
    case 2.8026e-45:
      *(float *)((int)vm + 0x14) = fVar3;
      return;
    case 4.2039e-45:
      *(float *)((int)vm + 0x18) = fVar3;
      return;
    case 5.60519e-45:
      *(float *)((int)vm + 0xc) = fVar3;
      return;
    }
  }
  return;
}


