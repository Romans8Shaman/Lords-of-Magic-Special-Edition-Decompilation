
void __thiscall
FUN_004779b0(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  BOOL BVar3;
  void *this_00;
  int local_50;
  int local_4c;
  tagMSG local_48;
  int local_2c [4];
  undefined4 local_1c;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a088;
  local_c = ExceptionList;
  if ((param_3 < param_1) || (param_4 < param_2)) {
    return;
  }
  bVar1 = false;
  bVar2 = 0;
  local_50 = 0;
  local_4c = 0;
  ExceptionList = &local_c;
  PeekMessageA(&local_48,(HWND)0x0,0x201,0x201,1);
  PeekMessageA(&local_48,(HWND)0x0,0x202,0x202,1);
  PeekMessageA(&local_48,(HWND)0x0,0x100,0x108,1);
  FUN_004950c0(local_2c,*(int **)((int)this + 0x684));
  local_4 = 0;
  FUN_00495080(local_2c);
  do {
    if (!bVar1) goto LAB_00477a6a;
    do {
      if (!(bool)(bVar2 & 1)) goto LAB_00477b30;
LAB_00477a6a:
      FUN_00495170(local_2c,local_14,local_1c);
      if (bVar2 == 0) {
        local_50 = local_4c;
      }
      switch(local_50) {
      case 0:
        FUN_00494e60(local_2c,param_1,param_2,param_3,param_4,param_5);
        goto switchD_00477a9b_default;
      case 1:
        this_00 = (void *)((int)this + 0x22f2c);
        break;
      case 2:
        this_00 = (void *)((int)this + 0x22f74);
        break;
      case 3:
        this_00 = (void *)((int)this + 0x22f50);
        break;
      case 4:
        this_00 = (void *)((int)this + 0x22f08);
        break;
      default:
        goto switchD_00477a9b_default;
      }
      FUN_00477910(this_00,local_2c,0xffff);
switchD_00477a9b_default:
      FUN_00495080(local_2c);
      bVar2 = bVar2 + 1;
LAB_00477b30:
      if (bVar1) {
        DAT_00583648 = DAT_00583648 + -0x20;
        local_4 = 0xffffffff;
        FUN_00495590(local_2c);
        ExceptionList = local_c;
        return;
      }
      BVar3 = PeekMessageA(&local_48,(HWND)0x0,0x202,0x202,1);
      if (BVar3 == 0) {
        BVar3 = PeekMessageA(&local_48,(HWND)0x0,0x100,0x108,1);
        if ((BVar3 != 0) && (local_48.message == 0x101)) {
          if (local_48.wParam == 0x1b) {
            *(undefined4 *)((int)this + 0x4d5ac) = 0;
          }
          else if ((0x2f < (int)local_48.wParam) && ((int)local_48.wParam < 0x35)) {
            local_4c = local_48.wParam - 0x30;
            goto LAB_00477bad;
          }
          goto LAB_00477ba8;
        }
      }
      else {
        PeekMessageA(&local_48,(HWND)0x0,0x201,0x201,1);
LAB_00477ba8:
        bVar1 = true;
      }
LAB_00477bad:
    } while (bVar1);
    Sleep(100);
  } while( true );
}


