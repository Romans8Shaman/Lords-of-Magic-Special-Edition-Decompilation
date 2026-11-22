
undefined4 __thiscall
FUN_0048d760(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  
  iVar1 = FUN_00492760(&DAT_005a7b50,param_1);
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  *(undefined4 *)((int)this + 0x20) = param_9;
  *(undefined4 *)((int)this + 0x24) = param_10;
  *(undefined4 *)((int)this + 0x28) = param_11;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar1 + 0x10);
  }
  if (param_2 < 0) {
    param_2 = (0x280 - *(int *)((int)this + 0x44)) / 2;
  }
  if (param_3 < 0) {
    param_3 = (0x1e0 - *(int *)((int)this + 0x48)) / 2;
  }
  *(int *)((int)this + 0x3c) = param_2;
  *(int *)((int)this + 0x40) = param_3;
  return 1;
}


