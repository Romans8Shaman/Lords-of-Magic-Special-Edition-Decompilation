
void __cdecl op_incrementstartingline(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  iVar3 = FUN_00498040(param_1,(int *)&param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_00497dd0(param_1);
    if (piVar2[0x15] != 0) {
      iVar4 = piVar2[0x15] + -1;
      piVar2[0x15] = iVar4;
      iVar1 = piVar2[0x14];
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
      return;
    }
    piVar2[0x24] = 3;
    FUN_004d4550(piVar2);
    piVar2[0x24] = 0;
    piVar2[0x29] = 0;
  }
  return;
}


