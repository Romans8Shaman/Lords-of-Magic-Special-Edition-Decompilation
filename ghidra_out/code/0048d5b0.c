
undefined4 __thiscall FUN_0048d5b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0048d6d0((int)this);
  iVar1 = Ordinal_401(param_1 * 0x2c,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0x4c) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(int *)((int)this + 0x54) = param_1;
  if (0 < param_1) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)((int)this + 0x4c) + 0xc + iVar2) = 0xffffffff;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < *(int *)((int)this + 0x54));
  }
  return 1;
}


