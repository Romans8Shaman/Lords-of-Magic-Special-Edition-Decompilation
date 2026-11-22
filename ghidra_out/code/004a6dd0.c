
uint __thiscall FUN_004a6dd0(void *this,int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005cca54);
  if (param_1[1] == 0) {
    *(uint *)(*(int *)((int)this + 100) + 4 + param_3 * 8) =
         *(uint *)(*(int *)((int)this + 100) + 4 + param_3 * 8) |
         1 << ((byte)param_1[0x12] & 0x1f) & 0xffU;
  }
  uVar1 = FUN_004a6d70(this,(int)param_1,param_2);
  param_1[7] = param_3;
  uVar2 = FUN_004a6d20(this,(int)param_1,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005cca54);
  if (*(int *)((int)this + 4) != 0) {
    FUN_004a8c40(this,param_2,param_3,param_1);
  }
  return uVar2 & uVar1;
}


