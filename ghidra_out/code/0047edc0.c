
undefined4 __thiscall FUN_0047edc0(void *this,uint param_1,int param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  if ((*(int *)this != 0) && (param_3 != (char *)0x0)) {
    uVar4 = 0xffffffff;
    pcVar6 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar3 = *(int *)((int)this + 4);
    iVar5 = ~uVar4 - 1;
    if ((((-1 < (int)param_1) && ((int)(iVar5 * iVar3 + param_1) <= *(int *)(*(int *)this + 4))) &&
        (-1 < param_2)) && (*(int *)((int)this + 8) + param_2 <= *(int *)(*(int *)this + 8))) {
      iVar7 = 0;
      uVar4 = param_1;
      if (0 < iVar5) {
        do {
          bVar2 = param_3[iVar7];
          param_1 = CONCAT31(param_1._1_3_,bVar2);
          FUN_0047eb90(this,param_1,uVar4,param_2);
          iVar7 = iVar7 + 1;
          *(uint *)((int)this + (uint)bVar2 * 0x1c + 0x10) =
               (uint)*(byte *)((int)this + (uint)bVar2 * 0x1c + 0x2a);
          uVar4 = uVar4 + iVar3;
        } while (iVar7 < iVar5);
      }
      return 1;
    }
  }
  return 0;
}


