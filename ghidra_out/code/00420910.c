
undefined4 __thiscall FUN_00420910(void *this,int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004208d0(this,param_1,param_2);
  if (iVar1 == param_1) {
    return 0;
  }
  if ((DAT_00583100 == '\x02') && ((DAT_005ae935 == '\b' || (DAT_005ae935 == '\x06')))) {
    FUN_004a9a60(&DAT_005ae958,&param_2,iVar1);
    if ((param_2 & 0x400000) != 0) {
      return 0;
    }
  }
  return 1;
}


