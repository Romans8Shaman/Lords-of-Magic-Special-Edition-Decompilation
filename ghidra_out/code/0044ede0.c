
undefined4 __thiscall
FUN_0044ede0(void *this,undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  
  if ((param_4 < 0) || (0xf < param_4)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + param_4 * 0x1d84;
  }
  piVar1 = FUN_0043d300(&DAT_005cd31c,param_2,*(int *)((int)this + 0x80),param_3);
  *param_1 = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0xe0) * 0x100 < piVar1[3]) {
    return 0;
  }
  if (*(int *)(puVar2 + 0xcfc) < piVar1[4]) {
    return 0;
  }
  if (*(int *)(puVar2 + 0xd04) < piVar1[5]) {
    return 0;
  }
  return (uint)(piVar1[6] <= *(int *)(puVar2 + 0xd08));
}


