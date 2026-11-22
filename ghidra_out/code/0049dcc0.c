
void __thiscall FUN_0049dcc0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + DAT_005aec3c >> 0x1f;
  iVar1 = ((param_1 + DAT_005aec3c ^ uVar2) - uVar2 & 7 ^ uVar2) - uVar2;
  *(int *)((int)this + 8) = iVar1;
  FUN_0049dc60(this,iVar1 + 1U & 7,8);
  return;
}


