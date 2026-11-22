
undefined4 __thiscall FUN_004117f0(void *this,uint param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  local_8 = 0xf;
  puVar2 = (undefined4 *)((int)this + 0xe0);
  do {
    if ((param_1 & 1) != 0) {
      this_00 = (undefined4 *)FUN_005291e0((int)(puVar2 + -7));
      if (this_00 != (undefined4 *)0x0) {
        puVar3 = this_00 + 0xb;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        (/*IC:00411838*/**(code **)*this_00)(this_00,1);
      }
    }
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[-2] = 0;
    puVar2 = puVar2 + 0x13;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((param_1 & 2) == 0) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x58c) = 0;
    *(undefined4 *)((int)this + 0x598) = 0;
    *(undefined4 *)((int)this + 0x564) = 0;
    *(undefined4 *)((int)this + 0x560) = 0;
    *(undefined4 *)((int)this + 0x55c) = 0;
    *(undefined4 *)((int)this + 0x578) = 0;
    *(undefined4 *)((int)this + 0x57c) = 0;
    *(undefined4 *)((int)this + 0x580) = 0;
    *(undefined4 *)((int)this + 0x584) = 0;
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      (/*IC:00411866*/**(code **)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
    puVar2 = *(undefined4 **)((int)this + 0x58c);
    if (puVar2 != (undefined4 *)0x0) {
      (/*IC:00411879*/**(code **)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x58c) = 0;
    }
    puVar2 = *(undefined4 **)((int)this + 0x598);
    if (puVar2 != (undefined4 *)0x0) {
      (/*IC:0041188f*/**(code **)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x598) = 0;
    }
    FUN_004b0260((int *)((int)this + 0x55c));
    FUN_0042d4f0((int)this + 0x568);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x538) = 0xffffffff;
  *(undefined4 *)((int)this + 0x550) = 0xffffffff;
  return 0xffffffff;
}


