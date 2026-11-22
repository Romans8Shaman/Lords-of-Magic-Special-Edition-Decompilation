
void __cdecl op_cost2castspell(void *vm)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int aiStack_48 [2];
  float fStack_40;
  float afStack_3c [10];
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_40 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    afStack_3c[0] = fStack_40;
  }
  else if (uVar3 == 2) {
    afStack_3c[0] = (float)((int)fStack_40 >> 8);
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_40);
    afStack_3c[0] = (float)lVar5;
  }
  iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_48);
  if (iVar1 != 0) {
    afStack_3c[1] = -NAN;
    afStack_3c[2] = -NAN;
    afStack_3c[3] = -NAN;
    afStack_3c[4] = -NAN;
    afStack_3c[5] = -NAN;
    afStack_3c[6] = -NAN;
    afStack_3c[7] = -NAN;
    afStack_3c[8] = -NAN;
    uStack_10 = 0xffffffff;
    uStack_c = 0xffffffff;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    afStack_3c[9] = *(float *)((int)vm + 0x28);
    iStack_14 = aiStack_48[0];
    uVar2 = FUN_0041cf40(vm,(int *)afStack_3c);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}


