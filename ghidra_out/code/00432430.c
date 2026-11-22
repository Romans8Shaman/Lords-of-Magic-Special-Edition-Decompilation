
undefined4 __thiscall FUN_00432430(void *this,int param_1)

{
  if ((*(int *)((int)this + 8) == param_1) && (*(int *)((int)this + 0x18) == 0)) {
    *(undefined4 *)((int)this + 0x18) = 7;
    FUN_00431a10(&DAT_00584cd4);
    return 1;
  }
  return 0;
}


