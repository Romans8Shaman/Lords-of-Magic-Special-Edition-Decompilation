
void __thiscall FUN_00455ef0(void *this,int unused_stack_4,undefined4 param_p2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = unused_stack_4 * 8;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) | 0x1000;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) & 0xffffefff;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) | 0x200000;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) & 0xffe3ffff;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) | 0x100000;
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + iVar2);
  *puVar1 = *puVar1 | 0x40000;
  return;
}


