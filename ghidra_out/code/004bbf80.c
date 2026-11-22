
void __thiscall FUN_004bbf80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x15b0) = param_3;
  *(undefined4 *)((int)this + 0x15a8) = param_1;
  *(undefined4 *)((int)this + 0x15ac) = param_2;
  FUN_00462d70((void *)((int)this + 0x15e0),param_1);
  FUN_0051b890((void *)((int)this + 0x1c64),param_1);
  *(undefined4 *)((int)this + 0x40) = 0;
  return;
}


