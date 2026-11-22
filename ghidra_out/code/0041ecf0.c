
undefined4 __thiscall FUN_0041ecf0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0x17) {
    uVar1 = FUN_0053a110();
    iVar2 = uVar1 * *(int *)((int)this + 800);
    return *(undefined4 *)
            ((int)this + ((int)(iVar2 + (iVar2 >> 0x1f & 0x7fffU)) >> 0xf) * 4 + 0x2f8);
  }
  if (param_1 == 0x18) {
    uVar1 = FUN_0053a110();
    iVar2 = uVar1 * *(int *)((int)this + 0x34c);
    return *(undefined4 *)
            ((int)this + ((int)(iVar2 + (iVar2 >> 0x1f & 0x7fffU)) >> 0xf) * 4 + 0x324);
  }
  if (param_1 == 0x19) {
    uVar1 = FUN_0053a110();
    iVar2 = uVar1 * *(int *)((int)this + 0x378);
    return *(undefined4 *)
            ((int)this + ((int)(iVar2 + (iVar2 >> 0x1f & 0x7fffU)) >> 0xf) * 4 + 0x350);
  }
  return 0xffffffff;
}


