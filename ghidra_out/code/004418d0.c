
int __fastcall FUN_004418d0(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0043c360(&DAT_005cd310,(int)*(short *)(param_1 + 0x54),(int)*(short *)(param_1 + 0x56)
                       ,*(int *)(param_1 + 0x58),*(int *)(param_1 + 0x5c));
  iVar2 = *(int *)(param_1 + 0x58);
  if ((iVar2 == 0xf) && (0 < *(int *)(param_1 + 0x5c))) {
    return *(int *)(&DAT_005564f8 + *(int *)(param_1 + 0x5c) * 4);
  }
  this = *(int **)(param_1 + 0x48);
  if (this == (int *)0x0) {
    if ((iVar2 < 9) || ((10 < iVar2 && (iVar2 != 0xc)))) {
      return 0;
    }
    return *(int *)(iVar1 + 0x18);
  }
  if (iVar1 == 0) {
    iVar2 = (/*IC:0044194c*/**(code **)(*this + 0x38))(this);
    return iVar2;
  }
  iVar2 = *(int *)(iVar1 + 0x18);
  iVar1 = (/*IC:00441933*/**(code **)(*this + 0x38))(this);
  if (iVar1 < iVar2) {
    return iVar2;
  }
  iVar2 = (/*IC:00441944*/**(code **)(**(int **)(param_1 + 0x48) + 0x38))(*(int **)(param_1 + 0x48));
  return iVar2;
}


