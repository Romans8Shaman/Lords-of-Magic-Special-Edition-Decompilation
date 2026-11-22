
undefined4 __thiscall FUN_00416a90(void *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  void *pvVar7;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puStack_44;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int aiStack_2c [2];
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549478;
  pvStack_c = ExceptionList;
  if ((*(uint *)((int)this + 0x30) & 0x14000400) != 0) {
    *(undefined4 *)((int)this + 0x14) = 1000;
    return 0;
  }
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00420490((int)this);
  if (iVar4 == 0) {
    *(undefined4 *)((int)this + 0x14) = 1000;
    if ((*(uint *)((int)this + 0x30) & 0x200) == 0) {
      ExceptionList = pvStack_c;
      return 0;
    }
    FUN_004166d0(this,param_1,param_2);
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar5 = FUN_004c1cf0((int)this);
  if (((iVar5 != 0) &&
      (uVar6 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b0),0), uVar6 != 0)) &&
     (iVar5 = FUN_004c1d30(uVar6), iVar5 != 0)) {
    ExceptionList = pvStack_c;
    return 0;
  }
  pvVar7 = (void *)((int)this + 0x55c);
  uVar6 = *(int *)((int)this + 0x590) + param_2;
  FUN_004b09d0(pvVar7,(int *)&param_1,(int *)&param_2);
  *(uint *)((int)this + 0x18) = param_2;
  iVar5 = *(int *)((int)this + 0x48);
  *(uint *)((int)this + 0x14) = param_1;
  *(uint *)((int)this + 0x594) = uVar6;
  if ((iVar5 < 0) || (0xf < iVar5)) {
    puStack_44 = (undefined *)0x0;
  }
  else {
    puStack_44 = &DAT_005af194 + iVar5 * 0x1d84;
  }
  if (((DAT_00555870 & 0xf000) != 0) &&
     ((((DAT_00555870 & 0xf000) == 0xf000 ||
       ((((((DAT_00555870 & 0x1000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
          (((DAT_00555870 & 0x2000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
         (((DAT_00555870 & 0x4000) == 0 ||
          (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var,bVar3) != 0)))) &&
        (((DAT_00555870 & 0x8000) == 0 ||
         (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_00,bVar3) == 0)))))) &&
      ((puStack_44 != (undefined *)0x0 && (iVar5 = FUN_00420580((int)this), iVar5 != 0)))))) {
    FUN_0042d800(puStack_44,*(int *)((int)this + 0x28) + DAT_005af134);
  }
  uVar2 = *(undefined4 *)((int)this + 0x38);
  iVar5 = FUN_00420580((int)this);
  if ((((iVar5 != 0) && ((DAT_00555870 & 0xf0000) != 0)) &&
      (((DAT_00555870 & 0xf0000) == 0xf0000 ||
       (((((DAT_00555870 & 0x10000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
         (((DAT_00555870 & 0x20000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
        ((((DAT_00555870 & 0x40000) == 0 ||
          (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_01,bVar3) != 0)) &&
         (((DAT_00555870 & 0x80000) == 0 ||
          (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_02,bVar3) == 0)))))))))) &&
     (*(int *)((int)this + 0x38) < 0)) {
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(puStack_44 + 0x24);
  }
  if ((~*(uint *)((int)this + 0x30) & 0x100) != 0) {
    FUN_0042d9f0((void *)((int)this + 0x568),*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    if (*(void **)((int)this + 0x58c) != (void *)0x0) {
      FUN_0049cd80(*(void **)((int)this + 0x58c),param_1,uVar6,-1,1,iVar4);
    }
    FUN_004b0560(pvVar7,param_1,param_2,*(int *)((int)this + 0x38),iVar4);
    if ((((DAT_00555870 & 0xf000) != 0) &&
        (((DAT_00555870 & 0xf000) == 0xf000 ||
         ((((((DAT_00555870 & 0x1000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
            (((DAT_00555870 & 0x2000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
           (((DAT_00555870 & 0x4000) == 0 ||
            (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_03,bVar3) != 0)))) &&
          (((DAT_00555870 & 0x8000) == 0 ||
           (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_04,bVar3) == 0)))))))) &&
       ((puStack_44 != (undefined *)0x0 && (iVar5 = FUN_00420580((int)this), iVar5 != 0)))) {
      FUN_0042d9f0(puStack_44,*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    }
  }
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 6) || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    FUN_004166d0(this,param_1,param_2);
  }
  FUN_004f68b0(this,param_1,param_2,iVar4,*(void **)((int)this + 0x598));
  if ((~*(uint *)((int)this + 0x30) & 0x100) != 0) {
    FUN_004b05b0(pvVar7,param_1,param_2,*(int *)((int)this + 0x38),iVar4);
    FUN_0042d910((void *)((int)this + 0x568),*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    if (((DAT_00555870 & 0xf000) != 0) &&
       ((((DAT_00555870 & 0xf000) == 0xf000 ||
         ((((((DAT_00555870 & 0x1000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) != 0)) &&
            (((DAT_00555870 & 0x2000) == 0 || ((*(byte *)((int)this + 0x30) & 0x20) == 0)))) &&
           (((DAT_00555870 & 0x4000) == 0 ||
            (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_05,bVar3) != 0)))) &&
          (((DAT_00555870 & 0x8000) == 0 ||
           (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_06,bVar3) == 0)))))) &&
        ((puStack_44 != (undefined *)0x0 && (iVar5 = FUN_00420580((int)this), iVar5 != 0)))))) {
      FUN_0042d910(puStack_44,*(void **)((int)this + 0x2c),param_1,param_2,iVar4);
    }
  }
  *(undefined4 *)((int)this + 0x38) = uVar2;
  if ((~*(uint *)((int)this + 0x30) & 0x100) == 0) {
    ExceptionList = pvStack_c;
    return 1;
  }
  iVar4 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  iVar5 = FUN_00420580((int)this);
  if (iVar5 != 0) {
    if (((DAT_00555870 & 0xf) == 0) ||
       (((DAT_00555870 & 0xf) != 0xf &&
        (((((DAT_00555870 & 1) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) == 0)) ||
          (((DAT_00555870 & 2) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) != 0)))) ||
         ((((DAT_00555870 & 4) != 0 &&
           (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_07,bVar3) == 0)) ||
          (((DAT_00555870 & 8) != 0 &&
           (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_08,bVar3) != 0)))))))))) {
      if (((DAT_00555870 & 0xf0) == 0) ||
         (((DAT_00555870 & 0xf0) != 0xf0 &&
          (((((DAT_00555870 & 0x10) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) == 0)) ||
            (((DAT_00555870 & 0x20) != 0 && ((*(byte *)((int)this + 0x30) & 0x20) != 0)))) ||
           ((((DAT_00555870 & 0x40) != 0 &&
             (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_09,bVar3) == 0)) ||
            (((DAT_00555870 & 0x80) != 0 &&
             (bVar3 = FUN_00416a70((int)this), CONCAT31(extraout_var_10,bVar3) != 0)))))))))) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_004bc430((int)puStack_44);
        FUN_005260e0((void *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4),&iStack_3c);
      }
    }
    else {
      pvVar7 = (void *)FUN_004bc410((int)puStack_44);
      FUN_005260a0((void *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4),&iStack_3c);
    }
    iVar10 = iStack_38;
    iVar5 = iStack_3c;
    if (((pvVar7 == (void *)0x0) &&
        ((uVar6 = *(uint *)((int)this + 0x30), (uVar6 & 2) == 0 || (DAT_005787d8 == (int *)0x0))))
       && (((uVar6 & 0x80) == 0 || (DAT_005787e8 == (int *)0x0)))) {
      if ((uVar6 & 0x20000000) == 0) {
        ExceptionList = pvStack_c;
        return 1;
      }
      if (DAT_005787f8 == (int *)0x0) {
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    FUN_004950c0(aiStack_2c,DAT_00585170);
    uStack_4 = 0;
    if (aiStack_2c[0] != 0) {
      uStack_24 = 0x180;
      if (pvVar7 != (void *)0x0) {
        iVar8 = FUN_004219a0((int)this);
        *(int *)((int)pvVar7 + 0x10) = iVar8;
        FUN_00430730(pvVar7,aiStack_2c,iVar5 + param_1,iVar10 + param_2);
        FUN_00430500(pvVar7,iVar5 + param_1,iVar10 + param_2,1);
        if (((-1 < *(char *)((int)this + 0x5d8)) &&
            (*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) &&
           (pvVar7 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)(puStack_44 + 100)),
           pvVar7 != (void *)0x0)) {
          cVar1 = *(char *)((int)this + 0x5d8);
          if ((cVar1 < '\0') || ('\t' < cVar1)) {
            DAT_0055d6f0 = ' ';
          }
          else {
            DAT_0055d6f0 = cVar1 + '0';
          }
          uVar6 = DAT_005844d0 + iVar5 + param_1;
          iVar10 = DAT_005844d4 + iVar10 + param_2;
          iVar5 = FUN_00491910(pvVar7,&iStack_3c,uVar6,iVar10);
          if (iVar5 != 0) {
            FUN_004935c0(pvVar7,aiStack_2c,uVar6,iVar10,-1,1);
            FUN_00500650(&DAT_00584ae8,iStack_3c,iStack_38,iStack_34,iStack_30);
          }
        }
      }
      if (((*(byte *)((int)this + 0x30) & 2) != 0) && (DAT_005787d8 != (int *)0x0)) {
        if (*DAT_005787d8 != 0) {
          if ((*(byte *)(*DAT_005787d8 + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787d8,DAT_005787e0 + param_1,DAT_005787e4 + param_2,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787d8,DAT_005787e0 + param_1,DAT_005787e4 + param_2,0,1);
          }
        }
        FUN_00500650(&DAT_00584ae8,param_1 + DAT_005787e0,param_2 + DAT_005787e4,
                     DAT_005787d8[3] + -1 + param_1 + DAT_005787e0,
                     DAT_005787d8[4] + -1 + param_2 + DAT_005787e4);
      }
      if (((*(byte *)((int)this + 0x30) & 0x80) != 0) && (DAT_005787e8 != (int *)0x0)) {
        if (*DAT_005787e8 != 0) {
          if ((*(byte *)(*DAT_005787e8 + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787e8,DAT_005787f0 + param_1,DAT_005787f4 + param_2,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787e8,DAT_005787f0 + param_1,DAT_005787f4 + param_2,0,1);
          }
        }
        FUN_00500650(&DAT_00584ae8,param_1 + DAT_005787f0,param_2 + DAT_005787f4,
                     DAT_005787e8[3] + -1 + param_1 + DAT_005787f0,
                     DAT_005787e8[4] + -1 + param_2 + DAT_005787f4);
      }
      if (((*(uint *)((int)this + 0x30) & 0x20000000) != 0) && (DAT_005787f8 != (int *)0x0)) {
        iVar5 = DAT_005aa7d4;
        if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
          iVar5 = DAT_005aadb0;
        }
        if ((*(int *)((int)this + 0x48) == iVar4) &&
           ((*(uint *)((int)this + 0x5cc) & 1 << ((byte)iVar5 & 0x1f)) == 0)) {
          iVar4 = DAT_005787f8[3];
          uVar6 = param_1 - iVar4 / 2;
          iVar5 = DAT_005787f8[4] / 2 + 0x32;
          iVar10 = param_2 - iVar5;
          if (*DAT_005787f8 != 0) {
            if ((*(byte *)(*DAT_005787f8 + 0x14) & 0x10) == 0) {
              FUN_00496340(aiStack_2c,DAT_005787f8,uVar6,iVar10,0);
            }
            else {
              FUN_00496880(aiStack_2c,DAT_005787f8,uVar6,iVar10,0,1);
            }
          }
          iVar4 = param_1 - iVar4 / 2;
          iVar5 = param_2 - iVar5;
          FUN_00500650(&DAT_00584ae8,iVar4,iVar5,DAT_005787f8[3] + -1 + iVar4,
                       DAT_005787f8[4] + -1 + iVar5);
        }
      }
      if (((*(uint *)((int)this + 0x30) & 0x40000000) != 0) && (DAT_005787fc != (int *)0x0)) {
        iVar4 = DAT_005787f8[3];
        iVar10 = DAT_005787f8[4] / 2 + 0x32;
        iVar5 = param_2 - iVar10;
        uVar6 = (param_1 - iVar4) - 8;
        if (*DAT_005787fc != 0) {
          if ((*(byte *)(*DAT_005787fc + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787fc,uVar6,iVar5,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787fc,uVar6,iVar5,0,1);
          }
        }
        iVar10 = param_2 - iVar10;
        iVar4 = (param_1 - iVar4) + -8;
        FUN_00500650(&DAT_00584ae8,iVar4,iVar10,DAT_005787fc[3] + -1 + iVar4,
                     DAT_005787fc[4] + -1 + iVar10);
      }
    }
    goto LAB_004176b0;
  }
  if (((*(uint *)((int)this + 0x30) & 0x20000000) != 0) && (DAT_005787f8 != (int *)0x0)) {
    FUN_004950c0(aiStack_2c,DAT_00585170);
    uStack_4 = 1;
    if (aiStack_2c[0] != 0) {
      uVar9 = 1 << ((byte)iVar4 & 0x1f);
      bVar3 = false;
      uStack_24 = 0x180;
      uVar6 = uVar9 ^ 0xffff;
      if (*(int *)((int)this + 0x48) == iVar4) {
        if ((*(uint *)((int)this + 0x5cc) & uVar6) != uVar6) goto LAB_004174c5;
        if (*(int *)((int)this + 0x48) != iVar4) goto LAB_004174bd;
      }
      else {
LAB_004174bd:
        if ((*(uint *)((int)this + 0x5cc) & uVar9) == 0) {
LAB_004174c5:
          bVar3 = true;
        }
      }
      if (bVar3) {
        iVar4 = DAT_005787f8[3];
        uVar6 = param_1 - iVar4 / 2;
        iVar5 = DAT_005787f8[4] / 2 + 0x19;
        iVar10 = param_2 - iVar5;
        if (*DAT_005787f8 != 0) {
          if ((*(byte *)(*DAT_005787f8 + 0x14) & 0x10) == 0) {
            FUN_00496340(aiStack_2c,DAT_005787f8,uVar6,iVar10,0);
          }
          else {
            FUN_00496880(aiStack_2c,DAT_005787f8,uVar6,iVar10,0,1);
          }
        }
        iVar4 = param_1 - iVar4 / 2;
        iVar5 = param_2 - iVar5;
        FUN_00500650(&DAT_00584ae8,iVar4,iVar5,DAT_005787f8[3] + -1 + iVar4,
                     DAT_005787f8[4] + -1 + iVar5);
      }
    }
    DAT_00583648 = DAT_00583648 + -0x20;
    uStack_4 = 0xffffffff;
    FUN_00495590(aiStack_2c);
  }
  if ((*(uint *)((int)this + 0x30) & 0x40000000) == 0) {
    ExceptionList = pvStack_c;
    return 1;
  }
  if (DAT_005787fc == (int *)0x0) {
    ExceptionList = pvStack_c;
    return 1;
  }
  FUN_004950c0(aiStack_2c,DAT_00585170);
  uStack_4 = 2;
  if (aiStack_2c[0] != 0) {
    uStack_24 = 0x180;
    iVar4 = DAT_005787f8[3];
    iVar10 = DAT_005787f8[4] / 2 + 0x19;
    iVar5 = param_2 - iVar10;
    uVar6 = (param_1 - iVar4) - 8;
    if (*DAT_005787fc != 0) {
      if ((*(byte *)(*DAT_005787fc + 0x14) & 0x10) == 0) {
        FUN_00496340(aiStack_2c,DAT_005787fc,uVar6,iVar5,0);
      }
      else {
        FUN_00496880(aiStack_2c,DAT_005787fc,uVar6,iVar5,0,1);
      }
    }
    iVar10 = param_2 - iVar10;
    iVar4 = (param_1 - iVar4) + -8;
    FUN_00500650(&DAT_00584ae8,iVar4,iVar10,DAT_005787fc[3] + -1 + iVar4,
                 DAT_005787fc[4] + -1 + iVar10);
  }
LAB_004176b0:
  DAT_00583648 = DAT_00583648 + -0x20;
  uStack_4 = 0xffffffff;
  FUN_00495590(aiStack_2c);
  ExceptionList = pvStack_c;
  return 1;
}


