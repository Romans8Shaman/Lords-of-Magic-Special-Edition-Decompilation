
void __thiscall FUN_004bbf20(void *this,undefined4 param_1)

{
  undefined1 local_12c [300];
  
  FUN_0053a090(local_12c,s_player__d_control_switched_from_c_0055d770,*(uint *)((int)this + 0x15a8),
               *(undefined4 *)((int)this + 0x15dc),param_1);
  if (DAT_005d1e84 != 0) {
    FUN_005047d0(local_12c);
  }
  *(undefined4 *)((int)this + 0x15dc) = param_1;
  return;
}


