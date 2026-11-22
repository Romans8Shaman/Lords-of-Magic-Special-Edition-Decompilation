
void __cdecl FUN_0053c620(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_00543a70((int)*param_1);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_00575094 < 2) {
        uVar3 = (byte)PTR_DAT_00574e88[*param_1 * 2] & 4;
      }
      else {
        uVar3 = FUN_00541d40((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_00575098;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


