
void __thiscall FUN_004c3db0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar2 + iVar1 * 8) = *param_1;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


