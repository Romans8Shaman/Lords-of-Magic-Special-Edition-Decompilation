
int __cdecl FUN_0046fd10(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  do {
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((int)((~uVar3 - 1) - (~uVar4 - 1)) <= iVar5) {
      return local_4;
    }
    uVar3 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar2 = _strncmp(param_1 + iVar5,param_2,~uVar3 - 1);
    if (iVar2 == 0) {
      local_4 = 1;
    }
    iVar5 = iVar5 + 1;
    if (local_4 != 0) {
      return local_4;
    }
  } while( true );
}


