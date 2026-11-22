
void __thiscall FUN_004b7b90(void *this,int param_1)

{
  char *_Source;
  size_t _Count;
  
  _Count = 0x1d;
  _Source = FUN_004b7bc0(this,param_1);
  _strncpy((char *)((int)this + 0xe0),_Source,_Count);
  *(undefined1 *)((int)this + 0xfd) = 0;
  return;
}


