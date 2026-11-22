
undefined4 __thiscall FUN_0046fbd0(void *this,char *param_1)

{
  undefined4 *arg10;
  undefined *arg3;
  int iVar1;
  
  _strncpy((char *)((int)this + 0xe0),param_1,0x1d);
  *(undefined1 *)((int)this + 0xfd) = 0;
  arg3 = FUN_00505f10();
  arg10 = (undefined4 *)((int)this + 0x2c4);
  *arg10 = 0;
  iVar1 = Ordinal_101((char *)((int)this + 0xe0),0,arg3,0,0,0,4,(int)this + 0x104,
                      s_HostPlayer_00557bd0,arg10);
  if (iVar1 == 0) {
    *arg10 = 0xffff;
    return 0;
  }
  FUN_0046fc50(this,param_1);
  return 1;
}


