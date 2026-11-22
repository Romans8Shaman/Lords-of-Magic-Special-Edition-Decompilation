
int __thiscall
FUN_00492b30(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054aa8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00491c70(this);
  puVar3 = (undefined4 *)FUN_00491c20(this,iVar2);
  if (puVar3 == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
    piVar4 = (int *)FUN_00492760(this,param_3);
    if (piVar4 == (int *)0x0) {
      iVar2 = -1;
    }
    else {
      piVar5 = (int *)FUN_00492760(this,param_4);
      if (piVar5 == (int *)0x0) {
        iVar2 = -1;
      }
      else {
        iVar6 = FUN_00491ec0(this,param_1);
        if (iVar6 == *piVar4) {
          iVar6 = FUN_00491ec0(this,param_2);
          if (iVar6 == *piVar5) {
            puVar7 = (undefined4 *)FUN_00492910(this,param_5);
            if (puVar7 == (undefined4 *)0x0) {
              iVar2 = -1;
            }
            else {
              puVar8 = (undefined4 *)FUN_00492910(this,param_6);
              if (puVar8 == (undefined4 *)0x0) {
                iVar2 = -1;
              }
              else {
                puVar9 = (undefined4 *)FUN_00492910(this,param_7);
                if (puVar9 == (undefined4 *)0x0) {
                  iVar2 = -1;
                }
                else {
                  puVar10 = (undefined4 *)FUN_00492910(this,param_8);
                  if (puVar10 == (undefined4 *)0x0) {
                    iVar2 = -1;
                  }
                  else {
                    puVar11 = (undefined4 *)
                              Ordinal_401(0x4c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
                    uStack_4 = 0;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = (undefined4 *)0x0;
                    }
                    else {
                      FUN_00539ff0(puVar11 + 2,0x10,4,&LAB_00474de0,FUN_0046ba20);
                      DAT_00583658 = DAT_00583658 + 0x4c;
                      puVar11[1] = piVar5;
                      *puVar11 = piVar4;
                      puVar11[2] = *puVar7;
                      puVar11[3] = puVar7[1];
                      puVar11[4] = puVar7[2];
                      puVar11[5] = puVar7[3];
                      puVar11[6] = *puVar8;
                      puVar11[7] = puVar8[1];
                      puVar11[8] = puVar8[2];
                      puVar11[9] = puVar8[3];
                      puVar11[10] = *puVar9;
                      puVar11[0xb] = puVar9[1];
                      puVar11[0xc] = puVar9[2];
                      puVar11[0xd] = puVar9[3];
                      puVar11[0xe] = *puVar10;
                      puVar11[0xf] = puVar10[1];
                      puVar11[0x10] = puVar10[2];
                      uVar1 = puVar10[3];
                      puVar11[0x12] = 1;
                      puVar11[0x11] = uVar1;
                    }
                    puVar3[1] = puVar11;
                    if (puVar11 == (undefined4 *)0x0) {
                      iVar2 = -1;
                    }
                    else {
                      *puVar3 = 2;
                      *(undefined4 *)(param_1 * 8 + *(int *)((int)this + 4)) = 0;
                      *(undefined4 *)(param_1 * 8 + 4 + *(int *)((int)this + 4)) = 0;
                      *(undefined4 *)(param_2 * 8 + *(int *)((int)this + 4)) = 0;
                      *(undefined4 *)(param_2 * 8 + 4 + *(int *)((int)this + 4)) = 0;
                      *(undefined4 *)(param_3 * 8 + *(int *)((int)this + 4)) = 0;
                      *(undefined4 *)(param_3 * 8 + 4 + *(int *)((int)this + 4)) = 0;
                      *(undefined4 *)(param_4 * 8 + *(int *)((int)this + 4)) = 0;
                      *(undefined4 *)(param_4 * 8 + 4 + *(int *)((int)this + 4)) = 0;
                    }
                  }
                }
              }
            }
          }
          else {
            iVar2 = -1;
          }
        }
        else {
          iVar2 = -1;
        }
      }
    }
  }
  ExceptionList = local_c;
  return iVar2;
}


