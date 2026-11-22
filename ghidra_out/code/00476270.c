
undefined4 __thiscall FUN_00476270(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_28;
  int local_24;
  
  iVar5 = param_3;
LAB_0047627d:
  do {
    local_24 = 0;
    local_28 = 0;
    while( true ) {
      if (*(int *)this <= local_28) {
        if (*(int *)this < *(int *)((int)this + 4)) {
          piVar7 = (int *)(*(int *)((int)this + 0x10) + *(int *)this * 0x10);
          *piVar7 = param_1;
          piVar7[1] = param_2;
          piVar7[2] = iVar5;
          piVar7[3] = param_4;
          *(int *)this = *(int *)this + 1;
          *(int *)((int)this + 8) =
               *(int *)((int)this + 8) + ((iVar5 - param_1) + 1) * ((param_4 - param_2) + 1);
          return 1;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        return 0;
      }
      piVar7 = (int *)(*(int *)((int)this + 0x10) + local_24);
      iVar6 = *(int *)(*(int *)((int)this + 0x10) + local_24);
      if (((iVar6 == param_1) && (piVar7[2] == iVar5)) &&
         ((piVar7[1] == param_4 + 1 || (piVar7[3] == param_2 + -1)))) {
        iVar3 = *(int *)((int)this + 0x10) + local_28 * 0x10;
        iVar6 = *(int *)(iVar3 + 4);
        if (iVar6 < param_2) {
          param_2 = iVar6;
        }
        iVar6 = *(int *)(iVar3 + 0xc);
        if (iVar6 < param_4) goto LAB_004763f3;
        FUN_00477c10(this,local_28);
        param_4 = iVar6;
        goto LAB_0047627d;
      }
      iVar3 = piVar7[1];
      if (((iVar3 == param_2) && (piVar7[3] == param_4)) &&
         ((iVar6 == iVar5 + 1 || (piVar7[2] == param_1 + -1)))) break;
      if (iVar6 <= iVar5) {
        iVar1 = piVar7[2];
        if ((param_1 <= iVar1) && (iVar3 <= param_4)) {
          iVar2 = piVar7[3];
          iVar5 = param_3;
          if (param_2 <= iVar2) {
            if (param_1 < iVar6) {
LAB_00476342:
              if (((param_3 < iVar1) || (iVar3 < param_2)) || (param_4 < iVar2)) {
                if ((iVar6 != param_1) || (iVar1 != param_3)) goto LAB_004767f8;
                iVar3 = local_28 * 0x10 + *(int *)((int)this + 0x10);
                iVar6 = *(int *)(iVar3 + 4);
                if (iVar6 < param_2) {
                  param_2 = iVar6;
                }
                iVar6 = *(int *)(iVar3 + 0xc);
                if (iVar6 < param_4) goto LAB_0047646a;
                FUN_00477c10(this,local_28);
                param_4 = iVar6;
                goto LAB_0047627d;
              }
              FUN_00477c10(this,local_28);
              local_28 = local_28 + -1;
              local_24 = local_24 + -0x10;
            }
            else {
              if (((param_3 <= iVar1) && (iVar3 <= param_2)) && (param_4 <= iVar2)) {
                return 1;
              }
              if (param_1 <= iVar6) goto LAB_00476342;
LAB_004767f8:
              if ((iVar3 == param_2) && (iVar2 == param_4)) {
                piVar7 = (int *)(local_28 * 0x10 + *(int *)((int)this + 0x10));
                iVar5 = *piVar7;
                if (iVar5 < param_1) {
                  param_1 = iVar5;
                }
                iVar5 = piVar7[2];
                if (param_3 <= iVar5) {
                  param_3 = iVar5;
                }
LAB_0047646a:
                FUN_00477c10(this,local_28);
                iVar5 = param_3;
                goto LAB_0047627d;
              }
              iVar4 = param_4;
              if ((param_1 < iVar6) || (iVar1 < param_3)) {
                if (param_2 < iVar3) {
LAB_004768ba:
                  if (param_4 < iVar2) {
                    if (iVar6 < param_1) {
                      iVar6 = *(int *)((int)this + 0x10) + local_28 * 0x10;
                      iVar5 = *(int *)(iVar6 + 4);
                      iVar4 = iVar5 + -1;
                      iVar5 = FUN_00476270(this,*(int *)(iVar6 + 8) + 1,iVar5,param_3,param_4);
                      if (iVar5 == 0) {
                        return 0;
                      }
LAB_0047676a:
                      iVar5 = FUN_00476270(this,param_1,param_2,param_3,iVar4);
                      return (uint)(iVar5 != 0);
                    }
                    if (param_3 < iVar1) {
                      piVar7 = (int *)(*(int *)((int)this + 0x10) + local_28 * 0x10);
                      iVar5 = piVar7[1];
                      iVar4 = iVar5 + -1;
                      iVar5 = FUN_00476270(this,param_1,iVar5,*piVar7 + -1,param_4);
                      if (iVar5 == 0) {
                        return 0;
                      }
                      goto LAB_0047676a;
                    }
                    *(int *)((int)this + 8) =
                         *(int *)((int)this + 8) - ((iVar1 - iVar6) + 1) * ((iVar2 - iVar3) + 1);
                    piVar7[1] = param_4 + 1;
                  }
                  else {
                    if (iVar6 < param_1) {
                      *(int *)((int)this + 8) =
                           *(int *)((int)this + 8) - ((iVar1 - iVar6) + 1) * ((iVar2 - iVar3) + 1);
                      piVar7[2] = param_1 + -1;
                      piVar7 = (int *)(*(int *)((int)this + 0x10) + local_24);
                      *(int *)((int)this + 8) =
                           *(int *)((int)this + 8) +
                           ((piVar7[3] - piVar7[1]) + 1) * ((piVar7[2] - *piVar7) + 1);
                      goto LAB_00476380;
                    }
                    *(int *)((int)this + 8) =
                         *(int *)((int)this + 8) - ((iVar1 - iVar6) + 1) * ((iVar2 - iVar3) + 1);
                    *piVar7 = param_3 + 1;
                  }
                }
                else {
                  if (param_4 <= iVar2) {
                    if ((param_1 < iVar6) && (iVar1 < param_3)) {
                      piVar7 = (int *)(*(int *)((int)this + 0x10) + local_28 * 0x10);
                      iVar5 = piVar7[2];
                      iVar6 = FUN_00476270(this,param_1,param_2,*piVar7 + -1,param_4);
                      if (iVar6 == 0) {
                        return 0;
                      }
                      iVar5 = FUN_00476270(this,iVar5 + 1,param_2,param_3,param_4);
                      return (uint)(iVar5 != 0);
                    }
                    if (param_1 < iVar6) {
                      param_3 = iVar6 + -1;
                      iVar5 = param_3;
                    }
                    else {
                      param_1 = iVar1 + 1;
                    }
                    goto LAB_00476380;
                  }
                  if (param_2 <= iVar3) goto LAB_004768ba;
                  if (iVar6 < param_1) {
                    iVar6 = *(int *)((int)this + 0x10) + local_28 * 0x10;
                    iVar5 = *(int *)(iVar6 + 0xc);
                    iVar6 = FUN_00476270(this,*(int *)(iVar6 + 8) + 1,param_2,param_3,iVar5);
                    if (iVar6 == 0) {
                      return 0;
                    }
                    param_2 = iVar5 + 1;
                    goto LAB_0047676a;
                  }
                  if (param_3 < iVar1) {
                    piVar7 = (int *)(*(int *)((int)this + 0x10) + local_28 * 0x10);
                    iVar5 = piVar7[3];
                    iVar6 = FUN_00476270(this,param_1,param_2,*piVar7 + -1,iVar5);
                    if (iVar6 == 0) {
                      return 0;
                    }
                    param_2 = iVar5 + 1;
                    goto LAB_0047676a;
                  }
                  *(int *)((int)this + 8) =
                       *(int *)((int)this + 8) - ((iVar1 - iVar6) + 1) * ((iVar2 - iVar3) + 1);
                  piVar7[3] = param_2 + -1;
                }
                piVar7 = (int *)(*(int *)((int)this + 0x10) + local_24);
                *(int *)((int)this + 8) =
                     *(int *)((int)this + 8) +
                     ((piVar7[3] - piVar7[1]) + 1) * ((piVar7[2] - *piVar7) + 1);
              }
              else {
                if (param_2 < iVar3) {
                  if (iVar2 < param_4) {
                    iVar6 = *(int *)((int)this + 0x10) + local_28 * 0x10;
                    iVar5 = *(int *)(iVar6 + 0xc);
                    iVar6 = FUN_00476270(this,param_1,param_2,param_3,*(int *)(iVar6 + 4) + -1);
                    if (iVar6 == 0) {
                      return 0;
                    }
                    param_2 = iVar5 + 1;
                    goto LAB_0047676a;
                  }
                  if (param_2 < iVar3) {
                    param_4 = iVar3 + -1;
                    goto LAB_00476380;
                  }
                }
                param_2 = iVar2 + 1;
              }
            }
          }
        }
      }
LAB_00476380:
      local_28 = local_28 + 1;
      local_24 = local_24 + 0x10;
    }
    piVar7 = (int *)(*(int *)((int)this + 0x10) + local_28 * 0x10);
    iVar6 = *piVar7;
    if (iVar6 < param_1) {
      param_1 = iVar6;
    }
    iVar6 = piVar7[2];
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
      param_3 = iVar6;
    }
LAB_004763f3:
    FUN_00477c10(this,local_28);
  } while( true );
}


