
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0040a0e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [8];
  
  piVar7 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_3c = 0;
  local_44 = -1;
  local_38 = 0;
  local_24 = DAT_005ae98c;
  iVar5 = DAT_005ae998;
  iVar1 = 0;
  if (DAT_005ae998 <= DAT_005ae98c) {
    do {
      iVar1 = FUN_004f6000(&DAT_005ae974,iVar5);
      if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) &&
          (*(int *)(iVar1 + 0x48) != *(int *)(param_1 + 0x48))) &&
         (iVar2 = FUN_00407d50(iVar1), iVar2 == 0)) {
        local_38 = local_38 + 1;
        fVar8 = FUN_004a89d0(0x5ae958,*(int *)(param_1 + 0x1c),*(int *)(iVar1 + 0x1c));
        if ((NAN(fVar8) || NAN((float10)_DAT_0054d38c)) || fVar8 <= (float10)_DAT_0054d38c) {
          local_40 = 1;
          iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)(param_1 + 0x1c),*(int *)(iVar1 + 0x1c));
          if (local_20[iVar2] == 0) {
            local_20[iVar2] = 1;
            iVar6 = 0;
            do {
              iVar3 = FUN_00409f70(this,*(int *)(param_1 + 0x1c),iVar2,iVar6,&local_2c,&local_28);
              if (((((iVar3 != -1) && (-1 < local_2c)) &&
                   ((local_2c < *(int *)((int)this + 0x6c) &&
                    ((-1 < local_28 && (local_28 < *(int *)((int)this + 0x70))))))) &&
                  (iVar3 = FUN_004a8330(this,iVar3,0), iVar3 != 0)) &&
                 ((iVar4 = FUN_00407d50(iVar3), iVar4 == 0 &&
                  (*(int *)(iVar3 + 0x48) == *(int *)(iVar1 + 0x48))))) {
                local_40 = local_40 + 1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x19);
            if (local_44 == -1) {
              local_44 = *(int *)(iVar1 + 0x28);
              local_3c = local_40;
            }
            else if (local_3c < local_40) {
              local_44 = *(int *)(iVar1 + 0x28);
              local_3c = local_40;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_24);
    iVar1 = local_3c;
  }
  if ((local_44 != -1) && ((iVar1 * 100) / local_38 < 0xf)) {
    local_44 = -1;
  }
  return local_44;
}


