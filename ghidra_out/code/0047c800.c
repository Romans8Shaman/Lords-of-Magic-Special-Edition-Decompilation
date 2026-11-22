
void FUN_0047c800(int param_1)

{
  void *this;
  DWORD DVar1;
  int iVar2;
  
  do {
    do {
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x228b4),0xffffffff);
    } while (DVar1 == 0x102);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22928));
    this = (void *)(param_1 + 0x228bc);
    *(undefined4 *)(param_1 + 0x22924) = 1;
    iVar2 = FUN_0047bfb0(this,(undefined4 *)&DAT_00583308);
    while (iVar2 != 0) {
      if ((DAT_005833f4 & 0x100) == 0) {
        if ((DAT_005833f4 & 1) == 0) {
          if ((DAT_005833f4 & 2) == 0) {
            FUN_0047c040(this,(int *)&DAT_00583308);
          }
          else {
            FUN_0047c280(this,(int *)&DAT_00583308);
          }
        }
        else {
          FUN_0047c370(this,(int *)&DAT_00583308);
        }
      }
      else {
        FUN_0047c350();
      }
      iVar2 = FUN_0047bfb0(this,(undefined4 *)&DAT_00583308);
    }
    *(undefined4 *)(param_1 + 0x22924) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22928));
  } while( true );
}


