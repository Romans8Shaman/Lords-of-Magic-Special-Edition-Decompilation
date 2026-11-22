
void __cdecl op_locationview(void *vm)

{
  int iVar1;
  uint in_stack_4;
  
  iVar1 = FUN_0052d140((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  in_stack_4 = FUN_00482ac0(&DAT_005aa12c,iVar1,0);
  if (in_stack_4 == 0) {
    FUN_004d41c0(vm,s_locationview___no_selection_0055b43c);
    return;
  }
  FUN_00453ad0(&DAT_005aa12c,in_stack_4);
  return;
}


