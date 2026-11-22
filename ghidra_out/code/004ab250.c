
bool __thiscall FUN_004ab250(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00495370((void *)((int)this + 0x234),param_1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00495370((void *)((int)this + 0x254),param_2);
  return iVar1 != 0;
}


