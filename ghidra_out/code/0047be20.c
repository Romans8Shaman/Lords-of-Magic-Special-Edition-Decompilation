
void __thiscall FUN_0047be20(void *this,undefined4 param_1,undefined4 param_2)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x6c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  *(undefined4 *)((int)this + 0x84) = 1;
  FUN_004c4b10((void *)((int)this + 8),0x32,0xf8);
  FUN_004c4b10((void *)((int)this + 0x20),0x32,0xf8);
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}


