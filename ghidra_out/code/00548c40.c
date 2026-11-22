
int __cdecl FUN_00548c40(byte *param_1,LPWSTR param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  pbVar1 = (byte *)*DAT_005d52d0;
  piVar3 = DAT_005d52d0;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  while ((iVar2 = FUN_00548670(param_1,pbVar1,param_2), iVar2 != 0 ||
         ((*(char *)(*piVar3 + (int)param_2) != '=' && (*(char *)(*piVar3 + (int)param_2) != '\0')))
         )) {
    pbVar1 = (byte *)piVar3[1];
    piVar3 = piVar3 + 1;
    if (pbVar1 == (byte *)0x0) {
      return -((int)piVar3 - (int)DAT_005d52d0 >> 2);
    }
  }
  return (int)piVar3 - (int)DAT_005d52d0 >> 2;
}


