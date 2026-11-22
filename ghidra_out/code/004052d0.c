
undefined4 __thiscall
FUN_004052d0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,undefined1 param_5)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_108 [5];
  int local_f3;
  int local_ef;
  undefined4 local_eb;
  int local_e7;
  undefined1 local_e3;
  
  if (param_2 == 0x11) {
    pvVar1 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
    if ((pvVar1 == (void *)0x0) || (iVar2 = FUN_00407d50((int)pvVar1), iVar2 != 0)) {
      return 0;
    }
    param_4 = FUN_004072f0((void *)((int)this + 0x482c),pvVar1);
    if (param_4 == -1) {
      return 0;
    }
  }
  iVar2 = FUN_0040ae20(param_2);
  if (iVar2 < 0) {
    FUN_0048cc70(local_108,0x44);
    local_e3 = param_5;
    local_f3 = param_1;
    local_eb = param_3;
    local_ef = param_2;
    local_e7 = param_4;
    uVar4 = FUN_00489b70(&DAT_00584ae8,local_108);
    return uVar4;
  }
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (iVar2 == 0) {
    *(char *)(uVar3 + 0xc0) = (char)param_2;
    *(undefined1 *)(uVar3 + 0xc1) = param_5;
    *(undefined2 *)(uVar3 + 0xc2) = (undefined2)param_3;
    return 1;
  }
  *(char *)(uVar3 + 0xc0) = (char)param_2;
  if (iVar2 == 1) {
    *(short *)(uVar3 + 0xc2) = (short)param_4;
    *(undefined1 *)(uVar3 + 0xc1) = param_5;
    return 1;
  }
  *(undefined2 *)(uVar3 + 0xc2) = 0xffff;
  *(undefined1 *)(uVar3 + 0xc1) = param_5;
  return 1;
}


