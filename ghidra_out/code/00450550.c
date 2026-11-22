
void __cdecl op_installregent(void *vm)

{
  void *pvVar1;
  int iVar2;
  int *piStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_00451a70(pvVar1,(uint *)&piStack_4);
    if (iVar2 != 0) {
      FUN_0045cea0(piStack_4,vm,0);
    }
  }
  return;
}


