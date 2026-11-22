
undefined4 __thiscall FUN_005190d0(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iStack_34;
  int iStack_2c;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_34 = 0x17f;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 8) {
    iStack_34 = 0x1df;
  }
  if ((param_1 == (uint *)0x0) || (param_1[3] != 0)) {
    iStack_c = *(int *)((int)this + 0x1b4);
    iStack_10 = *(int *)((int)this + 0x1b0);
    iStack_4 = iStack_34 + iStack_c;
    iStack_8 = iStack_10 + 0x280;
    (/*IC:0051929a*/**(code **)(*DAT_00585170 + 0x1c))(DAT_00585170,0,0,DAT_00585174,&iStack_10,0);
  }
  else {
    if (DAT_005d20b8 != 0) {
      FUN_00476f70(param_1);
    }
    uVar1 = *param_1;
    iStack_2c = 0;
    if (0 < (int)uVar1) {
      iStack_28 = 0;
      do {
        if ((iStack_28 < 0) || ((int)*param_1 <= iStack_2c)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(param_1[4] + iStack_28);
        }
        iVar2 = *piVar4;
        iVar3 = piVar4[1];
        iStack_18 = piVar4[2];
        iStack_14 = piVar4[3];
        if (0x27f < iStack_18) {
          iStack_18 = 0x27f;
        }
        if (iStack_34 < iStack_14) {
          iStack_14 = iStack_34;
        }
        if ((iVar2 <= iStack_18) && (iVar3 <= iStack_14)) {
          iStack_20 = iVar2;
          iStack_1c = iVar3;
          if ((DAT_005d2094 & 1) != 0) {
            FUN_004779b0(&DAT_00584ae8,iVar2,iVar3,iStack_18,iStack_14,0xcccc);
          }
          iStack_20 = iStack_20 + *(int *)((int)this + 0x1b0);
          iStack_18 = iStack_18 + 1 + *(int *)((int)this + 0x1b0);
          iStack_1c = iStack_1c + *(int *)((int)this + 0x1b4);
          iStack_14 = iStack_14 + 1 + *(int *)((int)this + 0x1b4);
          (/*IC:00519222*/**(code **)(*DAT_00585170 + 0x1c))(DAT_00585170,iVar2,iVar3,DAT_00585174,&iStack_20,0);
        }
        iStack_2c = iStack_2c + 1;
        iStack_28 = iStack_28 + 0x10;
      } while (iStack_2c < (int)uVar1);
      return 1;
    }
  }
  return 1;
}


