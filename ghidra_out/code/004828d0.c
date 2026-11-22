
void __thiscall FUN_004828d0(void *this,undefined1 param_1,short param_2)

{
  LPCSTR pCVar1;
  int iVar2;
  DWORD DVar3;
  
  pCVar1 = (LPCSTR)FUN_004b9570(param_1,param_2);
  switch(param_1) {
  case 0x44:
  case 0x53:
    break;
  default:
    OutputDebugStringA(s_unknown_transfer_0055b284);
    break;
  case 0x47:
    FUN_00483120(this,pCVar1);
    if (DAT_005d1e84 != 0) {
      *(undefined4 *)(DAT_005d1e84 + 0xd8) = 1;
      DVar3 = GetTickCount();
      *(DWORD *)((int)this + 0x228b0) = DVar3;
      return;
    }
    break;
  case 0x4d:
    iVar2 = FUN_004b1e40(1);
    FUN_00483ed0();
    if (iVar2 == 0) {
      FUN_004b6f20(0x5cd358);
      DVar3 = GetTickCount();
      *(DWORD *)((int)this + 0x228b0) = DVar3;
      return;
    }
  }
  DVar3 = GetTickCount();
  *(DWORD *)((int)this + 0x228b0) = DVar3;
  return;
}


