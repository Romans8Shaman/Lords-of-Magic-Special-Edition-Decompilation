
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004f32d0(void *param_1)

{
  int iVar1;
  int iVar2;
  float local_8;
  
  local_8 = *(float *)((int)param_1 + 0x4c) * *(float *)((int)param_1 + 0x50) * _DAT_0054de24;
  if (DAT_00573250 != 0) {
    local_8 = ((float)DAT_00584a90 / (float)(int)(longlong)(_DAT_0054de28 / _DAT_0057324c)) *
              local_8;
  }
  if ((NAN(local_8) || NAN(_DAT_0054de1c)) || local_8 < _DAT_0054de1c) {
    iVar1 = FUN_004f32a0(param_1,local_8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_004f3420((int)param_1);
    }
  }
  else {
    iVar1 = FUN_004f3260(param_1,local_8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_004f3380((int)param_1);
      return iVar2;
    }
  }
  return iVar2;
}


