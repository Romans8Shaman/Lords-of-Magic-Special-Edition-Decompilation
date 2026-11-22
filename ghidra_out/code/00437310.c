
undefined4 __thiscall
FUN_00437310(void *this,undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_4;
  
  iVar1 = FUN_004f6000(&DAT_005ae974,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  local_24 = param_1;
  local_14 = 0;
  local_c = 0;
  local_18 = param_4 & 0xffffff00;
  local_20 = param_2;
  local_1c = param_3;
  local_4 = 0xffffffff;
  uVar2 = FUN_004c5020(this,&local_24,0x24);
  return uVar2;
}


