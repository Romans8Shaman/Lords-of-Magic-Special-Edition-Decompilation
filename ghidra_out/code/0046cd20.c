
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0046cd20(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc))) &&
     (iVar3 = *(int *)((int)this + 4), iVar3 != 0)) {
    iVar6 = param_1 * 0x30;
    if ((0 < *(int *)(iVar6 + 0x28 + iVar3)) &&
       (uVar1 = *(uint *)(iVar6 + 0x14 + iVar3), (uVar1 & 1) == 0)) {
      if ((uVar1 & 0x20) != 0) {
        DAT_00583120 = 1;
        *(int *)((int)this + 0x38) = param_1;
        FUN_0046d3c0(this,iVar6 + 0x1c + *(int *)((int)this + 4),param_1,param_1);
        *(undefined4 *)((int)this + 0x48) = 1;
        return 1;
      }
      piVar2 = (int *)(iVar6 + 0x1c + iVar3);
      *(int *)((int)this + 0x38) = param_1;
      *(int *)((int)this + 0x28) = *piVar2;
      *(int *)((int)this + 0x2c) = piVar2[1];
      *(int *)((int)this + 0x30) = piVar2[2];
      *(int *)((int)this + 0x34) = piVar2[3];
      _DAT_00583124 = GetTickCount();
      DAT_0058311c = param_3;
      DAT_00583118 = param_2;
      DAT_00583120 = 0;
      iVar3 = iVar6 + *(int *)((int)this + 4);
      if ((*(byte *)(iVar6 + 0x14 + *(int *)((int)this + 4)) & 4) == 0) {
        param_1 = 1;
        *(undefined4 *)((int)this + 0x34) = 1;
      }
      else {
        param_1 = *(int *)((int)this + 0x34);
      }
      if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
        *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) - param_1;
        *(undefined4 *)((int)this + 0x48) = 1;
      }
      piVar2 = (int *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0x28));
      if (piVar2 != (int *)0x0) {
        iVar3 = FUN_00492de0(&DAT_005a7b50,*(int *)((int)this + 8));
        if (((*(byte *)((int)this + 0x44) & 1) == 0) || (iVar3 == 0)) {
          local_24 = 0;
        }
        else {
          local_24 = *(int *)(iVar3 + 8);
        }
        piVar4 = (int *)(*(int *)((int)this + 4) + iVar6);
        FUN_00491910(piVar2,&local_20,*piVar4,piVar4[1]);
        local_8 = local_18;
        local_10 = local_20;
        local_c = local_1c;
        local_4 = local_14;
        if (*piVar2 == 0xf) {
          FUN_00493a00((void *)piVar2[1],&local_20,*(int *)(iVar6 + *(int *)((int)this + 4)),
                       *(int *)(iVar6 + 4 + *(int *)((int)this + 4)));
          iVar3 = (local_18 - local_20) + 1;
          iVar5 = (local_14 - local_1c) + 1;
        }
        else {
          iVar3 = FUN_004918d0(piVar2);
          iVar5 = FUN_004918f0(piVar2);
        }
        piVar2 = (int *)(iVar6 + *(int *)((int)this + 4));
        FUN_00472700(&DAT_005a9e04,this,
                     ((((*(int *)((int)this + 0x3c) - (iVar3 >> 1)) + (piVar2[2] >> 1)) - param_2) -
                     local_20) + local_10 + *piVar2,
                     ((((*(int *)((int)this + 0x40) - (local_24 + iVar5 >> 1)) + (piVar2[3] >> 1)) -
                      param_3) - local_1c) + local_c + piVar2[1]);
      }
      FUN_0046d3c0(this,(int)this + 0x28,*(undefined4 *)((int)this + 0x38),-param_1);
      return 1;
    }
  }
  return 0;
}


