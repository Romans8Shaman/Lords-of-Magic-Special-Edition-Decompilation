
undefined4 __cdecl FUN_00542fc0(uint param_1)

{
  undefined4 extraout_EAX;
  
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_005d6a20)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return extraout_EAX;
}


