
void __cdecl op_detectthief(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_004c2330((int)vm);
    if (0 < iVar1) {
      FUN_00507260(&DAT_005aa12c,*(int *)((int)vm + 0x28));
    }
  }
  return;
}


