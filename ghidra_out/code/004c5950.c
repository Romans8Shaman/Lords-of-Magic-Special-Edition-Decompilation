
undefined4 __thiscall FUN_004c5950(void *this,int *param_1)

{
  int *piVar1;
  char *pcVar2;
  void *local_4;
  
  piVar1 = param_1;
  local_4 = this;
  if (DAT_005aa12c < 0x39) {
    FUN_005397f0((char *)&local_4,4,1,param_1);
    *(undefined1 *)((int)this + 8) = local_4._0_1_;
    *(undefined1 *)((int)this + 9) = local_4._0_1_;
  }
  else {
    FUN_005397f0((char *)((int)this + 8),1,1,param_1);
    FUN_005397f0((char *)((int)this + 9),1,1,piVar1);
  }
  FUN_005397f0((char *)&param_1,1,1,piVar1);
  if ((char)param_1 != '\0') {
    if (*(int *)((int)this + 0xc) != 0) {
      Ordinal_403(*(int *)((int)this + 0xc),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    pcVar2 = (char *)Ordinal_401((uint)param_1 & 0xff,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(char **)((int)this + 0xc) = pcVar2;
    FUN_005397f0(pcVar2,(uint)param_1 & 0xff,1,piVar1);
  }
  FUN_005397f0((char *)((int)this + 0x10),4,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x18),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x58),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x98),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0xd8),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x118),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x158),0x40,1,piVar1);
  return 1;
}


