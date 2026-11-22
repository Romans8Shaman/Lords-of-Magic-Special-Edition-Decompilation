
undefined4 __thiscall
FUN_004511f0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            uint param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int local_108 [5];
  undefined4 local_f3;
  undefined4 local_ef;
  int local_eb;
  undefined4 local_e7;
  uint local_e3;
  
  iVar1 = FUN_004d5c80((byte)param_4,param_5);
  if (iVar1 == 0) {
    FUN_0048cc70(local_108,0x36);
    local_f3 = param_1;
    local_eb = param_3;
    local_ef = param_2;
    local_e7 = param_4;
    local_e3 = param_5;
    uVar3 = FUN_00489b70(&DAT_00584ae8,local_108);
    return uVar3;
  }
  if ((param_3 == 8) &&
     (pcVar2 = (char *)(~-(uint)((byte)param_4 != 8) & param_5), pcVar2 != (char *)0x0)) {
    uVar3 = FUN_00451150(param_1,pcVar2);
    return uVar3;
  }
  return 0;
}


