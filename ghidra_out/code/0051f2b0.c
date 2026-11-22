
void __cdecl op_available_q(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  iVar3 = FUN_0041be40(param_1,&param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_0051c170(param_1);
    if (piVar2[0x15] != 0) {
      iVar4 = piVar2[0x15] + -1;
      piVar2[0x15] = iVar4;
      iVar1 = piVar2[0x14];
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar3 != 0);
      return;
    }
    piVar2[0x24] = 3;
    FUN_004d4550(piVar2);
    piVar2[0x24] = 0;
    piVar2[0x29] = 0;
  }
  return;
}


