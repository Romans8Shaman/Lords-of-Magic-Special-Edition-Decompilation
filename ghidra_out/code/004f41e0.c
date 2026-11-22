
undefined4 __cdecl FUN_004f41e0(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = (int)*param_1;
  pcVar2 = param_1 + 1;
  if (-1 < iVar1) {
    iVar1 = iVar1 + 3;
  }
  do {
    iVar3 = param_3;
    do {
      if (iVar1 == 0) {
        iVar1 = (int)*pcVar2;
        pcVar2 = pcVar2 + 1;
        if (-1 < iVar1) {
          iVar1 = iVar1 + 3;
          goto LAB_004f421a;
        }
LAB_004f421c:
        *param_2 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        iVar1 = iVar1 + 1;
      }
      else {
LAB_004f421a:
        if (iVar1 < 0) goto LAB_004f421c;
        *param_2 = *pcVar2;
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          pcVar2 = pcVar2 + 1;
        }
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_2 = param_2 + (param_5 - param_3);
    param_4 = param_4 + -1;
    if (param_4 == 0) {
      return 0;
    }
  } while( true );
}


