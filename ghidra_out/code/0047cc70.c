
void __thiscall FUN_0047cc70(void *this,int param_1)

{
  undefined4 uVar1;
  undefined *this_00;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0xc4 + *(int *)(param_1 + 0x50) * 0x4c);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  piVar2 = this;
  this_00 = FUN_004c6fc0();
  FUN_004a7d50(this_00,piVar2,iVar3);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 10;
  *(undefined4 *)((int)this + 0x84) = 0;
  (/*IC:0047ccc8*/**(code **)(*(int *)this + 0x2c))(this);
  return;
}


