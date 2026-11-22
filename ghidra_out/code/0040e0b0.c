
undefined4 __thiscall FUN_0040e0b0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0040e1a0((int)this);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 < 0) {
    puVar1[0x11] = *(undefined4 *)((int)this + 8);
    iVar2 = *(int *)((int)this + 8) + 1;
  }
  else {
    puVar1[0x11] = param_2;
    iVar2 = param_2 + 1;
    if (iVar2 <= *(int *)((int)this + 8)) {
      *(int *)((int)this + 8) = *(int *)((int)this + 8);
      puVar1[0x10] = *(undefined4 *)this;
      *(undefined4 **)this = puVar1;
      return puVar1[0x11];
    }
  }
  *(int *)((int)this + 8) = iVar2;
  puVar1[0x10] = *(undefined4 *)this;
  *(undefined4 **)this = puVar1;
  return puVar1[0x11];
}


