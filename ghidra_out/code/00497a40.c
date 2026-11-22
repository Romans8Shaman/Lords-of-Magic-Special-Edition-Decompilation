
void __thiscall FUN_00497a40(void *this,char *param_1,int param_2)

{
  size_t _Count;
  undefined4 uVar1;
  
  _Count = param_2 + 1;
  if (*(int *)((int)this + 4) < (int)_Count) {
    if (*(int *)this != 0) {
      Ordinal_403(*(int *)this,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      *(undefined4 *)this = 0;
    }
    uVar1 = Ordinal_401(_Count,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(undefined4 *)this = uVar1;
  }
  if (*(char **)this != (char *)0x0) {
    *(size_t *)((int)this + 4) = _Count;
    _strncpy(*(char **)this,param_1,_Count);
  }
  return;
}


