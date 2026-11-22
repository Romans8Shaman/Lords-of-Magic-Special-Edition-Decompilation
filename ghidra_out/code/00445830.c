
undefined4 __thiscall
FUN_00445830(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((param_5 < 0) || (0xf < param_5)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_005af194 + param_5 * 0x1d84;
  }
  this_00 = (int *)FUN_0043e7b0((int)this);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  iVar1 = (/*IC:00445877*/**(code **)(*this_00 + 0x3c))(this_00);
  iVar2 = (/*IC:00445880*/**(code **)(*(int *)this + 0x3c))(this);
  if (iVar1 != iVar2) {
    return 0;
  }
  if (param_2 < 0) {
    param_2 = this_00[0x20];
  }
  piVar3 = FUN_0043d300(&DAT_005cd31c,param_3,param_2,param_4);
  *param_1 = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (this_00[0x38] * 0x100 < piVar3[3]) {
    return 0;
  }
  if (*(int *)(puVar4 + 0xcfc) < piVar3[4]) {
    return 0;
  }
  if (*(int *)(puVar4 + 0xd04) < piVar3[5]) {
    return 0;
  }
  return (uint)(piVar3[6] <= *(int *)(puVar4 + 0xd08));
}


