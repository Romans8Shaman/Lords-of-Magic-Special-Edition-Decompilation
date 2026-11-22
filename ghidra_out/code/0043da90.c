
undefined8 __thiscall FUN_0043da90(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  uint extraout_EDX_00;
  longlong lVar4;
  float local_4;
  
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar3 = *(int *)((int)this + 0x50);
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uVar2 = *(uint *)(iVar3 + -8 + iVar1 * 8);
    local_4 = *(float *)(iVar3 + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
    iVar3 = extraout_EDX;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    *param_1 = (int)local_4;
    return CONCAT44(iVar3,1);
  }
  if (uVar2 == 2) {
    *param_1 = (int)local_4 >> 8;
    return CONCAT44(param_1,1);
  }
  if (uVar2 == 4) {
    lVar4 = __ftol((float10)local_4);
    *param_1 = (int)lVar4;
    return CONCAT44((int)((ulonglong)lVar4 >> 0x20),1);
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return (ulonglong)extraout_EDX_00 << 0x20;
}


