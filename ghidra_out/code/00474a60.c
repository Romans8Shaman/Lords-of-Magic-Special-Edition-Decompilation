
undefined4 * __thiscall FUN_00474a60(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HCURSOR pHVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0xe8);
  pHVar3 = GetCursor();
  uVar2 = *(undefined4 *)((int)this + 0x178);
  *param_1 = uVar1;
  param_1[1] = pHVar3;
  param_1[2] = uVar2;
  return param_1;
}


