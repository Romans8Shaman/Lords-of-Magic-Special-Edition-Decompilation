
void __thiscall FUN_004b15e0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = FUN_004205e0(param_2);
  if (iVar1 == 0) {
    iStack_18 = DAT_00555148;
  }
  else {
    iStack_18 = FUN_00420600(param_2);
  }
  iVar1 = *(int *)((int)this + 0x6c);
  iVar4 = *(int *)(param_2 + 0x1c) % iVar1;
  iVar2 = *(int *)(param_2 + 0x1c) / iVar1;
  iStack_1c = iVar2 - iStack_18;
  if (iStack_1c < 0) {
    iStack_1c = 0;
  }
  iStack_14 = iVar2 + iStack_18;
  if (*(int *)((int)this + 0x70) <= iStack_14) {
    iStack_14 = *(int *)((int)this + 0x70) + -1;
  }
  iStack_10 = iVar4 - iStack_18;
  if (iStack_10 < 0) {
    iStack_10 = 0;
  }
  iStack_18 = iVar4 + iStack_18;
  if (iVar1 <= iStack_18) {
    iStack_18 = iVar1 + -1;
  }
  if (iStack_1c < iStack_14) {
    do {
      if (iStack_10 < iStack_18) {
        iVar1 = iStack_10;
        do {
          iVar5 = iStack_1c * *(int *)((int)this + 0x6c) + iVar1;
          lVar6 = __ftol(SQRT((float10)((iVar1 - iVar4) * (iVar1 - iVar4) +
                                       (iStack_1c - iVar2) * (iStack_1c - iVar2))));
          if ((int)lVar6 < 3) {
            iVar3 = 6;
          }
          else {
            iVar3 = ((5 < (int)lVar6) - 1 & 2) + 2;
          }
          if (iVar3 + (uint)*(byte *)(iVar5 + param_1) < 0x100) {
            *(byte *)(iVar5 + param_1) = (char)iVar3 + *(byte *)(iVar5 + param_1);
          }
          else {
            *(undefined1 *)(iVar5 + param_1) = 0xff;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iStack_18);
      }
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < iStack_14);
  }
  return;
}


