
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0041ebb0(void *this,uint param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  CHAR local_64 [100];
  
  iVar4 = *(int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4);
  if (((iVar4 < 0) || (DAT_005cd2f0 <= iVar4)) || (DAT_005cd2f4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_005cd2f4 + iVar4 * 1000;
  }
  if (iVar4 != 0) {
    if (((int)param_1 < 0) || (0x19 < (int)param_1)) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x290 + param_1 * 4);
    }
    if (((-1 < iVar4) && ((param_1 == 0 || (param_1 == 1)))) &&
       ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) {
      iVar1 = FUN_00484e10(0x5aa12c);
      if (iVar1 == 0) {
        iVar1 = FUN_00420490((int)this);
        if (iVar1 != 0) {
          iVar1 = FUN_004321b0(0x584cd4);
          if (iVar1 == 0) {
            _DAT_005867a8 = DAT_00586774;
            _DAT_005867a0 = *(undefined4 *)((int)this + 0x28);
            _DAT_005867b4 = 1;
            DAT_005867a4 = iVar4;
            _DAT_005867b0 = iVar1;
            FUN_00478c00(&DAT_00585408,iVar4);
          }
        }
      }
    }
  }
  if (param_1 == 2) {
    FUN_0041efa0(this,2);
  }
  if (param_1 == 8) {
    uVar3 = *(undefined4 *)((int)this + 0x28);
    DVar2 = GetTickCount();
    FUN_0053a090(local_64,s__d__army__d_die_anim_set_00555c08,DVar2,uVar3);
    OutputDebugStringA(local_64);
  }
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  uVar3 = FUN_0049da80(*(void **)((int)this + 0x2c),param_1);
  return uVar3;
}


