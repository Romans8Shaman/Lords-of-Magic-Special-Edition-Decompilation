
void __fastcall FUN_004f5d20(void *param_1)

{
  undefined4 *this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0x10)) {
    do {
      this = *(undefined4 **)(*(int *)((int)param_1 + 8) + iVar1 * 4);
      if (((this != (undefined4 *)0x0) && (this[1] != 8)) && (this != (undefined4 *)0x0)) {
        (/*IC:004f5d4d*/**(code **)*this)(this,1);
      }
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)((int)param_1 + 8) + -4 + iVar1 * 4) = 0;
      *(undefined4 *)(*(int *)((int)param_1 + 0xc) + -4 + iVar1 * 4) = 0;
    } while (iVar1 < *(int *)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  FUN_004fbad0(param_1);
  DAT_005788c0 = 0;
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) && (DAT_005d3340 != 0)) {
    DAT_005d3344 = DAT_005d3340;
  }
  DAT_005d3340 = 0;
  return;
}


