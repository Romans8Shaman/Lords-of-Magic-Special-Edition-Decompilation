
void * __thiscall
FUN_00494580(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  DAT_00583650 = DAT_00583650 + 0x10;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  DAT_00583628 = DAT_00583628 + 0x14;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  DAT_00583650 = DAT_00583650 + -0x10;
  return this;
}


