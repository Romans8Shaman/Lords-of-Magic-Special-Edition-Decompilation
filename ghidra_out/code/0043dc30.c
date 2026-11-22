
undefined4 __thiscall FUN_0043dc30(void *this,undefined2 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float local_4;
  
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      *param_1 = (short)((uint)local_4 >> 8);
      return 1;
    }
    if (uVar2 != 4) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return 0;
    }
    lVar3 = __ftol((float10)local_4);
    local_4 = (float)lVar3;
  }
  *param_1 = SUB42(local_4,0);
  return 1;
}


