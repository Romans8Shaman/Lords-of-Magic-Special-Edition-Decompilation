
void __thiscall
FUN_00473790(void *this,uint param_1,uint param_2,char *param_3,int param_4,int param_5)

{
  DWORD DVar1;
  uint local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054a038;
  local_c = ExceptionList;
  DAT_00583650 = DAT_00583650 + 0x10;
  local_4 = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    ExceptionList = &local_c;
    FUN_00473510(this,local_1c,param_1,param_2,param_3,param_5);
    DAT_00583650 = DAT_00583650 + -0x10;
    if (param_4 == 0) {
      *(undefined4 *)((int)this + 0x38) = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x38) = 2;
    }
    DVar1 = GetTickCount();
    *(DWORD *)((int)this + 0xb8) = DVar1;
  }
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return;
}


