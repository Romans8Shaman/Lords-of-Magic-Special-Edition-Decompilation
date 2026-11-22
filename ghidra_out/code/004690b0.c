
void __cdecl op_checkaimissileunittarget(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if ((iVar1 == 0) || (*(int *)((int)vm + 0x48) != DAT_005577c8)) {
    return;
  }
  FUN_00469070(vm);
  return;
}


