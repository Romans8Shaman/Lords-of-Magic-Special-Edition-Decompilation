
void __thiscall
FUN_004f31f0(void *this,int param_1,ushort param_2,undefined4 param_3,ushort param_4)

{
  if (param_1 != 0) {
    *(int *)((int)this + 0x38) = param_1;
    FUN_004f2fc0(this,param_2,param_3,param_4);
    FUN_004f3130((int)this);
  }
  return;
}


