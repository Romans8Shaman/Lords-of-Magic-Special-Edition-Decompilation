
void __cdecl FUN_0053c680(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar2 = *param_1;
  while ((cVar2 != '\0' && (cVar2 != DAT_00575098))) {
    pcVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar3;
  }
  pcVar3 = param_1 + 1;
  if (*param_1 != '\0') {
    cVar2 = *pcVar3;
    while (((cVar2 != '\0' && (cVar2 != 'e')) && (cVar2 != 'E'))) {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = pcVar3[-1];
    pcVar1 = pcVar3;
    while (pcVar4 = pcVar1 + -1, cVar2 == '0') {
      cVar2 = pcVar1[-2];
      pcVar1 = pcVar4;
    }
    if (*pcVar4 == DAT_00575098) {
      pcVar4 = pcVar1 + -2;
    }
    cVar2 = *pcVar3;
    pcVar4 = pcVar4 + 1;
    *pcVar4 = cVar2;
    while (cVar2 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar3;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar2;
    }
  }
  return;
}


