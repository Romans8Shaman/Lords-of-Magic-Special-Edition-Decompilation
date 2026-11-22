
undefined4 __thiscall FUN_00485550(void *this,LPCSTR param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_00539660((char *)&DAT_0055b1b0,4,1,piVar1);
  FUN_004a5440((void *)((int)this + 0x482c),piVar1);
  FUN_004eeb00((void *)((int)this + 0x4848),piVar1);
  FUN_004c8fc0((void *)((int)this + 0x4b34),piVar1);
  FUN_005394d0(piVar1);
  return 1;
}


