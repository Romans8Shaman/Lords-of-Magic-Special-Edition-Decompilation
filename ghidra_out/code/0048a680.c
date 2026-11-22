
undefined4 __fastcall FUN_0048a680(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 unused_reg_1;
  undefined4 extraout_EDX_02;
  
  if (DAT_005d2ca0 == 0) {
    FUN_0048c2b0((int)param_1);
    unused_reg_1 = extraout_EDX;
    if ((DAT_005d1e84 != 0) && (1 < *(int *)(DAT_005d1e84 + 0x100))) {
      FUN_004b7dd0(DAT_005d1e84);
      unused_reg_1 = extraout_EDX_00;
    }
    iVar4 = DAT_005d1e84;
    switch(*(undefined1 *)(param_1 + 1)) {
    case 1:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a59d0(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(int *)((int)param_1 + 0x19),
                     *(float *)((int)param_1 + 0x1d));
      }
      break;
    case 2:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a5cb0(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(int *)((int)param_1 + 0x19),
                     *(int *)((int)param_1 + 0x1d));
      }
      break;
    case 3:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004805b0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 4:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480620(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 5:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480650(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 6:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480680(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 7:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041e0d0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 8:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c1ed0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 9:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c25a0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 10:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041e250(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xb:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00527920(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xc:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004ecdd0((int *)((int)param_1 + 0x15));
      }
      break;
    case 0xd:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004808e0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xe:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0047c610(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0xf:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00424580(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x10:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480f10(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x11:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c1a30(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x12:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_005072f0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x13:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00507b60(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x14:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00508a60((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x15:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c13a0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x16:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c2c80((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x17:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c1180(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x18:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00480f50(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x19:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0050d830(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0050de90(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004f0910(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004295d0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00429620((undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x1e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00429810(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x1f:
      FUN_00482800(&DAT_005aa12c,(char *)((int)param_1 + 0x15));
      break;
    case 0x20:
      FUN_00482830(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      break;
    case 0x21:
      FUN_004829b0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      break;
    case 0x23:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a6200(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(float *)((int)param_1 + 0x19),
                     *(float *)((int)param_1 + 0x1d));
      }
      break;
    case 0x24:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a6490(&DAT_005ae958,*(int *)((int)param_1 + 0x15),*(int *)((int)param_1 + 0x19));
      }
      break;
    case 0x25:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044ecd0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x26:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0043c4e0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x27:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044ffd0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x28:
      FUN_00427610((int *)((int)param_1 + 0x15));
      break;
    case 0x29:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00451e10((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004bec20(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f280(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f440(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f4e0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0043dcf0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x2f:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00449b10(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x30:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0044f510(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x31:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0045b550(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x32:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0045cf70(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x33:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004a1ad0(&DAT_005aa12c,(char *)((int)param_1 + 0x15));
      }
      break;
    case 0x34:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041c510(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x35:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041cad0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x36:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004512b0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x37:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004511a0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x38:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00440c80(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x39:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00431a60(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x3a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84),
         unused_reg_1 = extraout_EDX_01, iVar2 == iVar3)) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0045c830(&DAT_005aa12c,unused_reg_1,(int)param_1 + 0x15);
      }
      break;
    case 0x3b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041f810((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x3c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0041ea80((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x3e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0048cdb0();
      }
      break;
    case 0x3f:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        op_sunlight();
      }
      break;
    case 0x40:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        op_sunlight();
      }
      break;
    case 0x41:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00461020(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x42:
      FUN_00481a10(&DAT_005aa12c,*(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x43:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84),
         unused_reg_1 = extraout_EDX_02, iVar2 == iVar3)) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004ad840(0x5aa12c,unused_reg_1,(int)param_1 + 0x15);
      }
      break;
    case 0x44:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00405440(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x45:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0040af20(&DAT_005aa12c,(byte *)((int)param_1 + 0x15));
      }
      break;
    case 0x46:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004ed170(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x47:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004bbd00(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x48:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b9210(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x49:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b9250((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x4b:
      FUN_004c8d80(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x4c:
      FUN_004842b0(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x4d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004c0400(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x4e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b8e80(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x4f:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b94f0((undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x50:
      if (DAT_0055b578 + *(int *)((int)param_1 + 0x19) < DAT_00583560) {
        DAT_0058357c = (DAT_00583560 - *(int *)((int)param_1 + 0x19)) * 2;
      }
      break;
    case 0x51:
      FUN_00484360(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      break;
    case 0x52:
      FUN_004843b0((int *)((int)param_1 + 0x15));
      break;
    case 0x53:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b2440(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x54:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_005303f0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x55:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00530470((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x56:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00487d50((uint *)((int)param_1 + 0x15));
      }
      break;
    case 0x57:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00487e10((uint *)((int)param_1 + 0x15));
      }
      break;
    case 0x58:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004223f0(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x59:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_004b2390(&DAT_005aa12c,(undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x5a:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0040c940((undefined4 *)((int)param_1 + 0x15));
      }
      break;
    case 0x5b:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_0040f0b0((int *)((int)param_1 + 0x15));
      }
      break;
    case 0x5c:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00411220(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x5d:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00483f30(&DAT_005aa12c,(int *)((int)param_1 + 0x15));
      }
      break;
    case 0x5e:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00483e70(&DAT_005aa12c,(DWORD *)((int)param_1 + 0x15));
      }
      break;
    case 0x5f:
      FUN_004b4dc0(&DAT_005cd358,(int *)((int)param_1 + 0x15));
      break;
    case 0x60:
      FUN_00484090(0x5aa12c,unused_reg_1,(int)param_1 + 0x15);
      break;
    case 0x61:
      if (((DAT_005d1e84 == 0) || (*(int *)(DAT_005d1e84 + 0x100) < 2)) ||
         (iVar2 = *(int *)(DAT_005d1e84 + 0x390), iVar3 = FUN_004b7dd0(DAT_005d1e84), iVar2 == iVar3
         )) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xd8);
      }
      if (iVar4 != 0) {
        FUN_00484030((int)param_1 + 0x15);
      }
    }
    if (DAT_005d2ca0 == 0) {
      switch(*(byte *)(param_1 + 1)) {
      case 0xd:
      case 0x18:
      case 0x27:
      case 0x28:
      case 0x2a:
      case 0x31:
      case 0x32:
      case 0x41:
      case 0x44:
      case 0x45:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x5c:
        FUN_004b4c20(&DAT_005cd358,*param_1,(uint)*(byte *)(param_1 + 1));
        if (DAT_00584c18 != 0) {
          if (*(char *)(param_1 + 1) != '2') {
            if (*(char *)(param_1 + 1) != '1') {
              return 1;
            }
            pcVar5 = FUN_004b1db0(&DAT_005aa64c,8);
            cVar1 = *pcVar5;
            puVar6 = FUN_004b1db0(&DAT_005aa64c,8);
            if ((int)cVar1 * (int)(char)puVar6[4] != 0) {
              return 1;
            }
          }
          FUN_00504fb0(&DAT_00584ae8,1,20000);
        }
      }
    }
  }
  return 1;
}


