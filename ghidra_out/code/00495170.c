
undefined4 __thiscall FUN_00495170(void *this,int *unused_stack_4,undefined4 param_p2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_8c;
  byte bStack_88;
  undefined4 local_6c [2];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_48;
  
  local_6c[0] = 0x6c;
  if (*(int *)this != 0) {
    FUN_00495590(this);
  }
  iVar1 = (/*IC:004951a1*/**(code **)(*unused_stack_4 + 100))(unused_stack_4,0,local_6c,1,0);
  if (iVar1 == -0x7789fe3e) {
    FUN_00475360(0x584ae8);
    iVar1 = (/*IC:004951c3*/**(code **)(*unused_stack_4 + 100))(unused_stack_4,0,local_6c,1,0);
  }
  if (iVar1 != 0) {
    FUN_004756f0(iVar1,s_surf_>Lock_NULL__ddsd_DDLOCK_SUR_0055c654);
    return 0;
  }
  *(undefined4 *)((int)this + 4) = uStack_60;
  *(undefined4 *)((int)this + 0xc) = uStack_5c;
  *(int **)((int)this + 0x18) = unused_stack_4;
  *(undefined4 *)((int)this + 8) = uStack_64;
  *(undefined4 *)this = uStack_48;
  *(undefined4 *)((int)this + 0x14) = 10;
  pcVar2 = s_surf_>GetPixelFormat__pf__0055c638;
  uStack_8c = 0x20;
  iVar1 = (/*IC:0049521f*/**(code **)(*unused_stack_4 + 0x54))(unused_stack_4,&uStack_8c);
  iVar1 = FUN_004756f0(iVar1,pcVar2);
  if ((iVar1 != 0) && ((bStack_88 & 0x20) == 0)) {
    *(undefined4 *)((int)this + 0x14) = 0xc;
  }
  *(undefined4 *)((int)this + 0x10) = param_p2;
  return 1;
}


