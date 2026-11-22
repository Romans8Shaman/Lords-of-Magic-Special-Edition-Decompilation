
void __thiscall FUN_00456490(void *this,int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
  *puVar1 = *puVar1 | 0x1c0000;
  return;
}


