
undefined4 __thiscall FUN_00530200(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0052d240(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = FUN_0052c8a0((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  *param_2 = iVar2;
  return (uint)(-1 < iVar2);
}


