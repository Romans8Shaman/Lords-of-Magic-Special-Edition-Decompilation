
void __cdecl FUN_0053ccc0(uint param_1)

{
  if ((param_1 < 0x5771a0) || (0x577400 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  FUN_0053cc30(((int)(param_1 - 0x5771a0) >> 5) + 0x1c);
  return;
}


