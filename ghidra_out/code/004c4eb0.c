
bool __thiscall FUN_004c4eb0(void *this,undefined4 param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  if (*(int *)((int)this + 0xc) != 0) {
    Ordinal_403(*(int *)((int)this + 0xc),s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  iVar1 = Ordinal_401(param_1,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 8) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  return iVar1 != 0;
}


