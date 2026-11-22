
undefined4 __thiscall FUN_00427a40(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  FUN_005397f0((char *)&param_2,4,1,param_2);
  if (0 < (int)param_2) {
    iVar2 = FUN_004277e0(this,(int)param_2);
    *param_1 = iVar2;
    if (iVar2 < 0) {
      FUN_0053a140(piVar1,(int)param_2,1);
      OutputDebugStringA(s_Out_of_ArmyPath_space_00555d54);
      return 0;
    }
    FUN_005397f0((char *)(*(int *)this + iVar2),1,(uint)param_2,piVar1);
  }
  return 1;
}


