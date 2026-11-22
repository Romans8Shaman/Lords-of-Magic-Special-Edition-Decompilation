
void __cdecl op_discoveralarm(void *param_1)

{
  bool bVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint auStack_40 [10];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005491f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040dcd0((int)&local_54);
  this = param_1;
  local_4 = 0;
  local_18 = 0;
  FUN_0040adb0(param_1,&local_5c);
  iVar2 = FUN_004026a0(&local_5c,&local_4c,&local_68,(float *)&param_1);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,&local_5c);
    iVar2 = FUN_004026a0(&local_5c,&local_50,&local_68,(float *)&param_1);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      goto LAB_0040e7a9;
    }
    FUN_0040adb0(this,&local_5c);
    iVar2 = FUN_004026a0(&local_5c,&local_54,&local_68,(float *)&param_1);
    if (iVar2 == 0) {
      FUN_00404ab0(this,0xe);
      goto LAB_0040e7a9;
    }
    do {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        local_64 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        local_60 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        local_64 = 0;
        local_60 = local_58;
      }
      if ((local_64 & 0xff) == 0) goto LAB_0040e7a9;
      if (((local_64 & 0xff) != 5) || ((local_64 & 0x100) != 0)) {
        if (9 < local_18) {
          FUN_004d41c0(this,s_too_many_args_00555744);
          goto LAB_0040e7a9;
        }
        iVar2 = FUN_004026a0(&local_64,auStack_40 + local_18,&local_68,(float *)&param_1);
        if (iVar2 == 0) {
          FUN_004d41c0(this,s_invalid_arg_00555738);
          goto LAB_0040e7a9;
        }
        local_18 = local_18 + 1;
      }
      if (((char)local_64 == '\x05') && ((local_64 & 0x100) == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    } while (!bVar1);
    local_44 = local_60;
    local_48 = local_64;
    iVar2 = FUN_0040dfb0(&local_54);
    if (iVar2 == 0) {
      FUN_004d41c0(this,s_can_t_set_alarm___bad_parameters_0055577c);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
        goto LAB_0040e7a9;
      }
    }
    else {
      uVar3 = FUN_0040e0b0(&DAT_005aeec0,&local_54,-1);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
        goto LAB_0040e7a9;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0040e7a9:
  local_4 = 0xffffffff;
  FUN_0040dcf0();
  ExceptionList = local_c;
  return;
}


