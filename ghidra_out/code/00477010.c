
undefined4 __thiscall FUN_00477010(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_34;
  
  if (param_3 < param_1) {
    return 1;
  }
LAB_00477033:
  if (param_4 < param_2) {
    return 1;
  }
  iVar3 = 0;
  local_34 = 0;
  do {
    if (*(int *)this <= iVar3) {
      return 0;
    }
    piVar9 = (int *)(local_34 + *(int *)((int)this + 0x10));
    iVar6 = *piVar9;
    if ((((iVar6 <= param_3) && (iVar8 = piVar9[2], param_1 <= iVar8)) &&
        (iVar1 = piVar9[1], iVar1 <= param_4)) && (iVar7 = piVar9[3], param_2 <= iVar7)) {
      if (param_1 < iVar6) {
LAB_004770ad:
        if (((iVar8 <= param_3) && (param_2 <= iVar1)) && (iVar7 <= param_4)) {
          piVar9 = (int *)(iVar3 * 0x10 + *(int *)((int)this + 0x10));
          iVar3 = piVar9[1];
          iVar6 = *piVar9;
          iVar8 = piVar9[2];
          iVar1 = *piVar9;
          iVar7 = piVar9[2];
          iVar5 = piVar9[2];
          iVar2 = piVar9[3];
          iVar4 = FUN_00477010(this,param_1,param_2,*piVar9 + -1,param_4);
          if (((iVar4 == 0) ||
              (iVar5 = FUN_00477010(this,iVar5 + 1,param_2,param_3,param_4), iVar5 == 0)) ||
             (iVar3 = FUN_00477010(this,iVar6,param_2,iVar8,iVar3 + -1), iVar3 == 0)) {
            return 0;
          }
          iVar3 = FUN_00477010(this,iVar1,iVar2 + 1,iVar7,param_4);
          if (iVar3 == 0) {
            return 0;
          }
          return 1;
        }
        if ((iVar6 == param_1) && (iVar8 == param_3)) {
          iVar6 = iVar3 * 0x10 + *(int *)((int)this + 0x10);
          iVar3 = *(int *)(iVar6 + 4);
          if (iVar3 < param_2) {
            param_2 = *(int *)(iVar6 + 0xc) + 1;
          }
          else {
            param_4 = iVar3 + -1;
          }
          goto LAB_00477195;
        }
      }
      else {
        if (((param_3 <= iVar8) && (iVar1 <= param_2)) && (param_4 <= iVar7)) {
          return 1;
        }
        if (param_1 <= iVar6) goto LAB_004770ad;
      }
      if ((iVar1 == param_2) && (iVar7 == param_4)) break;
      if ((param_1 < iVar6) || (iVar8 < param_3)) {
        if ((param_2 < iVar1) || (iVar7 < param_4)) {
          piVar9 = (int *)(iVar3 * 0x10 + *(int *)((int)this + 0x10));
          iVar3 = piVar9[1];
          if (param_2 <= iVar3) {
            iVar6 = piVar9[3];
            iVar8 = *piVar9;
            if (param_4 < iVar6) {
              if (iVar8 < param_1) {
                iVar6 = FUN_00477010(this,piVar9[2] + 1,iVar3,param_3,param_4);
                if (iVar6 == 0) {
                  return 0;
                }
              }
              else {
                iVar6 = piVar9[2];
                if (iVar6 <= param_3) {
                  iVar1 = *piVar9;
                  iVar7 = piVar9[2];
                  iVar8 = FUN_00477010(this,param_1,param_2,iVar8 + -1,param_4);
                  if (iVar8 == 0) {
                    return 0;
                  }
                  iVar6 = FUN_00477010(this,iVar6 + 1,param_2,param_3,param_4);
                  if (iVar6 == 0) {
                    return 0;
                  }
                  iVar3 = FUN_00477010(this,iVar1,param_2,iVar7,iVar3 + -1);
                  return (uint)(iVar3 != 0);
                }
                iVar6 = FUN_00477010(this,param_1,iVar3,iVar8 + -1,param_4);
                if (iVar6 == 0) {
                  return 0;
                }
              }
              iVar3 = FUN_00477010(this,param_1,param_2,param_3,iVar3 + -1);
              return (uint)(iVar3 != 0);
            }
            if (iVar8 < param_1) {
              iVar8 = piVar9[1];
              iVar1 = piVar9[3];
              iVar7 = piVar9[2];
              iVar3 = FUN_00477010(this,param_1,param_2,param_3,iVar3 + -1);
              if (iVar3 == 0) {
                return 0;
              }
              iVar3 = FUN_00477010(this,param_1,iVar6 + 1,param_3,param_4);
              if (iVar3 == 0) {
                return 0;
              }
              iVar3 = FUN_00477010(this,iVar7 + 1,iVar8,param_3,iVar1);
              return (uint)(iVar3 != 0);
            }
            iVar1 = piVar9[1];
            iVar7 = piVar9[3];
            iVar3 = FUN_00477010(this,param_1,param_2,param_3,iVar3 + -1);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = FUN_00477010(this,param_1,iVar6 + 1,param_3,param_4);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = FUN_00477010(this,param_1,iVar1,iVar8 + -1,iVar7);
            return (uint)(iVar3 != 0);
          }
          if (param_1 <= *piVar9) {
            if (param_3 < piVar9[2]) {
              iVar3 = piVar9[3];
              iVar6 = FUN_00477010(this,param_1,param_2,*piVar9 + -1,iVar3);
              if (iVar6 == 0) {
                return 0;
              }
              iVar3 = FUN_00477010(this,param_1,iVar3 + 1,param_3,param_4);
              return (uint)(iVar3 != 0);
            }
            iVar3 = *piVar9;
            iVar6 = piVar9[2];
            iVar8 = piVar9[2];
            iVar1 = piVar9[3];
            iVar7 = FUN_00477010(this,param_1,param_2,*piVar9 + -1,param_4);
            if (iVar7 == 0) {
              return 0;
            }
            iVar8 = FUN_00477010(this,iVar8 + 1,param_2,param_3,param_4);
            if (iVar8 == 0) {
              return 0;
            }
            iVar3 = FUN_00477010(this,iVar3,iVar1 + 1,iVar6,param_4);
            return (uint)(iVar3 != 0);
          }
          iVar3 = piVar9[3] + 1;
          iVar6 = FUN_00477010(this,piVar9[2] + 1,param_2,param_3,piVar9[3]);
          if (iVar6 == 0) {
            return 0;
          }
LAB_00477417:
          iVar3 = FUN_00477010(this,param_1,iVar3,param_3,param_4);
          return (uint)(iVar3 != 0);
        }
        if (param_1 < iVar6) {
          if (iVar8 < param_3) {
            piVar9 = (int *)(iVar3 * 0x10 + *(int *)((int)this + 0x10));
            iVar3 = piVar9[2];
            iVar6 = FUN_00477010(this,param_1,param_2,*piVar9 + -1,param_4);
            if (iVar6 == 0) {
              return 0;
            }
            param_1 = iVar3 + 1;
            iVar3 = param_2;
            goto LAB_00477417;
          }
          if (param_1 < iVar6) {
            param_3 = iVar6 + -1;
            goto LAB_00477147;
          }
        }
        param_1 = iVar8 + 1;
      }
      else {
        if (param_2 < iVar1) {
          if (iVar7 < param_4) {
            iVar6 = iVar3 * 0x10 + *(int *)((int)this + 0x10);
            iVar3 = *(int *)(iVar6 + 0xc);
            iVar6 = FUN_00477010(this,param_1,param_2,param_3,*(int *)(iVar6 + 4) + -1);
            if (iVar6 == 0) {
              return 0;
            }
            iVar3 = FUN_00477010(this,param_1,iVar3 + 1,param_3,param_4);
            return (uint)(iVar3 != 0);
          }
          if (param_2 < iVar1) {
            param_4 = iVar1 + -1;
            goto LAB_00477147;
          }
        }
        param_2 = iVar7 + 1;
      }
    }
LAB_00477147:
    iVar3 = iVar3 + 1;
    local_34 = local_34 + 0x10;
  } while( true );
  piVar9 = (int *)(iVar3 * 0x10 + *(int *)((int)this + 0x10));
  iVar3 = *piVar9;
  if (iVar3 < param_1) {
    param_1 = piVar9[2] + 1;
  }
  else {
    param_3 = iVar3 + -1;
  }
LAB_00477195:
  if (param_3 < param_1) {
    return 1;
  }
  goto LAB_00477033;
}


