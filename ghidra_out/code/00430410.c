
void __cdecl op_testautocalc(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&puStack_4);
    if (iVar2 != 0) {
      FUN_0042f120(&DAT_005adc50,pvVar1,puStack_4,vm);
    }
  }
  return;
}


