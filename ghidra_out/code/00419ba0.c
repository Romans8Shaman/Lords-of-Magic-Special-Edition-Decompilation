
int __thiscall FUN_00419ba0(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = FUN_004a8360(&DAT_005ae958,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = FUN_004a8330(&DAT_005ae958,param_1,1);
    if ((iVar3 != 0) && (-1 < *(int *)(iVar3 + 0x54))) goto LAB_00419ca7;
  }
  else {
    if (puVar1[0x12] != *(int *)((int)this + 0x48)) {
LAB_00419ca7:
      return -(uint)(param_1 != *(int *)((int)this + 0x548)) & 2;
    }
    uVar2 = FUN_00419460((int)puVar1);
    if (uVar2 == 0) {
      if (param_1 != *(int *)((int)this + 0x548)) {
        return 2;
      }
      if ((*(int *)((int)this + 0x54c) != puVar1[10]) &&
         ((((*(uint *)((int)this + 0x30) & 0x100000) == 0 || ((puVar1[0xc] & 0x100000) == 0)) ||
          (puVar1[0x152] != *(int *)((int)this + 0x548))))) {
        return 3;
      }
    }
    else if (*(int *)((int)this + 0x54c) != puVar1[10]) {
      if (-1 < (int)puVar1[0x156]) {
        return (param_1 == *(int *)((int)this + 0x548)) + 2;
      }
      if ((*(byte *)(puVar1 + 0xc) & 8) == 0) {
        iVar3 = FUN_00427930(&DAT_005aeefc,puVar1[0x14e]);
        return (*(int *)(DAT_005ae970 + (iVar3 + param_1 * 8) * 4) == *(int *)((int)this + 0x1c)) +
               1;
      }
      return 2;
    }
  }
  return 0;
}


