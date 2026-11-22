
void __cdecl op_turnalarm(void *param_1)

{
  bool bVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
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
  puStack_8 = &LAB_00549078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040bb10((int)&local_5c);
  this = param_1;
  local_4 = 0;
  local_18 = 0;
  FUN_0040adb0(param_1,&local_64);
  iVar2 = FUN_004026a0(&local_64,&local_74,&local_70,(float *)&param_1);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    local_4c = local_74;
    FUN_0040adb0(this,&local_64);
    iVar2 = FUN_004026a0(&local_64,&local_50,&local_70,(float *)&param_1);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&local_64);
      iVar2 = FUN_004026a0(&local_64,&local_54,&local_70,(float *)&param_1);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        FUN_0040adb0(this,&local_64);
        iVar2 = FUN_004026a0(&local_64,&local_58,&local_70,(float *)&param_1);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          FUN_0040adb0(this,&local_64);
          iVar2 = FUN_004026a0(&local_64,&local_5c,&local_70,(float *)&param_1);
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0x90) = 0xe;
          }
          else {
            do {
              if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
                iVar2 = *(int *)((int)this + 0x54) + 1;
                *(int *)((int)this + 0x54) = iVar2;
                local_6c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
                local_68 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
              }
              else {
                *(undefined4 *)((int)this + 0x90) = 6;
                FUN_004d4550(this);
                *(undefined4 *)((int)this + 0x90) = 0;
                *(undefined4 *)((int)this + 0xa4) = 0;
                local_6c = 0;
                local_68 = local_60;
              }
              if ((local_6c & 0xff) == 0) goto LAB_0040c550;
              if (((local_6c & 0xff) != 5) || ((local_6c & 0x100) != 0)) {
                if (9 < local_18) {
                  FUN_004d41c0(this,s_too_many_args_00555744);
                  goto LAB_0040c550;
                }
                iVar2 = FUN_004026a0(&local_6c,auStack_40 + local_18,&local_70,(float *)&param_1);
                if (iVar2 == 0) {
                  FUN_004d41c0(this,s_invalid_arg_00555738);
                  goto LAB_0040c550;
                }
                local_18 = local_18 + 1;
              }
              if (((char)local_6c == '\x05') && ((local_6c & 0x100) == 0)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            } while (!bVar1);
            local_44 = local_68;
            local_48 = local_6c;
            uVar3 = FUN_0040bec0(&DAT_005aee8c,&local_5c,-1);
            if (*(int *)((int)this + 0x54) != 0) {
              iVar4 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar4;
              iVar2 = *(int *)((int)this + 0x50);
              *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
              *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
              goto LAB_0040c550;
            }
            *(undefined4 *)((int)this + 0x90) = 3;
          }
        }
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0040c550:
  local_4 = 0xffffffff;
  FUN_0040bb30();
  ExceptionList = local_c;
  return;
}


