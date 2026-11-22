
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ba2b0(void *this,uint unused_stack_8,uint param_p3)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  double local_88;
  double local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  double local_50;
  double local_48;
  float local_40 [3];
  float local_34;
  float local_30;
  float local_2c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_0054b513;
  local_14 = ExceptionList;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_c = 0;
  if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == DAT_005cc9d4) {
    if ((*(byte *)((int)this + 0x30) & 2) != 0) {
      return 0;
    }
    DAT_00583650 = DAT_00583650 + 0x10;
    ExceptionList = &local_14;
    iVar4 = FUN_004ba060((int)this);
    if (iVar4 == 0) {
      iVar4 = *(int *)((int)this + 0x44);
      if (iVar4 < 0) {
        DAT_00583650 = DAT_00583650 + -0x10;
      }
      else if (iVar4 == 4) {
        *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
        FUN_004f6890(this,unused_stack_8,param_p3,2);
        DAT_00583650 = DAT_00583650 + -0x10;
      }
      else {
        if (iVar4 == 2) {
          FUN_004f5b30(this,0);
        }
        if (*(int *)((int)this + 0x44) == 3) {
          FUN_004f5b30(this,1);
        }
        iVar6 = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
        iVar4 = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
        FUN_004a6600(&DAT_005ae958,local_40,iVar6,iVar4);
        lVar2 = (longlong)local_34;
        local_70 = (int)(longlong)local_30;
        local_6c = (int)(longlong)local_2c;
        iVar5 = *(int *)((int)this + 0x54) * 4;
        FUN_004a6600(&DAT_005ae958,local_40,*(int *)(&DAT_0055d608 + iVar5) + iVar6,
                     *(int *)(&DAT_0055d628 + iVar5) + iVar4);
        local_68 = (int)(longlong)local_34;
        local_64 = (int)(longlong)local_30;
        local_a0 = *(int *)((int)this + 0x50);
        if ((*(int *)((int)this + 0x44) == 2) || (*(int *)((int)this + 0x44) == 3)) {
          local_a0 = local_a0 + -1;
        }
        if (local_a0 < 1) {
          local_a0 = 1;
        }
        iVar4 = (((int)lVar2 - local_68) * 0x100) / local_a0 >> 8;
        local_88 = (double)CONCAT44(local_88._4_4_,iVar4);
        iVar5 = ((local_70 - local_64) * 0x100) / local_a0 >> 8;
        local_80 = (double)CONCAT44(local_80._4_4_,iVar5);
        if (local_6c < (int)(longlong)local_2c) {
          local_a4 = local_a0 + -1;
          local_a0 = -1;
          local_8c = -1;
        }
        else {
          local_a4 = 0;
          local_8c = 1;
        }
        if (local_a4 != local_a0) {
          local_88 = (double)iVar5;
          local_80 = (double)local_64;
          local_50 = (double)iVar4;
          local_48 = (double)local_68;
          do {
            dVar3 = (double)local_a4 - _DAT_0054dcb8;
            *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
            FUN_004f6890(this,((int)(longlong)(local_50 * dVar3 + local_48) + unused_stack_8) -
                              (int)lVar2,
                         ((int)(longlong)(local_88 * dVar3 + local_80) + param_p3) - local_70,2);
            local_a4 = local_a4 + local_8c;
          } while (local_a4 != local_a0);
        }
        uVar1 = *(uint *)((int)this + 0x44);
        if ((uVar1 == 2) || (uVar1 == 3)) {
          FUN_004f5b30(this,uVar1);
          *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
          FUN_004f6890(this,unused_stack_8,param_p3,2);
          if (DAT_005ae974 == 0) {
            FUN_004747d0(&DAT_005a9e04,unused_stack_8,param_p3,1);
            DAT_005ae974 = 1;
          }
          if (0 < (int)DAT_005a9de8) {
            FUN_0053a090(&DAT_005d22f0,PTR_s___d_turns_0055d600,DAT_005a9de8);
            FUN_004950f0(&local_74,DAT_00585170,0);
            local_c._0_1_ = 1;
            if (local_74 != 0) {
              local_6c = 0x180;
              local_9c = unused_stack_8;
              local_98 = param_p3;
              local_94 = 100;
              local_90 = 0x14;
              FUN_0047f230(DAT_005a9dec,&local_74,&DAT_005d22f0,(int *)&local_9c,2,-1,0);
              FUN_00500650(&DAT_00584ae8,local_9c,local_98,local_94 + local_9c,local_90 + local_98);
            }
            DAT_00583648 = DAT_00583648 + -0x20;
            local_c = (uint)local_c._1_3_ << 8;
            FUN_00495590(&local_74);
          }
        }
        DAT_00583650 = DAT_00583650 + -0x10;
      }
    }
    else {
      DAT_00583650 = DAT_00583650 + -0x10;
    }
  }
  ExceptionList = local_14;
  return 1;
}


