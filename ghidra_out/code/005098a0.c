
void FUN_005098a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = *param_1;
    pcVar2 = param_1;
    if (cVar1 < '!') {
      while (cVar1 != '\0') {
        *pcVar2 = pcVar2[1];
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      }
    }
    else {
      param_1 = param_1 + 1;
    }
    cVar1 = *param_1;
  }
  return;
}


