
void __thiscall FUN_00488660(void *this,short param_1,undefined2 param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = (short *)((int)this + 0x23080);
  iVar1 = 0;
  psVar3 = psVar2;
  do {
    if (*psVar3 == param_1) goto LAB_0048869d;
    iVar1 = iVar1 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar1 < 10);
  iVar1 = 0;
  while (*psVar2 != -1) {
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 1;
    if (9 < iVar1) {
      return;
    }
  }
  *(short *)((int)this + iVar1 * 2 + 0x23080) = param_1;
LAB_0048869d:
  *(undefined2 *)((int)this + iVar1 * 2 + 0x2306c) = param_2;
  return;
}


