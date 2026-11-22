
void __thiscall FUN_00451d30(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int *)((int)this + param_1 * 0x44 + 0xe0) != param_2) {
    *(int *)((int)this + param_1 * 0x44 + 0xe0) = param_2;
    iVar1 = *(int *)((int)this + 0x68);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    *(uint *)(puVar2 + 0x15d8) = *(uint *)(puVar2 + 0x15d8) | 0x40;
    FUN_004869d0(&DAT_005aa12c,*(undefined4 *)((int)this + 0x68));
  }
  return;
}


