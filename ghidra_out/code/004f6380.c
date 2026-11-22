
int __thiscall FUN_004f6380(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return -1;
  }
  local_2c = *(int *)((int)this + 0x14) + -1;
  local_28 = -1;
  bVar3 = false;
  local_30 = 999;
  local_20 = 999;
  local_1c = 999;
  iVar4 = -1;
  if (-1 < local_2c) {
    do {
      if (param_3 < 0) {
LAB_004f63ea:
        piVar1 = *(int **)(*(int *)((int)this + 0xc) + local_2c * 4);
        iVar4 = (/*IC:004f63f8*/**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
        if (iVar4 != 0) {
          piVar1 = *(int **)(*(int *)((int)this + 0xc) + local_2c * 4);
          iVar4 = (/*IC:004f640d*/**(code **)(*piVar1 + 4))(piVar1,param_1,param_2);
          piVar1 = *(int **)(*(int *)((int)this + 0xc) + local_2c * 4);
          iVar5 = (/*IC:004f641f*/**(code **)(*piVar1 + 0x48))(piVar1,&iStack_10);
          if (iVar5 != 0) {
            bVar8 = iVar4 != 0;
            iVar6 = (iStack_8 - iStack_10) + 1;
            iVar7 = (iStack_4 - iStack_c) + 1;
            iVar4 = ((iVar6 >> 1) - param_1) + iStack_10;
            iVar5 = ((iVar7 >> 1) - param_2) + iStack_c;
            iVar4 = iVar4 * iVar4 + iVar5 * iVar5;
            bVar2 = false;
            if (local_28 < 0) {
              bVar2 = true;
            }
            else if (bVar3 < bVar8) {
              bVar2 = true;
            }
            else if (bVar3 == bVar8) {
              if (DAT_00573300 + iVar4 < local_30) {
                bVar2 = true;
              }
              else if ((iVar4 - DAT_00573300 <= local_30) &&
                      (bVar2 = true,
                      local_1c * local_20 <= (DAT_00573304 + iVar6) * (DAT_00573308 + iVar7))) {
                bVar2 = false;
              }
            }
            if (bVar2) {
              local_28 = local_2c;
              local_30 = iVar4;
              local_20 = iVar6;
              local_1c = iVar7;
              bVar3 = bVar8;
            }
          }
        }
      }
      else if (*(int *)(*(int *)(*(int *)((int)this + 0xc) + local_2c * 4) + 4) == param_3)
      goto LAB_004f63ea;
      local_2c = local_2c + -1;
    } while (-1 < local_2c);
    iVar4 = local_28;
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  return *(int *)(*(int *)(*(int *)((int)this + 0xc) + iVar4 * 4) + 0x28);
}


