
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_playunitsoundfx(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  uint uStack_c;
  uint uStack_8;
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
  fVar3 = fStack_4;
  if (uVar1 == 1) {
LAB_00479296:
    _DAT_005867b4 = fVar3;
  }
  else {
    if (uVar1 == 2) {
      fVar3 = (float)((int)fStack_4 >> 8);
      goto LAB_00479296;
    }
    if (uVar1 != 4) goto LAB_004793c1;
    lVar4 = __ftol((float10)fStack_4);
    _DAT_005867b4 = (float)lVar4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&DAT_005867a0,&uStack_c,(float *)&vm);
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
  if (uVar1 == 1) {
    DAT_005867a4 = fStack_4;
  }
  else if (uVar1 == 2) {
    DAT_005867a4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_004793c1:
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar4 = __ftol((float10)fStack_4);
    DAT_005867a4 = (float)lVar4;
  }
  _DAT_005867a8 = DAT_00586774;
  FUN_00478c00(&DAT_00585408,DAT_005867a4);
  return;
}


