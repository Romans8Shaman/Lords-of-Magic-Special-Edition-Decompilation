
void __thiscall FUN_00505d00(void *this,LPCSTR unused_stack_8,uint param_p3)

{
  undefined4 in_stack_0000000c;
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  if (local_20.dwAvailPhys + local_20.dwAvailPageFile < 100000000) {
    FUN_0053a090(&DAT_005d22f0,s__s__d__s_005736e0,param_p3,
                 (local_20.dwAvailPhys + local_20.dwAvailPageFile) / 1000000,in_stack_0000000c);
    MessageBoxA(*(HWND *)((int)this + 0x26c),&DAT_005d22f0,unused_stack_8,0);
  }
  return;
}


