
undefined4 __thiscall FUN_004b80a0(void *this,char *param_1,int param_2)

{
  if ((*(int *)((int)this + 0xd4) == 0) || (param_2 != 0)) {
    _strncpy((char *)((int)this + 0x104),param_1,0x17);
    *(undefined1 *)((int)this + 0x11b) = 0;
    return 1;
  }
  return 0;
}


