
void __thiscall FUN_004a9b70(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
  *puVar1 = *puVar1 & (param_2 | 0xffe3ffff);
  return;
}


