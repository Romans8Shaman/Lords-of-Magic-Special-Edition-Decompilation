
undefined4 __thiscall FUN_00470010(void *this,int param_1)

{
  undefined4 *arg6;
  int iVar1;
  DWORD unused_stack_4;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((int)this + param_1 * 4 + 0x3b4);
  arg6 = (undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x3c8) = uVar2;
  *arg6 = 0;
  iVar1 = Ordinal_118(uVar2,0,&DAT_00579274,(int)this + 0x104,s_JoiningPlayer_00557c2c,arg6);
  if (iVar1 == 0) {
    uVar2 = 0;
    unused_stack_4 = GetLastError();
    FUN_004b69a0(s_SNetJoinGame_failed___s_00557c3c,unused_stack_4,uVar2);
    *arg6 = 0xffff;
    return 0;
  }
  FUN_00470090(this,param_1);
  return 1;
}


