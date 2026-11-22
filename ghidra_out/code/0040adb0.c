
undefined4 * __thiscall FUN_0040adb0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x50);
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    *param_1 = *(undefined4 *)(iVar2 + -8 + iVar1 * 8);
    param_1[1] = *(undefined4 *)(iVar2 + -4 + iVar1 * 8);
    return param_1;
  }
  *(undefined4 *)((int)this + 0x90) = 6;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *param_1 = 0;
  param_1[1] = local_4;
  return param_1;
}


