
undefined4 __thiscall FUN_004952c0(void *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_00495590(this);
  if (((int)param_1 < 1) || (param_2 < 1)) {
    return 0;
  }
  *(uint *)((int)this + 4) = param_1;
  iVar1 = param_1 + (param_1 & 1);
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 0xc) = iVar1;
  if (param_3 != 0) {
    *(int *)((int)this + 0xc) = iVar1 * 2;
  }
  iVar1 = Ordinal_401(param_2 * *(int *)((int)this + 0xc),s_C__lomse_source_storm_h_00555130,0x3fa,0
                     );
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  DAT_00583648 = DAT_00583648 + *(int *)((int)this + 0xc) * *(int *)((int)this + 8);
  if (param_3 == 0) {
    *(undefined4 *)((int)this + 0x14) = 3;
    return 1;
  }
  *(undefined4 *)((int)this + 0x14) = 5;
  return 1;
}


