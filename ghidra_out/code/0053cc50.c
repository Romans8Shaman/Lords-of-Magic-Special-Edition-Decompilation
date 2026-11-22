
void __cdecl FUN_0053cc50(uint param_1)

{
  if ((param_1 < 0x5771a0) || (0x577400 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  FUN_0053cbb0(((int)(param_1 - 0x5771a0) >> 5) + 0x1c);
  return;
}


