
void __thiscall FUN_00470090(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x3b4);
  *(undefined4 *)((int)this + 0x120) = 3;
  *(undefined4 *)((int)this + 0x3c8) = uVar1;
  *(undefined4 *)((int)this + 0x390) = 1;
  FUN_004b7dd0((int)this);
  *(undefined4 *)((int)this + 0x390) = 1;
  Ordinal_123(2,&LAB_00470480);
  Ordinal_123(3,&LAB_004704a0);
  *(undefined4 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0xd0) = 1;
  (/*IC:004700f8*/**(code **)(*(int *)this + 0x18))(this);
  FUN_004b7b90(this,param_1);
  FUN_004b8b80((int)this);
  return;
}


