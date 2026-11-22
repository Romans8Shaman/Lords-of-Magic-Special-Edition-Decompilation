
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0053b220(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _SYSTEMTIME local_cc;
  _SYSTEMTIME local_bc;
  _TIME_ZONE_INFORMATION local_ac;
  
  GetLocalTime(&local_bc);
  GetSystemTime(&local_cc);
  if (local_cc.wMinute == DAT_005d5212) {
    if (local_cc.wHour == DAT_005d5210) {
      if (local_cc.wDay == DAT_005d520e) {
        if (local_cc.wMonth == DAT_005d520a) {
          if (local_cc.wYear == DAT_005d5208) goto LAB_0053b2ef;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_ac);
  if (DVar1 == 0xffffffff) {
    DAT_005d5200 = -1;
  }
  else if (((DVar1 == 2) && (local_ac.DaylightDate.wMonth != 0)) && (local_ac.DaylightBias != 0)) {
    DAT_005d5200 = 1;
  }
  else {
    DAT_005d5200 = 0;
  }
  DAT_005d5208 = local_cc.wYear;
  DAT_005d520a = local_cc.wMonth;
  _DAT_005d520c = local_cc.wDayOfWeek;
  DAT_005d520e = local_cc.wDay;
  DAT_005d5210 = local_cc.wHour;
  DAT_005d5212 = local_cc.wMinute;
  _DAT_005d5214 = local_cc.wSecond;
  DAT_005d5214_2 = local_cc.wMilliseconds;
LAB_0053b2ef:
  iVar2 = FUN_00541c50((uint)local_bc.wYear,(uint)local_bc.wMonth,(uint)local_bc.wDay,
                       (uint)local_bc.wHour,(uint)local_bc.wMinute,(uint)local_bc.wSecond,
                       DAT_005d5200);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}


