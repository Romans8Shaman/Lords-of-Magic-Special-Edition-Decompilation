
int __fastcall FUN_004784f0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_4;
  
  bVar2 = false;
  iVar4 = 0;
  piVar5 = param_1;
  local_4 = param_1;
  while( true ) {
    piVar1 = (int *)*piVar5;
    if (piVar1 == (int *)0x0) goto LAB_0047854a;
    (/*IC:0047850b*/**(code **)(*piVar1 + 0x24))(piVar1,&local_4);
    if (((uint)local_4 & 1) == 0) break;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
    if (4 < iVar4) goto LAB_0047854f;
  }
  (/*IC:00478527*/**(code **)(*(int *)param_1[iVar4] + 8))((int *)param_1[iVar4]);
  param_1[iVar4] = 0;
  piVar5 = param_1 + iVar4 * 7 + 0x3c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = -1;
    piVar5 = piVar5 + 1;
  }
LAB_0047854a:
  bVar2 = true;
LAB_0047854f:
  if (bVar2) {
    return iVar4;
  }
  return -1;
}


