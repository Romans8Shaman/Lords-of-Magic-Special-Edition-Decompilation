
void __thiscall FUN_004ad010(void *this,int param_1)

{
  void *pvVar1;
  
  FUN_004f5b50(this,param_1);
  pvVar1 = *(void **)((int)this + 0xe4);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0xe8);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  return;
}


