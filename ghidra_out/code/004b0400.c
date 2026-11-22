
void __thiscall FUN_004b0400(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004b0ee0(&DAT_005cd328,param_1);
  if (puVar1 == (uint *)0x0) {
    FUN_004b0260(this);
    return;
  }
  iVar2 = FUN_004b0a40(puVar1);
  FUN_004b0350(this,iVar2);
  iVar2 = FUN_004b0ab0(puVar1);
  FUN_004b0350((int *)((int)this + 4),iVar2);
  iVar2 = FUN_004b0b20(puVar1);
  FUN_004b0350((int *)((int)this + 8),iVar2);
  return;
}


