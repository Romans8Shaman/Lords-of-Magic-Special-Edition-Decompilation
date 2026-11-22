
int __cdecl FUN_0045a100(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_4;
  
  local_4 = param_2;
  param_2 = param_3;
  FUN_0045a360(&local_4,&param_2,(char)param_4);
  iVar1 = FUN_004a51c0(&DAT_005ae958,local_4 + param_1 % DAT_005ae9c4,
                       param_2 + param_1 / DAT_005ae9c4);
  return iVar1;
}


