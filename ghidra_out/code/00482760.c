
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00482760(void *this,int param_1)

{
  uint uVar1;
  DWORD DVar2;
  
  if (DAT_00583560 != param_1) {
    do {
      _DAT_00583590 = 1;
      uVar1 = *(int *)((int)this + 0x5008) + 1;
      *(uint *)((int)this + 0x5008) = uVar1;
      FUN_0040b620((void *)((int)this + 0x4d4c),DAT_005a7b78,uVar1,0);
      _DAT_00583578 = FUN_0048c150();
      if (_DAT_00583578 == 0) {
        param_1 = DAT_00583560;
      }
      else {
        DVar2 = GetTickCount();
        *(undefined4 *)((int)this + 0x4dcc) = *(undefined4 *)((int)this + 0x4dc8);
        *(undefined4 *)((int)this + 0x4dc8) = 0;
        FUN_004f66a0((void *)((int)this + 0x4848),DVar2);
      }
      _DAT_00583590 = 0;
    } while (DAT_00583560 != param_1);
  }
  return;
}


