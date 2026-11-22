
int __cdecl FUN_0053ae00(char *param_1,byte *param_2,undefined4 param_3,...)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *local_20;
  int local_1c;
  char *local_18;
  undefined4 local_14;
  
  uVar3 = 0xffffffff;
  local_18 = param_1;
  local_20 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_1c = ~uVar3 - 1;
  local_14 = 0x49;
  iVar2 = FUN_00540e30((int *)&local_20,param_2,&param_3);
  return iVar2;
}


