
undefined4 __fastcall FUN_00443280(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[0x16] - 9;
  if (5 < uVar1) {
switchD_00443294_caseD_44333b:
    return 0;
  }
  do {
    switch((&switchD_00443294::switchdataD_00443344)[uVar1]) {
    default:
      piVar2 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1[0x20],2);
      if (piVar2 == (int *)0x0) {
LAB_0044330a:
        piVar2 = (int *)FUN_0043e7b0((int)param_1);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        iVar3 = (/*IC:00443319*/**(code **)(*piVar2 + 0x3c))(piVar2);
        iVar4 = (/*IC:00443322*/**(code **)(*param_1 + 0x3c))(param_1);
        if (iVar3 == iVar4) {
          return 1;
        }
        return 0;
      }
      iVar3 = (/*IC:004432b8*/**(code **)(*piVar2 + 0x3c))(piVar2);
      iVar4 = (/*IC:004432c1*/**(code **)(*param_1 + 0x3c))(param_1);
      if (iVar3 != iVar4) goto LAB_0044330a;
      break;
    case (undefined *)0x4432ca:
      piVar2 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1[0x20],2);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar3 = (/*IC:004432e7*/**(code **)(*piVar2 + 0x3c))(piVar2);
      iVar4 = (/*IC:004432f0*/**(code **)(*param_1 + 0x3c))(param_1);
      if (iVar3 != iVar4) {
        return 0;
      }
      break;
    case (undefined *)0x443332:
      return 1;
    case (undefined *)0x44333b:
      goto switchD_00443294_caseD_44333b;
    }
    uVar1 = piVar2[0x16] - 9;
    param_1 = piVar2;
    if (5 < uVar1) {
      return 0;
    }
  } while( true );
}


