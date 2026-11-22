
int __thiscall FUN_004efff0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) <= iVar1) {
    return -1;
  }
  if (*(int *)((int)this + 8) == 0) {
    return -1;
  }
  puVar3 = (undefined4 *)(iVar1 * 0xac + *(int *)((int)this + 8));
  for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)(*(int *)((int)this + 8) + 0x48 + iVar1 * 0xac) = iVar1;
  *(int *)this = *(int *)this + 1;
  return iVar1;
}


