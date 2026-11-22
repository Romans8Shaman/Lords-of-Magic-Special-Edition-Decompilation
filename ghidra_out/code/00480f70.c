
undefined4 __thiscall FUN_00480f70(void *this,int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  FUN_00478a20(&DAT_00585408);
  if (param_1 != *(int *)((int)this + 0x228a8)) {
    OutputDebugStringA(s_EndTurn_by_wrong_player_0055b214);
    return 0;
  }
  switch((&DAT_005a8078)[DAT_005a7d8c * 0x100]) {
  case 2:
  case 5:
  case 6:
    break;
  case 3:
  case 4:
    uVar1 = FUN_00481510((int)this);
    return uVar1;
  default:
    return 0;
  }
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar2 != (undefined *)0x0) {
    FUN_00508090((int)puVar2);
  }
  uVar1 = FUN_00481290((int)this);
  return uVar1;
}


