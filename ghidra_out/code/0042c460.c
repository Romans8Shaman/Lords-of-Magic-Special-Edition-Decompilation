
undefined4 __thiscall FUN_0042c460(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = FUN_00485080(&DAT_005aa12c,param_1,0x2f);
  if (((puVar3 != (undefined4 *)0x0) && (-1 < param_2)) && (param_2 < (int)puVar3[0x13])) {
    iVar4 = FUN_00427b80(*(int *)this);
    if ((*(byte *)(iVar4 + 0x18) & 0x10) != 0) {
      return 1;
    }
    iVar4 = FUN_00521e00(puVar3 + param_2 * 0x13 + 0x31);
    if (iVar4 != 0) {
      uVar1 = *(undefined4 *)(iVar4 + 0x1c);
      uVar2 = *(undefined4 *)(iVar4 + 0x20);
      iVar4 = FUN_00427b80(*(int *)this);
      if ((1 << ((byte)uVar1 & 0x1f) & *(uint *)(iVar4 + 0x1c)) != 0) {
        return (uint)((*(uint *)(iVar4 + 0x20) & 1 << ((byte)uVar2 & 0x1f)) != 0);
      }
    }
  }
  return 0;
}


