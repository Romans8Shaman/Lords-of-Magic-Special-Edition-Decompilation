
int __thiscall FUN_004551a0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = (int)*(char *)((int)this + 0x34);
  }
  else if (param_1 == 1) {
    iVar1 = (int)*(char *)((int)this + 0x35);
  }
  else if (param_1 == 2) {
    iVar1 = (int)*(char *)((int)this + 0x36);
  }
  uVar2 = iVar1 + DAT_005aec3c >> 0x1f;
  uVar2 = (((iVar1 + DAT_005aec3c ^ uVar2) - uVar2 & 7 ^ uVar2) - uVar2) + 1;
  uVar3 = (int)uVar2 >> 0x1f;
  return ((uVar2 ^ uVar3) - uVar3 & 7 ^ uVar3) - uVar3;
}


