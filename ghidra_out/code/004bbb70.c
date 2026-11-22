
void __thiscall FUN_004bbb70(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x15bc),0x2f);
  if ((piVar1 != (int *)0x0) && (iVar6 = 0, 0 < piVar1[0x13])) {
    piVar5 = piVar1 + 0x31;
    do {
      uVar2 = FUN_00525f10((int)piVar5);
      if ((uVar2 != 0) &&
         (iVar3 = (/*IC:004bbbad*/**(code **)(*piVar1 + 0x3c))(piVar1), iVar3 == *(int *)((int)this + 0x15a8))) {
        *param_1 = piVar1[10];
        *param_2 = iVar6;
        uVar4 = FUN_00525fc0(piVar1 + iVar6 * 0x13 + 0x31);
        *(undefined4 *)((int)this + 0x15b4) = uVar4;
        *(int *)((int)this + 0x15b8) = piVar1[iVar6 * 0x13 + 0x31];
        return;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar6 < piVar1[0x13]);
  }
  piVar1 = FUN_004fbed0(&DAT_005ae974,0);
  do {
    if (piVar1 == (int *)0x0) {
      *param_1 = -1;
      *param_2 = -1;
      return;
    }
    iVar6 = (/*IC:004bbbe1*/**(code **)(*piVar1 + 0x3c))(piVar1);
    if ((iVar6 == *(int *)((int)this + 0x15a8)) && (iVar6 = 0, 0 < piVar1[0x13])) {
      piVar5 = piVar1 + 0x31;
      do {
        uVar2 = FUN_00525f10((int)piVar5);
        if (uVar2 != 0) {
          *param_1 = piVar1[10];
          *param_2 = iVar6;
          *(int *)((int)this + 0x15bc) = *param_1;
          uVar4 = FUN_00525fc0(piVar1 + iVar6 * 0x13 + 0x31);
          *(undefined4 *)((int)this + 0x15b4) = uVar4;
          *(int *)((int)this + 0x15b8) = piVar1[iVar6 * 0x13 + 0x31];
          return;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 0x13;
      } while (iVar6 < piVar1[0x13]);
    }
    piVar1 = FUN_004fbed0(&DAT_005ae974,(int)piVar1);
  } while( true );
}


