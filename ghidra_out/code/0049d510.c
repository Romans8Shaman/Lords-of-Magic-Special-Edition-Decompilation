
undefined4 __thiscall
FUN_0049d510(void *this,void *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  int local_2c [4];
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054af30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xfe;
  if ((((*(int *)((int)this + 0x1c) != 0) && (*(int **)((int)this + 0x3c) != (int *)0x0)) &&
      (**(int **)((int)this + 0x3c) != 0)) &&
     (piVar2 = FUN_0049d360((int)this), piVar2 != (int *)0x0)) {
    FUN_00495120(local_2c,piVar2,*(int **)((int)this + 0x3c),*(int *)((int)this + 0x1c));
    if (local_2c[0] != 0) {
      if (*(int *)((int)this + 0x30) != 0) {
        local_1c = *(int *)((int)this + 0x30);
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x3c) + 0x120);
      local_34 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 2);
      DAT_0058364c = DAT_0058364c + 0x14;
      local_30 = (uint)*(ushort *)(*(int *)((int)this + 0x1c) + 4);
      local_40 = local_2c;
      local_3c = 0;
      local_38 = 0;
      local_4 = 1;
      if (iVar1 < 0) {
        FUN_00496340(param_1,(int *)&local_40,param_2,param_3,0);
      }
      else {
        FUN_00496880(param_1,(int *)&local_40,param_2,param_3,0,(byte)iVar1);
      }
      if (-1 < param_4) {
        FUN_00495640(param_1,(int *)&local_40,param_2,param_3,(short)param_4,0,iVar1,param_5);
      }
      DAT_0058364c = DAT_0058364c + -0x14;
      DAT_00583648 = DAT_00583648 + -0x20;
      local_4 = 0xffffffff;
      FUN_00495590(local_2c);
      ExceptionList = local_c;
      return 1;
    }
    DAT_00583648 = DAT_00583648 + -0x20;
    local_4 = 0xffffffff;
    FUN_00495590(local_2c);
  }
  ExceptionList = local_c;
  return 0;
}


