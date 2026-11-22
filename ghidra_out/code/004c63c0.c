
int __thiscall FUN_004c63c0(void *this,int param_1,undefined2 param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_4;
  
  local_4 = 1;
  iVar3 = param_1 * 6;
  *(undefined2 *)(*(int *)this + 2 + iVar3) = param_2;
  *(byte *)(*(int *)this + 1 + iVar3) = *(byte *)(*(int *)this + 1 + iVar3) & 1 | 2;
  piVar5 = *(int **)((int)this + 0x1b4);
  iVar3 = param_1;
  do {
    iVar8 = -1;
    param_1 = 0;
    piVar7 = piVar5;
    do {
      iVar4 = FUN_004c6160(iVar3,param_1);
      if (iVar4 != 0) {
        iVar4 = iVar4 + iVar3;
        if (iVar8 == -1) {
          bVar2 = *(byte *)(*(int *)this + 1 + iVar4 * 6);
          if (((bVar2 & 4) != 0) || ((bVar2 & 2) == 0)) {
            iVar8 = iVar4;
          }
        }
        else if ((*(byte *)(*(int *)this + 1 + iVar4 * 6) & 6) == 0) {
          *piVar7 = iVar4;
          pbVar1 = (byte *)(*(int *)this + 1 + iVar4 * 6);
          piVar7 = piVar7 + 1;
          *pbVar1 = *pbVar1 | 4;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < 8);
    piVar5 = piVar7;
    iVar3 = iVar8;
    if (iVar8 == -1) {
      piVar6 = *(int **)((int)this + 0x1b4);
      piVar5 = piVar6;
      for (; piVar6 < piVar7; piVar6 = piVar6 + 1) {
        if ((*(byte *)(*(int *)this + 1 + *piVar6 * 6) & 4) != 0) {
          *piVar5 = *piVar6;
          piVar5 = piVar5 + 1;
        }
      }
      if (piVar5 == *(int **)((int)this + 0x1b4)) {
        return local_4;
      }
      iVar3 = **(int **)((int)this + 0x1b4);
    }
    iVar8 = iVar3 * 6;
    *(byte *)(*(int *)this + 1 + iVar8) = *(byte *)(*(int *)this + 1 + iVar8) & 1 | 2;
    *(undefined2 *)(*(int *)this + 2 + iVar8) = param_2;
    local_4 = local_4 + 1;
  } while( true );
}


