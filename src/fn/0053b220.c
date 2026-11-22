/* Rebuilt from lomse.exe FUN_0053b220 @ 0x0053b220 (300 bytes, __cdecl).
 * HAND fix (2026-11-13): WORD stores for wDayOfWeek/wSecond/wMilliseconds. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5200 (*(int *)0x005d5200)
#define DAT_005d5208 (*(WORD *)0x005d5208)
#define DAT_005d520a (*(WORD *)0x005d520a)
#define DAT_005d520e (*(WORD *)0x005d520e)
#define DAT_005d5210 (*(WORD *)0x005d5210)
#define DAT_005d5212 (*(WORD *)0x005d5212)
#define FUN_00541c50 ((int (__cdecl *)(int, int, int, int, int, int, int))0x00541c50)
#define GetLocalTime (*(__typeof__(void (__stdcall *)(LPSYSTEMTIME)) *)0x0054d1ac) /* KERNEL32.DLL!GetLocalTime via IAT */
#define GetSystemTime (*(__typeof__(void (__stdcall *)(LPSYSTEMTIME)) *)0x0054d180) /* KERNEL32.DLL!GetSystemTime via IAT */
#define GetTimeZoneInformation (*(__typeof__(DWORD (__stdcall *)(LPTIME_ZONE_INFORMATION)) *)0x0054d184) /* KERNEL32.DLL!GetTimeZoneInformation via IAT */
#define DAT_005d520c (*(WORD *)0x005d520c)
#define DAT_005d5214 (*(WORD *)0x005d5214)
#define DAT_005d5216 (*(WORD *)0x005d5216)

#define LOM_SELF_0053b220 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_0053b220(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  uchar _fr[0xd8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef _SYSTEMTIME _t_local_cc;
  typedef _SYSTEMTIME _t_local_bc;
  typedef _TIME_ZONE_INFORMATION _t_local_ac;
#define local_cc (*(_t_local_cc *)(_fr + 0x4))
#define local_bc (*(_t_local_bc *)(_fr + 0x14))
#define local_ac (*(_t_local_ac *)(_fr + 0x24))
  
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
  DAT_005d520c = local_cc.wDayOfWeek;
  DAT_005d520e = local_cc.wDay;
  DAT_005d5210 = local_cc.wHour;
  DAT_005d5212 = local_cc.wMinute;
  DAT_005d5214 = local_cc.wSecond;
  DAT_005d5216 = local_cc.wMilliseconds;
LAB_0053b2ef:
  iVar2 = FUN_00541c50((uint)local_bc.wYear,(uint)local_bc.wMonth,(uint)local_bc.wDay,
                       (uint)local_bc.wHour,(uint)local_bc.wMinute,(uint)local_bc.wSecond,
                       DAT_005d5200);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
#undef local_cc
#undef local_bc
#undef local_ac
}
