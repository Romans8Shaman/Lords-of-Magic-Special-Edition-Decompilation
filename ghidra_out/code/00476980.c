
void __thiscall FUN_00476980(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_7c;
  int local_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int aiStack_4c [8];
  int aiStack_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054a068;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x22ff4) != 0) {
    uVar1 = *param_1;
    ExceptionList = &local_c;
    if (*(int *)((int)this + 0x4d5d0) != 0) {
      ExceptionList = &local_c;
      FUN_00476f70(param_1);
    }
    if (*(int *)((int)this + 0x4d5cc) != 0) {
      (/*IC:004769e1*/**(code **)(**(int **)((int)this + 0x680) + 0x58))(*(int **)((int)this + 0x680),1,0);
    }
    local_7c = 0;
    if (0 < (int)uVar1) {
      local_78 = 0;
      do {
        if ((local_78 < 0) || ((int)*param_1 <= local_7c)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(param_1[4] + local_78);
        }
        iStack_70 = *piVar4;
        iStack_6c = piVar4[1];
        iStack_68 = piVar4[2];
        iStack_64 = piVar4[3];
        if ((*(byte *)((int)this + 0x4d5ac) & 8) != 0) {
          FUN_004779b0(this,*piVar4,piVar4[1],piVar4[2],piVar4[3],0xffff);
        }
        iVar3 = iStack_6c;
        iVar2 = iStack_70;
        iStack_68 = iStack_68 + 1;
        iStack_64 = iStack_64 + 1;
        if (DAT_005d20bc == 0) {
          FUN_004950c0(aiStack_2c,*(int **)((int)this + 0x684));
          iStack_4 = 0;
          FUN_004950c0(aiStack_4c,*(int **)((int)this + 0x688));
          iStack_54 = iStack_68 - iStack_70;
          DAT_0058364c = DAT_0058364c + 0x14;
          piStack_60 = aiStack_4c;
          iStack_50 = iStack_64 - iStack_6c;
          iStack_5c = iVar2;
          iStack_4._0_1_ = 2;
          iStack_58 = iVar3;
          FUN_00495db0(aiStack_2c,(int *)&piStack_60,iVar2,iVar3);
          DAT_0058364c = DAT_0058364c + -0x14;
          DAT_00583648 = DAT_00583648 + -0x20;
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_00495590(aiStack_4c);
          DAT_00583648 = DAT_00583648 + -0x20;
          iStack_4 = 0xffffffff;
          FUN_00495590(aiStack_2c);
        }
        else {
          iVar5 = (/*IC:00476b7b*/**(code **)(**(int **)((int)this + 0x684) + 0x1c))
                            (*(int **)((int)this + 0x684),iStack_70,iStack_6c,
                             *(undefined4 *)((int)this + 0x688),&iStack_70,0x10);
          if (iVar5 == -0x7789fe3e) {
            FUN_00475360((int)this);
            (/*IC:00476ba5*/**(code **)(**(int **)((int)this + 0x684) + 0x1c))
                      (*(int **)((int)this + 0x684),iVar2,iVar3,*(undefined4 *)((int)this + 0x688),
                       &iStack_70,0);
          }
        }
        local_7c = local_7c + 1;
        local_78 = local_78 + 0x10;
      } while (local_7c < (int)uVar1);
    }
    if ((*(byte *)((int)this + 0x4d5ac) & 0x20) != 0) {
      FUN_004779b0(&DAT_00584ae8,0,0,0x27f,0x1df,0xaaaa);
    }
  }
  ExceptionList = local_c;
  return;
}


