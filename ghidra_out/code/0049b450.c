
undefined4 __thiscall FUN_0049b450(void *this,byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_20 [2];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054ae38;
  local_c = ExceptionList;
  if (param_1 != (byte *)0x0) {
    ExceptionList = &local_c;
    uVar2 = FUN_00547b90(param_1,(byte *)((int)this + 0xc));
    if (uVar2 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    FUN_0049ab20(this);
    if (DAT_005d1f6c != (void *)0x0) {
      if (*(int *)this != 0) {
        DAT_00583718 = DAT_00583718 - *(int *)(*(int *)this + 0x18);
        FUN_004f5800(*(int *)this);
      }
      FUN_004fe720(local_20,(LPCSTR)param_1,4,0,0,4);
      local_4 = 0;
      if (local_20[0] == 0) {
        *(undefined4 *)this = 0;
      }
      else {
        iVar3 = FUN_004f55d0(DAT_005d1f6c,local_20[0],local_18,this,0);
        if (iVar3 == 0) {
          DAT_00583718 = DAT_00583718 + *(int *)(*(int *)this + 0x18);
          iVar3 = *(int *)(*(int *)this + 8);
          if (iVar3 != 0) {
            FUN_0049b180(&DAT_00584ae8,3,(uint)*(ushort *)(iVar3 + 4),(uint)*(ushort *)(iVar3 + 6),8
                        );
          }
          uVar2 = 0xffffffff;
          pbVar5 = param_1;
          do {
            pbVar6 = pbVar5;
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            pbVar6 = pbVar5 + 1;
            bVar1 = *pbVar5;
            pbVar5 = pbVar6;
          } while (bVar1 != 0);
          uVar2 = ~uVar2;
          pbVar5 = pbVar6 + -uVar2;
          pbVar6 = (byte *)((int)this + 0xc);
          for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
            pbVar5 = pbVar5 + 4;
            pbVar6 = pbVar6 + 4;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pbVar6 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar6 + 1;
          }
          if (param_2 != (int *)0x0) {
            *(int *)((int)this + 0x110) = *param_2;
            *(int *)((int)this + 0x114) = param_2[1];
            *(int *)((int)this + 0x118) = param_2[2];
          }
          if (*(int *)((int)this + 0x114) != 0) {
            FUN_0049ae00(this,param_1,(int)this + 0x110);
          }
          if (((*(int *)this != 0) && (iVar3 = *(int *)(*(int *)this + 8), iVar3 != 0)) &&
             (*(short *)(iVar3 + 0x1a) != 0)) {
            FUN_0049b220(this);
            local_4 = 0xffffffff;
            FUN_004fe9c0(local_20);
            ExceptionList = local_c;
            return 1;
          }
          OutputDebugStringA(s_no_sequence_set_data_0055c7a8);
        }
        else {
          *(undefined4 *)this = 0;
          Ordinal_403(local_20[0],s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
      local_4 = 0xffffffff;
      FUN_004fe9c0(local_20);
    }
  }
  ExceptionList = local_c;
  return 0;
}


