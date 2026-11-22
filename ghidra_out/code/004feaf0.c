
void __fastcall FUN_004feaf0(int param_1)

{
  if (*(LPVOID *)(param_1 + 0x128) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 0x128),0,0x8000);
  }
  return;
}


