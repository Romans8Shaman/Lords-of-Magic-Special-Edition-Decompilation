
undefined4 __thiscall FUN_0047bfb0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  uVar1 = FUN_004c4c60((void *)((int)this + 8),param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  return uVar1;
}


