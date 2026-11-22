
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004842b0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_0046f360();
  *(undefined4 *)((int)this + 0x4fec) = 0;
  *(undefined4 *)((int)this + 0x4ff0) = 0;
  *(undefined4 *)((int)this + 0x4ff4) = 0;
  *(undefined4 *)((int)this + 0x5000) = 0;
  _DAT_005834f8 = 0;
  FUN_004f5f40((int)this + 0x4848);
  FUN_0052b260((int *)&DAT_005cd18c);
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 1) {
    FUN_005000f0(&DAT_00584ae8,1);
  }
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (bVar3) {
    DAT_00573428 = *param_1;
    FUN_004843d0((int)this);
  }
  return 1;
}


