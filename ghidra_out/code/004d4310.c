
undefined4 __thiscall FUN_004d4310(void *this,char param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_1 == '\t') {
    iVar4 = 0;
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x5c) + -4 + *(int *)((int)this + 100) * 4);
    iVar2 = puVar1[1];
    if (0 < iVar2) {
      pcVar3 = (char *)*puVar1;
      while (((*pcVar3 != '\x05' || ((char)*(undefined4 *)(pcVar3 + 8) != '\t')) ||
             (*(int *)(pcVar3 + 0xc) != param_2))) {
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x10;
        if (iVar2 <= iVar4) {
          return 0;
        }
      }
      return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x80) + *(int *)(pcVar3 + 4) * 4) + 4);
    }
  }
  return 0;
}


