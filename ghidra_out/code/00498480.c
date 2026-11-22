
void __thiscall
FUN_00498480(void *this,int param_1,int *param_2,int *param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x5e4);
  do {
    iVar2 = 0;
    for (piVar1 = (int *)*puVar4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 == param_1) {
        *param_2 = iVar3;
        *param_3 = iVar2;
        *param_4 = *(undefined1 *)((int)this + iVar3 * 0x10 + 0x5e9);
        *param_5 = *(undefined1 *)((int)this + iVar3 * 0x10 + 0x5e8);
        return;
      }
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 4;
  } while (iVar3 < 10);
  *param_2 = -1;
  *param_3 = -1;
  return;
}


