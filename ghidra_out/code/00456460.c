
void __thiscall FUN_00456460(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 8;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) & 0xffe3ffff;
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + iVar2);
  *puVar1 = *puVar1 | 0x100000;
  return;
}


