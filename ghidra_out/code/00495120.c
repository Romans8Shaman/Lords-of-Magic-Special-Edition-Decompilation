
undefined4 * __thiscall FUN_00495120(void *this,int *param_1,int *param_2,int param_3)

{
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(this);
  FUN_00495170(this,param_1,param_2[0x47]);
  if ((**(byte **)(*param_2 + 8) & 0x33) != 0) {
    *(uint *)((int)this + 0xc) = (uint)*(ushort *)(param_3 + 2);
  }
  return this;
}


