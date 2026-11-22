
undefined4 __thiscall FUN_00508c70(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c1ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00508b00(this);
  *(int *)((int)this + 0x14) = param_1;
  *(int *)((int)this + 0x2c) = param_2;
  *(int *)((int)this + 8) = param_3;
  if (((0 < param_3) && (0 < param_1)) && (0 < param_2)) {
    iVar1 = Ordinal_401(param_3 * 0x2c,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 == 0) {
      FUN_00508b00(this);
    }
    else {
      iVar1 = 0;
      if (0 < *(int *)((int)this + 8)) {
        iVar5 = 0;
        do {
          iVar1 = iVar1 + 1;
          *(undefined4 *)(iVar5 + *(int *)((int)this + 0xc)) = 0;
          iVar5 = iVar5 + 0x2c;
        } while (iVar1 < *(int *)((int)this + 8));
      }
      iVar1 = Ordinal_401(*(int *)((int)this + 0x2c) << 2,s_C__lomse_source_storm_h_00555130,0x3fa,0
                         );
      *(int *)((int)this + 0x18) = iVar1;
      if (iVar1 == 0) {
        FUN_00508b00(this);
      }
      else {
        iVar1 = Ordinal_401(*(int *)((int)this + 0x2c) << 5,s_C__lomse_source_storm_h_00555130,0x3fa
                            ,0);
        *(int *)((int)this + 0x24) = iVar1;
        if (iVar1 == 0) {
          FUN_00508b00(this);
        }
        else {
          *(undefined4 *)((int)this + 0x30) = 0;
          iVar1 = Ordinal_401(*(int *)((int)this + 0x2c) << 2,s_C__lomse_source_storm_h_00555130,
                              0x3fa,0);
          *(int *)((int)this + 0x34) = iVar1;
          if (iVar1 == 0) {
            FUN_00508b00(this);
          }
          else {
            iVar1 = Ordinal_401(*(int *)((int)this + 0x2c) << 2,s_C__lomse_source_storm_h_00555130,
                                0x3fa,0);
            *(int *)((int)this + 0x38) = iVar1;
            if (iVar1 == 0) {
              FUN_00508b00(this);
            }
            else {
              iVar1 = Ordinal_401(*(int *)((int)this + 0x14) << 2,s_C__lomse_source_storm_h_00555130
                                  ,0x3fa,0);
              *(int *)((int)this + 0x1c) = iVar1;
              if (iVar1 == 0) {
                FUN_00508b00(this);
              }
              else {
                iVar1 = Ordinal_401(*(int *)((int)this + 0x14) << 2,
                                    s_C__lomse_source_storm_h_00555130,0x3fa,0);
                *(int *)((int)this + 0x20) = iVar1;
                if (iVar1 == 0) {
                  FUN_00508b00(this);
                }
                else {
                  iVar1 = Ordinal_401(*(int *)((int)this + 0x14) * 0x58,
                                      s_C__lomse_source_storm_h_00555130,0x3fa,0);
                  *(int *)((int)this + 0x10) = iVar1;
                  if (iVar1 == 0) {
                    FUN_00508b00(this);
                  }
                  else {
                    iVar1 = *(int *)((int)this + 0x2c);
                    piVar2 = (int *)Ordinal_401(iVar1 * 0x10 + 4,s_C__lomse_source_storm_h_00555130,
                                                0x3fa,0);
                    uStack_4 = 0;
                    if (piVar2 == (int *)0x0) {
                      piVar3 = (int *)0x0;
                    }
                    else {
                      piVar3 = piVar2 + 1;
                      *piVar2 = iVar1;
                      FUN_00539ff0(piVar3,0x10,iVar1,&LAB_00474de0,FUN_0046ba20);
                    }
                    uStack_4 = 0xffffffff;
                    *(int **)((int)this + 0x154) = piVar3;
                    if (piVar3 != (int *)0x0) {
                      FUN_005095a0((int)this);
                      iVar1 = 0;
                      if (0 < *(int *)((int)this + 0x2c)) {
                        do {
                          iVar1 = iVar1 + 1;
                          *(undefined4 *)(*(int *)((int)this + 0x18) + -4 + iVar1 * 4) = 0xffffffff;
                        } while (iVar1 < *(int *)((int)this + 0x2c));
                      }
                      iVar1 = 0;
                      if (0 < *(int *)((int)this + 0x14)) {
                        iVar5 = 0;
                        do {
                          *(undefined4 *)(iVar5 + *(int *)((int)this + 0x10)) = 0;
                          iVar6 = 8;
                          *(undefined1 *)(iVar5 + 4 + *(int *)((int)this + 0x10)) = 0;
                          iVar4 = iVar5 + 0x38;
                          do {
                            iVar6 = iVar6 + -1;
                            *(undefined4 *)(iVar4 + *(int *)((int)this + 0x10)) = 0;
                            iVar4 = iVar4 + 4;
                          } while (iVar6 != 0);
                          iVar1 = iVar1 + 1;
                          iVar5 = iVar5 + 0x58;
                        } while (iVar1 < *(int *)((int)this + 0x14));
                      }
                      *(undefined4 *)this = 0;
                      ExceptionList = local_c;
                      return 1;
                    }
                    FUN_00508b00(this);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


