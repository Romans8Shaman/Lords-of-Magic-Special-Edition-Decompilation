
int __thiscall FUN_0043e910(void *this,void *param_1,uint param_2,int *param_3)

{
  short sVar1;
  undefined4 uVar2;
  void *this_00;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_4;
  
  this_00 = param_1;
  if (*(int *)((int)this + 0x4c) < 0) {
    return in_EAX;
  }
  if (*(int *)((int)this + 0x58) != 0xd) {
    if (*(int *)((int)this + 0x58) == 0xe) {
      return 0xe;
    }
    uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x80),3);
    iVar5 = 0;
    if ((uVar3 != 0) && (*(int *)(uVar3 + 0x68) == *(int *)((int)this + 0x4c))) {
      iVar5 = *(int *)(uVar3 + 0xd4);
    }
    iVar7 = *(int *)((int)this + 0x5c);
    if (iVar5 <= iVar7) {
      return iVar7;
    }
    iVar5 = FUN_0043e820(this,&local_4,*(int *)((int)this + 0x58),iVar7 + 1,
                         *(int *)((int)this + 0x4c));
    if (iVar5 == 0) {
      return 0;
    }
    sVar1 = *(short *)((int)this + 0x56);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0x50);
      iVar7 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar7;
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar7 * 8) = (int)sVar1;
    }
    uVar2 = *(undefined4 *)((int)this + 0x58);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0x50);
      iVar7 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar7;
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar2;
    }
    iVar5 = *(int *)((int)this + 0x5c);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x50);
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5 + 1;
    }
    iVar5 = FUN_004d05e0(param_1,param_2,param_3);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
    return iVar5;
  }
  uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x78),3);
  uVar4 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x7c),3);
  iVar5 = FUN_0043de80(this,0xf);
  if (iVar5 < 0) {
    if ((uVar3 != 0) && (iVar5 = *(int *)(uVar3 + 0x80), iVar5 == *(short *)((int)this + 0x56))) {
      if (*(int *)((int)param_1 + 0x54) == 0) {
        FUN_00404ab0(param_1,3);
      }
      else {
        iVar7 = *(int *)((int)param_1 + 0x50);
        iVar6 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar6;
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5;
      }
      if (*(int *)((int)param_1 + 0x54) == 0) {
        FUN_00404ab0(param_1,3);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x50);
        iVar7 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar7;
        *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
        *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 0xf;
      }
      if (*(int *)((int)param_1 + 0x54) == 0) {
        FUN_00404ab0(param_1,3);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x50);
        iVar7 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar7;
        *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
        *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 1;
      }
      FUN_004d05e0(param_1,param_2,param_3);
      iVar5 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    if ((uVar4 == 0) || (iVar5 = *(int *)(uVar4 + 0x80), iVar5 != *(short *)((int)this + 0x56)))
    goto LAB_0043ec5f;
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x50);
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0x50);
      iVar7 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar7;
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 0xf;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0x50);
      iVar7 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar7;
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 1;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    iVar5 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
  }
  else {
    uVar8 = FUN_00482ac0(&DAT_005aa12c,iVar5,2);
    if (2 < *(int *)(uVar8 + 0x5c)) goto LAB_0043ec5f;
    if ((uVar3 != 0) && (iVar5 = *(int *)(uVar3 + 0x80), iVar5 == *(short *)((int)this + 0x56))) {
      if (*(int *)((int)param_1 + 0x54) == 0) {
        FUN_00404ab0(param_1,3);
      }
      else {
        iVar7 = *(int *)((int)param_1 + 0x50);
        iVar6 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar6;
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5;
      }
      if (*(int *)((int)param_1 + 0x54) == 0) {
        FUN_00404ab0(param_1,3);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x50);
        iVar7 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar7;
        *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
        *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 0xf;
      }
      iVar5 = *(int *)(uVar8 + 0x5c);
      if (*(int *)((int)param_1 + 0x54) == 0) {
        FUN_00404ab0(param_1,3);
      }
      else {
        iVar7 = *(int *)((int)param_1 + 0x50);
        iVar6 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar6;
        *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
        *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5 + 1;
      }
      FUN_004d05e0(param_1,param_2,param_3);
      iVar5 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    if ((uVar4 == 0) || (iVar5 = *(int *)(uVar4 + 0x80), iVar5 != *(short *)((int)this + 0x56)))
    goto LAB_0043ec5f;
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x50);
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5;
    }
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0x50);
      iVar7 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar7;
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 0xf;
    }
    iVar5 = *(int *)(uVar8 + 0x5c);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      FUN_00404ab0(param_1,3);
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x50);
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar6 * 8) = iVar5 + 1;
    }
    FUN_004d05e0(param_1,param_2,param_3);
    iVar5 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
  }
  if (iVar5 != 0) {
    return iVar5;
  }
