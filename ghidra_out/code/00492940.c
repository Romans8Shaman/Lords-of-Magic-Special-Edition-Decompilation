
int __thiscall
FUN_00492940(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054aa6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar3 = FUN_00492760(this,param_1);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      iVar4 = FUN_00492760(this,param_2);
      if (iVar4 == 0) {
        iVar1 = -1;
      }
      else {
        piVar5 = (int *)FUN_00492910(this,param_3);
        if (piVar5 == (int *)0x0) {
          iVar1 = -1;
        }
        else {
          piVar6 = (int *)FUN_00492910(this,param_4);
          if (piVar6 == (int *)0x0) {
            iVar1 = -1;
          }
          else {
            piVar7 = (int *)FUN_00492910(this,param_5);
            if (piVar7 == (int *)0x0) {
              iVar1 = -1;
            }
            else {
              piVar8 = (int *)FUN_00492910(this,param_6);
              if (piVar8 == (int *)0x0) {
                iVar1 = -1;
              }
              else {
                piVar9 = (int *)Ordinal_401(0x4c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
                uStack_4 = 0;
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)0x0;
                }
                else {
                  FUN_00539ff0(piVar9 + 2,0x10,4,&LAB_00474de0,FUN_0046ba20);
                  DAT_00583658 = DAT_00583658 + 0x4c;
                  *piVar9 = iVar3;
                  piVar9[1] = iVar4;
                  piVar9[2] = *piVar5;
                  piVar9[3] = piVar5[1];
                  piVar9[4] = piVar5[2];
                  piVar9[5] = piVar5[3];
                  piVar9[6] = *piVar6;
                  piVar9[7] = piVar6[1];
                  piVar9[8] = piVar6[2];
                  piVar9[9] = piVar6[3];
                  piVar9[10] = *piVar7;
                  piVar9[0xb] = piVar7[1];
                  piVar9[0xc] = piVar7[2];
                  piVar9[0xd] = piVar7[3];
                  piVar9[0xe] = *piVar8;
                  piVar9[0xf] = piVar8[1];
                  piVar9[0x10] = piVar8[2];
                  iVar3 = piVar8[3];
                  piVar9[0x12] = 0;
                  piVar9[0x11] = iVar3;
                }
                puVar2[1] = piVar9;
                if (piVar9 == (int *)0x0) {
                  iVar1 = -1;
                }
                else {
                  *puVar2 = 2;
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return iVar1;
}


