
void __thiscall FUN_0047e570(void *this,int param_1)

{
  void *pvVar1;
  
  FUN_004f5b50(this,param_1);
  FUN_004b0990((void *)((int)this + 0x88),param_1);
  pvVar1 = *(void **)((int)this + 0xb8);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  pvVar1 = *(void **)((int)this + 0xc0);
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x3c) == param_1)) {
    FUN_0049dbe0(pvVar1);
  }
  FUN_0042dc60((void *)((int)this + 0x94),param_1);
  return;
}


