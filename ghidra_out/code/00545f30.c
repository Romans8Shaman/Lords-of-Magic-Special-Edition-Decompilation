
uint __cdecl FUN_00545f30(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == 0xffffffff) ||
     ((uVar1 = param_2[3], (uVar1 & 1) == 0 && (((uVar1 & 0x80) == 0 || ((uVar1 & 2) != 0)))))) {
    return 0xffffffff;
  }
  if (param_2[2] == 0) {
    FUN_005449f0(param_2);
  }
  if (*param_2 == param_2[2]) {
    if (param_2[1] != 0) {
      return 0xffffffff;
    }
    *param_2 = *param_2 + 1;
  }
  if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
    iVar2 = *param_2;
    *param_2 = iVar2 + -1;
    *(char *)(iVar2 + -1) = (char)param_1;
  }
  else {
    iVar2 = *param_2;
    pcVar3 = (char *)(iVar2 + -1);
    *param_2 = (int)pcVar3;
    if (*pcVar3 != (char)param_1) {
      *param_2 = iVar2;
      return 0xffffffff;
    }
  }
  param_2[1] = param_2[1] + 1;
  param_2[3] = param_2[3] & 0xffffffefU | 1;
  return param_1 & 0xff;
}


