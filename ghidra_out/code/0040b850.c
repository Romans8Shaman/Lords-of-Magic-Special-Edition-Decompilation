
void __cdecl op_tickalarm(void *param_1)

{
  bool bVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
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
  puStack_8 = &LAB_00549018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040b0b0((int)&local_58);
  this = param_1;
  local_4 = 0;
  local_18 = 0;
  FUN_0040adb0(param_1,&local_60);
  iVar2 = FUN_004026a0(&local_60,&local_70,&local_6c,(float *)&param_1);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    local_4c = local_70;
    FUN_0040adb0(this,&local_60);
    iVar2 = FUN_004026a0(&local_60,&local_50,&local_6c,(float *)&param_1);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,&local_60);
      iVar2 = FUN_004026a0(&local_60,&local_70,&local_6c,(float *)&param_1);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        local_54 = local_70;
        FUN_0040adb0(this,&local_60);
        iVar2 = FUN_004026a0(&local_60,&local_70,&local_6c,(float *)&param_1);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          local_58 = local_70;
          do {
            if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
              iVar2 = *(int *)((int)this + 0x54) + 1;
              *(int *)((int)this + 0x54) = iVar2;
              local_68 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
              local_64 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
            }
            else {
              *(undefined4 *)((int)this + 0x90) = 6;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
              local_68 = 0;
              local_64 = local_5c;
            }
            if ((local_68 & 0xff) == 0) goto LAB_0040bac2;
            if (((local_68 & 0xff) != 5) || ((local_68 & 0x100) != 0)) {
              if (9 < local_18) {
                FUN_004d41c0(this,s_too_many_args_00555744);
                goto LAB_0040bac2;
              }
              iVar2 = FUN_004026a0(&local_68,auStack_40 + local_18,&local_6c,(float *)&param_1);
              if (iVar2 == 0) {
                FUN_004d41c0(this,s_invalid_arg_00555738);
                goto LAB_0040bac2;
              }
              local_18 = local_18 + 1;
            }
            if (((char)local_68 == '\x05') && ((local_68 & 0x100) == 0)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          } while (!bVar1);
          local_44 = local_64;
          local_48 = local_68;
          uVar3 = FUN_0040b460(&DAT_005aee78,&local_58,-1);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar4 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar4;
            iVar2 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
            goto LAB_0040bac2;
          }
          *(undefined4 *)((int)this + 0x90) = 3;
        }
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0040bac2:
  local_4 = 0xffffffff;
  FUN_0040b0d0();
  ExceptionList = local_c;
  return;
}


