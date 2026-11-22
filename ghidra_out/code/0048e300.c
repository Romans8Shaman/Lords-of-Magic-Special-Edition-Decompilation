
uint __thiscall FUN_0048e300(void *this,LONG param_1,LONG param_2,int param_3,int param_4)

{
  int *piVar1;
  POINT pt;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  BOOL BVar5;
  int *piVar6;
  int iVar7;
  RECT local_10;
  
  pvVar2 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_0048e260(pvVar2,param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    iVar4 = FUN_00491910(pvVar2,&local_10.left,param_3 + *(int *)this,
                         *(int *)((int)this + 4) + param_4);
    if (iVar4 == 0) {
      return 0;
    }
    pt.y = param_2;
    pt.x = param_1;
    BVar5 = PtInRect(&local_10,pt);
    if (BVar5 != 0) {
      piVar6 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 0xc));
      if (piVar6 == (int *)0x0) {
        return 1;
      }
      piVar1 = (int *)*piVar6;
      iVar4 = param_2 - param_4;
      iVar7 = param_1 - param_3;
      if ((*(byte *)(piVar1 + 5) & 4) == 0) {
        if ((((-1 < iVar7) && (-1 < iVar4)) && (iVar7 < piVar6[3])) && (iVar4 < piVar6[4])) {
          return (uint)(*(char *)((piVar6[2] + iVar4) * piVar1[3] + piVar6[1] + iVar7 + *piVar1) !=
                       '\0');
        }
      }
      else if (((-1 < iVar7) && (-1 < iVar4)) && ((iVar7 < piVar6[3] && (iVar4 < piVar6[4])))) {
        return (uint)(*(short *)(*piVar1 +
                                ((piVar6[2] + iVar4) * (piVar1[3] >> 1) + piVar6[1] + iVar7) * 2) !=
                     0);
      }
      return 1;
    }
  }
  return 0;
}


