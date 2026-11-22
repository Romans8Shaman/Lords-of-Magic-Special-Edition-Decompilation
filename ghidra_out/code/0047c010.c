
undefined4 __thiscall FUN_0047c010(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  uVar1 = FUN_004c4c60((void *)((int)this + 0x20),param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  return uVar1;
}


