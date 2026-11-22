
void __thiscall FUN_004010d0(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) & 0xfc;
  return;
}


