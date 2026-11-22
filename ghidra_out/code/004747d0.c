
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004747d0(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_005a7adc != 0) {
    if (param_3 == 0) {
      *(undefined4 *)((int)this + 0x114) = 0;
      *(undefined4 *)((int)this + 0x14c) = 0;
      puVar1 = (undefined4 *)((int)this + 0x1bc);
      iVar2 = 4;
      do {
        *puVar1 = 0;
        puVar1 = puVar1 + 0xe;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(undefined4 *)((int)this + 0x90) = 0;
      _DAT_005aa62c = 0;
      puVar1 = &DAT_005aa374;
      do {
        puVar1[-0x18] = 0;
        *puVar1 = 0;
        puVar1 = puVar1 + 0x32;
      } while ((int)puVar1 < 0x5aa694);
    }
    FUN_004722d0(this,param_1,param_2);
    SetCursorPos(param_1,param_2);
  }
  return;
}


