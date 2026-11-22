
undefined4 __thiscall FUN_0052dda0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) && (iVar1 = FUN_00407d50(param_1), iVar1 != 0))
    {
      return 0;
    }
    iVar1 = 0;
    piVar3 = (int *)((int)this + 0x18);
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar3,0);
      if (uVar2 == 0) break;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar1 < 0x1e);
    if (iVar1 < 0x1e) {
      *(undefined4 *)((int)this + iVar1 * 0xc + 0x14) = 0xffffffff;
      *(undefined4 *)((int)this + (iVar1 + 2) * 0xc) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)((int)this + iVar1 * 0xc + 0x1c) = 0xffffffff;
      *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 2;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
      return 1;
    }
  }
  return 0;
}


