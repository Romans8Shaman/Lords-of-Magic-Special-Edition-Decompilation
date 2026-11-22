
void __cdecl op_startbartersession(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iStack_4;
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&iStack_4);
    if (iVar2 != 0) {
      FUN_00432360(&DAT_00584cd4,iStack_4,(int)vm);
    }
  }
  return;
}


