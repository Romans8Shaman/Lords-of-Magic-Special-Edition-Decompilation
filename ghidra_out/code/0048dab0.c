
void * __thiscall FUN_0048dab0(void *this,int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  do {
    iVar6 = 0;
    if (0 < *(int *)((int)this + 0x50)) {
      iVar7 = 0;
      do {
        pvVar2 = (void *)FUN_004927f0(&DAT_005a7b50,
                                      *(int *)(*(int *)((int)this + 0x4c) + 0xc + iVar7));
        if ((pvVar2 != (void *)0x0) &&
           (iVar3 = FUN_0046cab0(pvVar2,param_4,param_1,param_2), iVar3 != -1)) {
          *param_3 = iVar3;
          return pvVar2;
        }
        pvVar2 = (void *)FUN_005005f0(&DAT_00584ae8,
                                      *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar7));
        if ((pvVar2 != (void *)0x0) &&
           (pvVar2 = FUN_0048dab0(pvVar2,param_1,param_2,param_3,param_4), pvVar2 != (void *)0x0)) {
          return pvVar2;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x2c;
      } while (iVar6 < *(int *)((int)this + 0x50));
    }
    piVar4 = (int *)FUN_0048ee40((int)this);
    if (piVar4 != (int *)0x0) {
      piVar1 = (int *)*piVar4;
      iVar6 = param_2 - *(int *)((int)this + 0x40);
      iVar7 = param_1 - *(int *)((int)this + 0x3c);
      if ((*(byte *)(piVar1 + 5) & 4) == 0) {
        if ((((iVar7 < 0) || (iVar6 < 0)) || (piVar4[3] <= iVar7)) || (piVar4[4] <= iVar6))
        goto LAB_0048dbbe;
        uVar5 = (uint)*(byte *)((piVar4[2] + iVar6) * piVar1[3] + piVar4[1] + iVar7 + *piVar1);
      }
      else if (((iVar7 < 0) || (iVar6 < 0)) || ((piVar4[3] <= iVar7 || (piVar4[4] <= iVar6)))) {
LAB_0048dbbe:
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)*(ushort *)
                       (*piVar1 + ((piVar4[2] + iVar6) * (piVar1[3] >> 1) + piVar4[1] + iVar7) * 2);
      }
      if (0 < (int)uVar5) {
        return (void *)0x0;
      }
    }
    if ((*(byte *)((int)this + 4) & 4) == 0) {
      return (void *)0x0;
    }
    this = *(void **)this;
    if (this == (void *)0x0) {
      return (void *)0x0;
    }
  } while( true );
}


