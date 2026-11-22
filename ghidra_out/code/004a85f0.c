
undefined4 __thiscall FUN_004a85f0(void *this)

{
  LPCSTR pCVar1;
  int *unused_stack_0;
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x53,-1);
  unused_stack_0 = (int *)FUN_00539610(pCVar1,&DAT_00556168);
  if (unused_stack_0 == (int *)0x0) {
    return 0;
  }
  FUN_004f7c50((void *)((int)this + 0x1c),unused_stack_0);
  FUN_005394d0(unused_stack_0);
  return 1;
}


