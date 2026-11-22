
void __cdecl op_mapvirtualunits(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_8;
  int *piStack_4;
  
  puVar5 = &DAT_005869f8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(DAT_005869f4 + 0x4c)) {
    iVar3 = -4;
    iStack_8 = 0;
    piStack_4 = (int *)&DAT_005869e8;
    iVar4 = 1;
    do {
      iVar1 = FUN_004e7150((int *)(iStack_8 + 0xc4 + DAT_005869f4));
      if (iVar1 == -1) {
        iVar1 = iVar4 + 1;
        (&DAT_005869f8)[iVar4 + iVar3] = iVar2;
        if ((iVar1 == 4) || (iVar1 == 8)) {
          iVar1 = iVar4 + 2;
        }
      }
      else {
        iVar1 = 1;
        piStack_4 = piStack_4 + 4;
        iVar3 = iVar3 + 4;
        *piStack_4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      iStack_8 = iStack_8 + 0x4c;
      iVar4 = iVar1;
    } while (iVar2 < *(int *)(DAT_005869f4 + 0x4c));
  }
  return;
}


