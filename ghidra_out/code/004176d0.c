
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004176d0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *this_00;
  
  _DAT_005867a0 = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x54c) = 0xffffffff;
  if (-1 < *(int *)((int)this + 0x550)) {
    iVar1 = *(int *)((int)this + 0x48);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if (this_00 != (undefined *)0x0) {
      FUN_004bb140(this_00,(int)this);
    }
  }
  *(undefined4 *)((int)this + 0x550) = 0xffffffff;
  if (-1 < *(int *)((int)this + 0x538)) {
    FUN_00427950(&DAT_005aeefc,(int *)((int)this + 0x538));
  }
  *(undefined4 *)((int)this + 0x548) = *(undefined4 *)((int)this + 0x1c);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xffffefaf;
  uVar2 = FUN_00419440((int)this);
  if ((uVar2 == 0) && ((*(int *)((int)this + 0x544) == 0 || (*(int *)((int)this + 0x544) == 1)))) {
    *(undefined4 *)((int)this + 0x24) = 2;
    (/*IC:00417799*/**(code **)(*(int *)this + 0x30))(this,2,0xffffffff);
    FUN_0041efa0(this,2);
    return;
  }
  if (param_1 != 0) {
    uVar2 = FUN_00419440((int)this);
    if ((uVar2 == 0) &&
       ((((iVar1 = *(int *)((int)this + 0x544), iVar1 == 3 || (iVar1 == 4)) || (iVar1 == 0xe)) ||
        ((iVar1 == 5 || (iVar1 == 0xd)))))) {
      *(undefined4 *)((int)this + 0x24) = 2;
      (/*IC:004177ea*/**(code **)(*(int *)this + 0x30))(this,2,0xffffffff);
      FUN_0041efa0(this,2);
    }
  }
  return;
}


