
void __thiscall
FUN_00498e70(void *this,int *param_1,int *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  *param_1 = -1;
  *param_2 = -1;
  *param_3 = 0xff;
  *param_4 = 0xff;
  iVar1 = *(int *)((int)this + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if ((puVar2 != (undefined *)0x0) && (puVar2 + 0x15e0 != (undefined *)0x0)) {
    FUN_00498480(puVar2 + 0x15e0,(int)this,param_1,param_2,param_3,param_4);
  }
  return;
}


