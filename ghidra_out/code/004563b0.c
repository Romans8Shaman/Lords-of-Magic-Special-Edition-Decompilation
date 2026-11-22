
void __thiscall FUN_004563b0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((-1 < param_1) && (iVar1 = *(int *)((int)this + 0x6c), param_1 < iVar1)) && (-1 < param_2))
     && (param_2 < *(int *)((int)this + 0x70))) {
    uVar2 = FUN_00455640(&DAT_005ae8e8,param_3);
    FUN_004558c0(&DAT_005aa12c,param_1,param_2,uVar2);
    iVar1 = (param_2 * iVar1 + param_1) * 8;
    *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
         *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) | 0x801000;
    *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
         *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) & 0xffe3ffff;
    *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
         *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) | 0x100000;
    *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) =
         *(uint *)(*(int *)((int)this + 100) + 4 + iVar1) | 0x40000;
  }
  return;
}


