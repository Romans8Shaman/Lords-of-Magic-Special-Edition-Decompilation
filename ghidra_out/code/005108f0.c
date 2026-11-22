
void __thiscall FUN_005108f0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(uint *)((int)this + 0x30) =
       (param_1 ^ *(uint *)((int)this + 0x30)) & 0x60 ^ *(uint *)((int)this + 0x30);
  if ((-1 < iVar1) && (iVar1 < DAT_005ae9c0)) {
    FUN_004a9b90(&DAT_005ae958,iVar1);
  }
  FUN_0050d770((int)this);
  return;
}


