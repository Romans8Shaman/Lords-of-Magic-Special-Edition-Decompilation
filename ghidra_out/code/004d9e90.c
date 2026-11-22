
void __cdecl op_centeronarmy(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    FUN_0041fda0((int)vm);
    FUN_00504ce0(&DAT_00584ae8,1,0);
    FUN_0052b6f0(&DAT_005a7d90 + *(int *)((int)vm + 0x48) * 0x400,*(int *)((int)vm + 0x28),0);
  }
  return;
}


