
void __thiscall FUN_004f5b50(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((int)this + 0x2c);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  return;
}


