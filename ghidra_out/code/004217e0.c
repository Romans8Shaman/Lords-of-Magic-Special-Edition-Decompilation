
void __thiscall FUN_004217e0(void *this,int param_1)

{
  void *pvVar1;
  
  FUN_004f5b50(this,param_1);
  FUN_004b0990((void *)((int)this + 0x55c),param_1);
  FUN_0042dc60((void *)((int)this + 0x568),param_1);
  pvVar1 = *(void **)((int)this + 0x58c);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0x598);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  return;
}


