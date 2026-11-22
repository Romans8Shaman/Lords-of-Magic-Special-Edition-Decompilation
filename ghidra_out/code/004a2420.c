
undefined4 __thiscall FUN_004a2420(void *this,LPCSTR param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 extraout_ECX_00;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  char local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  uint local_44;
  int local_40;
  char local_3c [4];
  char local_38 [4];
  char local_34 [4];
  int *local_30;
  DWORD local_2c;
  char local_28 [21];
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  local_28[3] = 0x4d;
  local_28[10] = 0x4d;
  local_28[0xd] = 0x4d;
  local_11 = *(undefined1 *)((int)this + 8);
  local_28[9] = 0x42;
  local_28[0xc] = 0x42;
  local_13 = *(undefined1 *)((int)this + 4);
  local_28[0x14] = (char)((uint)*(undefined4 *)((int)this + 4) >> 8);
  local_3 = *(undefined1 *)((int)this + 4);
  local_28[0] = 'F';
  local_28[1] = 0x4f;
  local_28[2] = 0x52;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0x50;
  local_28[0xb] = 0x20;
  local_28[0xe] = 0x48;
  local_28[0xf] = 0x44;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  local_28[0x12] = 0;
  local_28[0x13] = 0x14;
  local_12 = (undefined1)((uint)*(undefined4 *)((int)this + 8) >> 8);
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  local_d = 0;
  local_c = 8;
  local_b = 0;
  local_a = 1;
  local_9 = 0;
  local_8 = 0;
  local_7 = 0;
  local_6 = 1;
  local_5 = 1;
  local_30 = this;
  local_4 = local_28[0x14];
  local_2 = local_12;
  local_1 = local_11;
  piVar2 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_00539660(local_28,0x28,1,piVar2);
  FUN_00539660(&DAT_0055c978,4,1,piVar2);
  local_48 = '\0';
  local_47 = 0;
  local_46 = 3;
  local_45 = 0;
  FUN_00539660(&local_48,4,1,piVar2);
  iVar6 = 0;
  uVar4 = extraout_ECX;
  do {
    FUN_00474e70(&DAT_00584ae8,(uint *)local_3c,(uint *)local_38,(uint *)local_34,
                 CONCAT22((short)((uint)uVar4 >> 0x10),
                          *(undefined2 *)(iVar6 + *(int *)((int)this + 0x10))));
    local_4c = local_3c[0];
    local_4b = local_38[0];
    local_4a = local_34[0];
    FUN_00539660(&local_4c,1,1,piVar2);
    FUN_00539660(&local_4b,1,1,piVar2);
    FUN_00539660(&local_4a,1,1,piVar2);
    iVar6 = iVar6 + 2;
    uVar4 = extraout_ECX_00;
  } while (iVar6 < 0x200);
  FUN_00539660(&DAT_0055c970,4,1,piVar2);
  local_2c = FUN_0053ac20(piVar2);
  FUN_00539660(&DAT_0055c968,4,1,piVar2);
  local_44 = 0;
  local_40 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      iVar6 = *(int *)((int)this + 4);
      pcVar7 = (char *)(local_40 * *(int *)((int)this + 0xc) + *(int *)this);
      if (iVar6 != 0) {
        do {
          local_49 = *pcVar7;
          cVar1 = pcVar7[1];
          for (uVar5 = 1; ((cVar1 == local_49 && ((int)uVar5 < iVar6)) && ((int)uVar5 < 0x7f));
              uVar5 = uVar5 + 1) {
            cVar1 = pcVar7[uVar5 + 1];
          }
          if ((int)uVar5 < 3) {
            uVar5 = 1;
            if (1 < iVar6) {
              iVar3 = 3;
              do {
                if ((0x80 < iVar3) ||
                   ((((iVar3 + -1 < iVar6 &&
                      (cVar1 = pcVar7[iVar3 + -2], cVar1 == pcVar7[iVar3 + -1])) &&
                     ((iVar3 < iVar6 && ((cVar1 == pcVar7[uVar5 + 2] && (iVar3 + 1 < iVar6)))))) &&
                    (cVar1 == pcVar7[uVar5 + 3])))) break;
                uVar5 = uVar5 + 1;
                iVar3 = iVar3 + 1;
              } while ((int)uVar5 < iVar6);
            }
            param_1 = (LPCSTR)CONCAT31(param_1._1_3_,(char)uVar5 + -1);
            FUN_00539660((char *)&param_1,1,1,piVar2);
            FUN_00539660(pcVar7,uVar5,1,piVar2);
            local_44 = local_44 + 1 + uVar5;
          }
          else {
            param_1 = (LPCSTR)CONCAT31(param_1._1_3_,'\x01' - (char)uVar5);
            FUN_00539660((char *)&param_1,1,1,piVar2);
            FUN_00539660(&local_49,1,1,piVar2);
            local_44 = local_44 + 2;
          }
          iVar6 = iVar6 - uVar5;
          pcVar7 = pcVar7 + uVar5;
        } while (iVar6 != 0);
        this = local_30;
      }
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)((int)this + 8));
  }
  if ((local_44 & 1) != 0) {
    param_1 = (LPCSTR)((uint)param_1 & 0xffffff00);
    FUN_00539660((char *)&param_1,1,1,piVar2);
    local_44 = local_44 + 1;
  }
  iVar6 = local_44 + 0x330;
  local_48 = (char)((uint)iVar6 >> 0x18);
  local_47 = (undefined1)((uint)iVar6 >> 0x10);
  local_46 = (undefined1)((uint)iVar6 >> 8);
  local_45 = (undefined1)iVar6;
  FUN_0053a140(piVar2,4,0);
  FUN_00539660(&local_48,4,1,piVar2);
  local_48 = (char)(local_44 >> 0x18);
  local_47 = (undefined1)(local_44 >> 0x10);
  local_46 = (undefined1)(local_44 >> 8);
  local_45 = (undefined1)local_44;
  FUN_0053a140(piVar2,local_2c,0);
  FUN_00539660(&local_48,4,1,piVar2);
  FUN_005394d0(piVar2);
  return 1;
}


