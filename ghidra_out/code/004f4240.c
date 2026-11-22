
undefined4 __cdecl FUN_004f4240(char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2 + param_3;
  iVar2 = (int)*param_1;
  pcVar3 = param_1 + 1;
  if (-1 < iVar2) {
    iVar2 = iVar2 + 3;
  }
  do {
    iVar5 = param_3;
    do {
      if (iVar2 == 0) {
        iVar2 = (int)*pcVar3;
        pcVar3 = pcVar3 + 1;
        if (-1 < iVar2) {
          iVar2 = iVar2 + 3;
          goto LAB_004f4277;
        }
LAB_004f4279:
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        iVar2 = iVar2 + 1;
        *(char *)(iVar4 + -1) = cVar1;
      }
      else {
LAB_004f4277:
        if (iVar2 < 0) goto LAB_004f4279;
        iVar2 = iVar2 + -1;
        *(char *)(iVar4 + -1) = *pcVar3;
        if (iVar2 == 0) {
          pcVar3 = pcVar3 + 1;
        }
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar4 = iVar4 + param_5 + param_3;
    param_4 = param_4 + -1;
    if (param_4 == 0) {
      return 0;
    }
  } while( true );
}