LAB_0043ec5f:
  uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x80),3);
  iVar5 = 0;
  if (uVar3 != 0) {
    iVar7 = FUN_0043de80(this,9);
    iVar6 = FUN_0043de80(this,10);
    iVar5 = FUN_0043de80(this,0xc);
    if ((((iVar7 < 0) && (iVar6 < 0)) && (iVar5 < 0)) &&
       (iVar7 = *(int *)((int)this + 0x48), iVar7 != 0)) {
      iVar5 = FUN_00525fc0((int *)(iVar7 + 0xc4 + *(int *)(iVar7 + 0x50) * 0x4c));
      if (iVar5 == 0) {
        param_1 = (void *)0x9;
      }
      else if (iVar5 == 1) {
        param_1 = (void *)0xa;
      }
      else {
        if (iVar5 + -2 != 0) {
          return iVar5 + -2;
        }
        param_1 = (void *)0xc;
      }
      iVar7 = FUN_0043e820(this,&local_4,(int)param_1,1,*(int *)((int)this + 0x4c));
      iVar5 = 0;
      if (iVar7 != 0) {
        uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x78),3);
        uVar4 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x7c),3);
        iVar5 = 0;
        if (((uVar3 != 0) && (*(int *)(uVar3 + 0x68) == *(int *)((int)this + 0x4c))) &&
           (0 < *(int *)(uVar3 + 0xd4))) {
          iVar5 = *(int *)(uVar3 + 0xd4);
        }
        if (((uVar4 != 0) && (*(int *)(uVar4 + 0x68) == *(int *)((int)this + 0x4c))) &&
           (iVar5 < *(int *)(uVar4 + 0xd4))) {
          iVar5 = *(int *)(uVar4 + 0xd4);
        }
        if (0 < iVar5) {
          if (uVar3 != 0) {
            uVar2 = *(undefined4 *)(uVar3 + 0x80);
            if (*(int *)((int)this_00 + 0x54) == 0) {
              FUN_00404ab0(this_00,3);
            }
            else {
              iVar5 = *(int *)((int)this_00 + 0x50);
              iVar7 = *(int *)((int)this_00 + 0x54) + -1;
              *(int *)((int)this_00 + 0x54) = iVar7;
              *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
              *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar2;
            }
            if (*(int *)((int)this_00 + 0x54) == 0) {
              FUN_00404ab0(this_00,3);
            }
            else {
              iVar5 = *(int *)((int)this_00 + 0x50);
              iVar7 = *(int *)((int)this_00 + 0x54) + -1;
              *(int *)((int)this_00 + 0x54) = iVar7;
              *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
              *(void **)(iVar5 + 4 + iVar7 * 8) = param_1;
            }
            if (*(int *)((int)this_00 + 0x54) == 0) {
              FUN_00404ab0(this_00,3);
            }
            else {
              iVar5 = *(int *)((int)this_00 + 0x50);
              iVar7 = *(int *)((int)this_00 + 0x54) + -1;
              *(int *)((int)this_00 + 0x54) = iVar7;
              *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
              *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 1;
            }
            FUN_004d05e0(this_00,param_2,param_3);
            iVar7 = *(int *)((int)this_00 + 0x6c);
            *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
            iVar5 = 0;
            if (iVar7 != 0) {
              return iVar7;
            }
          }
          if (uVar4 != 0) {
            uVar2 = *(undefined4 *)(uVar4 + 0x80);
            if (*(int *)((int)this_00 + 0x54) == 0) {
              FUN_00404ab0(this_00,3);
            }
            else {
              iVar5 = *(int *)((int)this_00 + 0x50);
              iVar7 = *(int *)((int)this_00 + 0x54) + -1;
              *(int *)((int)this_00 + 0x54) = iVar7;
              *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
              *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar2;
            }
            if (*(int *)((int)this_00 + 0x54) == 0) {
              FUN_00404ab0(this_00,3);
            }
            else {
              iVar5 = *(int *)((int)this_00 + 0x50);
              iVar7 = *(int *)((int)this_00 + 0x54) + -1;
              *(int *)((int)this_00 + 0x54) = iVar7;
              *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
              *(void **)(iVar5 + 4 + iVar7 * 8) = param_1;
            }
            if (*(int *)((int)this_00 + 0x54) == 0) {
              FUN_00404ab0(this_00,3);
            }
            else {
              iVar5 = *(int *)((int)this_00 + 0x50);
              iVar7 = *(int *)((int)this_00 + 0x54) + -1;
              *(int *)((int)this_00 + 0x54) = iVar7;
              *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
              *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = 1;
            }
            FUN_004d05e0(this_00,param_2,param_3);
            iVar5 = *(int *)((int)this_00 + 0x6c);
            *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
            return iVar5;
          }
        }
      }
    }
  }
  return iVar5;
}


