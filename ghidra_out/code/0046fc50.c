
void __thiscall FUN_0046fc50(void *this,char *param_1)

{
  undefined4 uVar1;
  
  _strncpy((char *)((int)this + 0xe0),param_1,0x1d);
  *(undefined1 *)((int)this + 0xfd) = 0;
  *(undefined4 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x120) = 1;
  uVar1 = FUN_004b7dd0((int)this);
  *(undefined4 *)((int)this + 0x390) = uVar1;
  *(undefined4 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x2d) = 0;
  _strncpy((char *)((int)this + 0x14),(char *)((int)this + 0x104),0x17);
  *(undefined1 *)((int)this + 0x2b) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  Ordinal_123(2,&LAB_00470480);
  Ordinal_123(3,&LAB_004704a0);
  FUN_004b6520(1);
  (/*IC:0046fcf1*/**(code **)(*(int *)this + 0x18))(this);
  FUN_004b8b80((int)this);
  return;
}


