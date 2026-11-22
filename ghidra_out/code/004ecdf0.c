
int FUN_004ecdf0(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  int *this;
  int *this_00;
  void *this_01;
  int iVar2;
  int iVar3;
  int *this_02;
  int local_64;
  int iStack_60;
  int aiStack_58 [5];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  void *local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_0054b813;
  local_c = ExceptionList;
  this_02 = (int *)0x0;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,1);
  this = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,2);
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,param_1,3);
  *param_5 = -1;
  if (piVar1 == (int *)0x0) {
    if ((this_00 == (int *)0x0) && (this == (int *)0x0)) {
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    param_1 = piVar1[10];
    local_64 = piVar1[7];
    this_02 = (int *)piVar1[0x16];
    iStack_60 = (/*IC:004ece78*/**(code **)(*piVar1 + 0x3c))(piVar1);
  }
  if (this != (int *)0x0) {
    param_1 = this[10];
    local_64 = this[7];
    this_02 = (int *)this[0x12];
    iStack_60 = (/*IC:004ece99*/**(code **)(*this + 0x3c))(this);
  }
  if (this_00 != (int *)0x0) {
    param_1 = this_00[10];
    local_64 = this_00[7];
    this_02 = (int *)this_00[0x11];
    iStack_60 = (/*IC:004eceb9*/**(code **)(*this_00 + 0x3c))(this_00);
  }
  if (this_02 == (int *)0x0) {
    this_01 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (this_01 == (void *)0x0) {
      this_02 = (int *)0x0;
    }
    else {
      piStack_4 = this_02;
      this_02 = FUN_004116b0(this_01,param_3);
    }
    piStack_4 = (int *)0xffffffff;
    if (this_02 == (int *)0x0) {
      OutputDebugStringA(s_Insufficient_memory_to_add_sprit_0057315c);
      ExceptionList = local_c;
      return 0;
    }
    this_02[7] = local_64;
    this_02[10] = param_1;
    if ((param_3 < 0) || (0xf < param_3)) {
      this_02[0x12] = iStack_60;
    }
    else {
      this_02[0x12] = param_3;
    }
    if (piVar1 != (int *)0x0) {
      piVar1[0x16] = (int)this_02;
    }
    if (this != (int *)0x0) {
      this[0x12] = (int)this_02;
      this_02[0xc] = this_02[0xc] | 0x800000;
    }
    if (this_00 != (int *)0x0) {
      this_00[0x11] = (int)this_02;
      this_02[0xc] = this_02[0xc] | 0x400000;
    }
  }
  iVar2 = FUN_00415e90(this_02,param_2);
  if (iVar2 == 0) {
    if (this_02[0x13] == 0) {
      if (this_02 != (int *)0x0) {
        (/*IC:004ecf96*/**(code **)*this_02)(this_02,1);
      }
      if (piVar1 != (int *)0x0) {
        piVar1[0x16] = 0;
      }
      if (this != (int *)0x0) {
        this[0x12] = 0;
      }
      if (this_00 != (int *)0x0) {
        this_00[0x11] = 0;
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  else {
    FUN_00526e40(aiStack_58);
    piStack_4 = (int *)0x1;
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
      iStack_38 = DAT_005d3344;
    }
    else {
      iStack_38 = DAT_005d3340;
    }
    iVar2 = FUN_00529200(aiStack_58,param_2,0);
    if (iVar2 != 0) {
      DAT_005d3340 = DAT_005d3340 + 1;
      if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
        DAT_005d3344 = DAT_005d3344 + 1;
      }
      iVar2 = FUN_004163a0(this_02,aiStack_58);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_44 = 0;
      this_02[0x11] = 0;
      (/*IC:004ed066*/**(code **)(*this_02 + 0x2c))(this_02);
      FUN_00415c20(this_02,(int *)0x0,-1);
      iVar3 = 0;
      *param_5 = -1;
      if (0 < this_02[0x13]) {
        piVar1 = this_02 + 0x39;
        do {
          if (*piVar1 == iStack_38) {
            *param_5 = iVar3;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar1 = piVar1 + 0x13;
        } while (iVar3 < this_02[0x13]);
      }
      piStack_4 = (int *)0xffffffff;
      thunk_FUN_00526ea0((int)aiStack_58);
      ExceptionList = local_c;
      return iVar2;
    }
    piStack_4 = (int *)0xffffffff;
    thunk_FUN_00526ea0((int)aiStack_58);
  }
  ExceptionList = local_c;
  return 0;
}


