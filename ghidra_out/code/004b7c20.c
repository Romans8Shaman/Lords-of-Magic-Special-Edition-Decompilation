
bool __thiscall FUN_004b7c20(void *this,char *param_1)

{
  int iVar1;
  
  _strncpy((char *)((int)this + *(int *)((int)this + 0x2c8) * 0x32 + 0x134),param_1,0x30);
  *(undefined1 *)((int)this + *(int *)((int)this + 0x2c8) * 0x32 + 0x164) = 0;
  iVar1 = *(int *)((int)this + 0x2c8) + 1;
  *(int *)((int)this + 0x2c8) = iVar1;
  return iVar1 < 7;
}


