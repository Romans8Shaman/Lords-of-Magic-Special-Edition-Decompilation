
void __thiscall FUN_00474e00(void *this,undefined4 *param_1)

{
  DAT_00583650 = DAT_00583650 + 0x10;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return;
}


