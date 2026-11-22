
void __thiscall FUN_00424e80(void *this,void *param_1,uint param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)((int)this + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 != (undefined *)0x0) {
    FUN_00529830((void *)((int)this + param_4 * 0x4c + 0xc4),(int)puVar2,param_1,param_2,param_3);
  }
  return;
}


