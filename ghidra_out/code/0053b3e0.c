
int __cdecl FUN_0053b3e0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_0053cc50((uint)param_2);
  iVar2 = FUN_0053cef0(param_2);
  uVar3 = FUN_005396a0(param_1,1,~uVar4 - 1,param_2);
  FUN_0053cfb0(iVar2,param_2);
  FUN_0053ccc0((uint)param_2);
  return -(uint)(uVar3 != ~uVar4 - 1);
}


