
undefined4 __thiscall FUN_00407860(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_00407d50((int)pvVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_004072f0((void *)((int)this + 0x482c),pvVar1);
      if (iVar2 != -1) {
        *(short *)((int)pvVar1 + 0xc2) = (short)iVar2;
        *(undefined1 *)((int)pvVar1 + 0xc0) = 0x11;
        *(undefined1 *)((int)pvVar1 + 0xc1) = 0;
        return 1;
      }
    }
  }
  return 0;
}


