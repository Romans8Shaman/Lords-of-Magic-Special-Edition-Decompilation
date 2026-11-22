
undefined4 __thiscall FUN_0041d2f0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  void *local_8;
  void *local_4;
  
  if (*(int *)(param_1 + 0x48) == param_2) {
    return 1;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar3 = (int *)(param_1 + 0xd8);
    do {
      iVar2 = *piVar3;
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 8) & 1) != 0)) {
        *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
        *(uint *)(*piVar3 + 8) = *(uint *)(*piVar3 + 8) | 2;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x13;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    if (*(int *)(param_1 + 0x48) == *(int *)((int)this + 0x6a8)) {
      local_8 = (void *)((int)this + 0x660);
    }
    else if (*(int *)(param_1 + 0x48) == *(int *)((int)this + 0xc84)) {
      local_8 = (void *)((int)this + 0xc3c);
    }
    else {
      local_8 = (void *)0x0;
    }
    if (param_2 == *(int *)((int)this + 0x6a8)) {
      local_4 = (void *)((int)this + 0x660);
    }
    else if (param_2 == *(int *)((int)this + 0xc84)) {
      local_4 = (void *)((int)this + 0xc3c);
    }
    else {
      local_4 = (void *)0x0;
    }
    if (((local_8 != (void *)0x0) && (-1 < *(char *)(param_1 + 0x5ac))) &&
       ((int)*(char *)(param_1 + 0x5ac) < *(int *)((int)local_8 + 0x4c))) {
      iVar4 = FUN_004fbe60(&DAT_005ae974,0,0);
      bVar6 = false;
      for (; iVar4 != 0; iVar4 = FUN_004fbe60(&DAT_005ae974,iVar4,0)) {
        if (((iVar4 != param_1) && (*(int *)(iVar4 + 0x48) == *(int *)(param_1 + 0x48))) &&
           (*(char *)(iVar4 + 0x5ac) == *(char *)(param_1 + 0x5ac))) {
          bVar6 = true;
          break;
        }
      }
      if (!bVar6) {
        FUN_004164e0(local_8,(int)*(char *)(param_1 + 0x5ac),0);
        for (iVar4 = FUN_004fbe60(&DAT_005ae974,0,0); iVar4 != 0;
            iVar4 = FUN_004fbe60(&DAT_005ae974,iVar4,0)) {
          if ((*(int *)(iVar4 + 0x48) == *(int *)((int)local_8 + 0x48)) && (iVar4 != param_1)) {
            bVar6 = false;
            iVar2 = 0;
            if (0 < *(int *)((int)local_8 + 0x4c)) {
              piVar3 = (int *)((int)local_8 + 0xe4);
              do {
                if ((*(int *)(iVar4 + 0xe4) == *piVar3) && (-1 < *piVar3)) {
                  *(char *)(iVar4 + 0x5ac) = (char)iVar2;
                  bVar6 = true;
                  break;
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 0x13;
              } while (iVar2 < *(int *)((int)local_8 + 0x4c));
            }
            if (!bVar6) {
              *(undefined1 *)(iVar4 + 0x5ac) = 0xff;
            }
          }
        }
      }
    }
    if (local_4 != (void *)0x0) {
      iVar2 = FUN_004154a0((int)local_4);
      iVar1 = FUN_00415430((int)local_4);
      iVar4 = *(int *)((int)local_4 + 0x4c);
      if (((iVar4 - iVar1) - iVar2 < 9) && (iVar4 < 0xf)) {
        puVar5 = (undefined4 *)(param_1 + 0xc4);
        puVar7 = (undefined4 *)((int)local_4 + iVar4 * 0x4c + 0xc4);
        for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        *(int *)((int)local_4 + 0x4c) = *(int *)((int)local_4 + 0x4c) + 1;
        FUN_00415c20(local_4,(int *)0x0,-1);
        for (iVar4 = FUN_004fbe60(&DAT_005ae974,0,0); iVar4 != 0;
            iVar4 = FUN_004fbe60(&DAT_005ae974,iVar4,0)) {
          if ((*(int *)(iVar4 + 0x48) == *(int *)((int)local_4 + 0x48)) || (iVar4 == param_1)) {
            bVar6 = false;
            iVar2 = 0;
            if (0 < *(int *)((int)local_4 + 0x4c)) {
              piVar3 = (int *)((int)local_4 + 0xe4);
              do {
                if ((*(int *)(iVar4 + 0xe4) == *piVar3) && (-1 < *piVar3)) {
                  *(char *)(iVar4 + 0x5ac) = (char)iVar2;
                  bVar6 = true;
                  break;
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 0x13;
              } while (iVar2 < *(int *)((int)local_4 + 0x4c));
            }
            if (!bVar6) {
              *(undefined1 *)(iVar4 + 0x5ac) = 0xff;
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x5ac) = 0xff;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
          ((*(byte *)(param_1 + 0x30) & 0x20) != 0)) {
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,*(int *)(param_1 + 0x28),-1);
  }
  *(int *)(param_1 + 0x48) = param_2;
  return 1;
}


