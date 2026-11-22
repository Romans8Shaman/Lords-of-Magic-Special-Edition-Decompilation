
int __thiscall
FUN_0047f0a0(void *this,void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_2c [6];
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a2f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0047efd0(param_1,0xff,0xff,0xff);
  DAT_0058364c = DAT_0058364c + 0x14;
  local_2c[1] = 0;
  local_2c[5] = 0;
  local_2c[4] = 0;
  local_2c[3] = 0;
  local_2c[2] = 0;
  local_4 = 0;
  param_3 = 0;
  iVar3 = iVar2;
  if (0 < param_5) {
    do {
      if (param_3 == param_7) {
        FUN_00497270(param_1,iVar2 + iVar3 >> 1,param_4,1,*(int *)((int)this + 8),(short)iVar1);
      }
      piVar4 = (int *)((int)this + (uint)*(byte *)(param_3 + param_2) * 0x1c + 0x10);
      piVar6 = local_2c;
      for (iVar2 = 7; iVar5 = local_2c[0], iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      if (local_2c[0] < 1) {
        iVar5 = 0;
      }
      else if (local_2c[1] != 0) {
        if (param_6 == 0) {
          FUN_00496340(param_1,local_2c + 1,iVar3 + (CONCAT11(uStack_13,uStack_14) & 0xff),
                       param_4 + (CONCAT21(local_12,uStack_13) & 0xff),0);
        }
        else {
          FUN_00495db0(param_1,local_2c + 1,iVar3 + (CONCAT11(uStack_13,uStack_14) & 0xff),
                       param_4 + (CONCAT21(local_12,uStack_13) & 0xff));
        }
      }
      iVar2 = iVar3 + (local_12 & 0xff);
      iVar3 = iVar3 + iVar5 + *(int *)((int)this + 0xc);
      param_3 = param_3 + 1;
    } while (param_3 < param_5);
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  ExceptionList = local_c;
  return iVar2;
}


