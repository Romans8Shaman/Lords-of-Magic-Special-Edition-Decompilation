
undefined4 __thiscall
FUN_004935c0(void *this,int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int local_8 [2];
  
  switch(*(undefined4 *)this) {
  case 3:
    FUN_00495c00(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 4:
    piVar2 = *(int **)((int)this + 4);
    if (*piVar2 != 0) {
      iVar1 = (-(uint)((*(uint *)(*piVar2 + 0x14) & 0x10) != 0) & 2) - 1;
      if (iVar1 < 0) {
        FUN_00496340(param_1,piVar2,param_2,param_3,0);
      }
      else {
        FUN_00496880(param_1,piVar2,param_2,param_3,0,(byte)iVar1);
      }
      if (-1 < param_4) {
        FUN_00495640(param_1,piVar2,param_2,param_3,(short)param_4,0,iVar1,param_5);
        return 1;
      }
    }
    break;
  default:
    return 0;
  case 7:
    FUN_00497770(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 9:
    FUN_004eba40(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 10:
    FUN_00430730(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 0xb:
    FUN_0046bad0(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 0xc:
    FUN_004e9db0(*(void **)((int)this + 4),param_1,param_2,param_3);
    return 1;
  case 0xe:
    piVar2 = (int *)FUN_0049cc80(*(void **)((int)this + 4),local_8);
    FUN_0049d510(*(void **)((int)this + 4),param_1,*piVar2 + param_2,piVar2[1] + param_3,param_4,
                 param_5);
    return 1;
  case 0xf:
    FUN_00493840(*(void **)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
    return 1;
  case 0x10:
    FUN_00493ea0(*(void **)((int)this + 4),param_1,param_2,param_3,param_4,param_5);
  }
  return 1;
}


