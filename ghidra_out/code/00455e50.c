
void __thiscall FUN_00455e50(void *this,int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_2 == 0) || (param_2 == 4)) {
    puVar2 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
    uVar3 = *(uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8) | 0x10000;
  }
  else if ((param_2 == 2) || (param_2 == 6)) {
    puVar2 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
    uVar3 = *(uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8) | 0x8000;
  }
  else {
    puVar2 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
    uVar3 = *(uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8) | 0x20000;
  }
  iVar1 = param_1 * 8;
  *puVar2 = uVar3;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) & 0xffffefff;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) & 0xffe3ffff;
  puVar2 = (uint *)(*(int *)((int)this + 100) + 4 + iVar1);
  *puVar2 = *puVar2 | 0x100000;
  return;
}


