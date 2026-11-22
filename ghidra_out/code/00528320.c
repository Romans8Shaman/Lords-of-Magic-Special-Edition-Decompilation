
undefined4 __thiscall FUN_00528320(void *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 local_c;
  
  iVar8 = param_1;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  local_c = 0;
  if (param_1 < 1) {
    return 0;
  }
  FUN_00527e90(this,0x2f,&param_1);
  uVar2 = FUN_005291e0((int)this);
  if (uVar2 == 0) {
    iVar8 = *(int *)((int)this + 4) + iVar8;
    *(int *)((int)this + 4) = iVar8;
    if (param_1 < iVar8) {
      *(int *)((int)this + 4) = param_1;
    }
  }
  else {
    iVar3 = FUN_00521e00(this);
    while( true ) {
      do {
        iVar7 = 0;
        bVar1 = true;
        iVar5 = *(int *)(uVar2 + 0x44);
        piVar4 = (int *)(uVar2 + 0x44);
        if (0 < iVar5) {
          piVar6 = (int *)(uVar2 + 0x14);
          do {
            if (*piVar6 < param_1) {
              iVar8 = iVar8 + -1;
              *piVar6 = *piVar6 + 1;
              if (iVar8 < 1) goto LAB_0052842d;
            }
            if (*piVar6 < param_1) {
              bVar1 = false;
            }
            iVar5 = *piVar4;
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar7 < iVar5);
        }
      } while (!bVar1);
      if ((iVar8 < 1) || (*(int *)(iVar3 + 0x120) <= iVar5)) break;
      *(int *)(uVar2 + 0x14 + iVar5 * 4) = iVar8;
      if (param_1 < *(int *)(uVar2 + 0x14 + *piVar4 * 4)) {
        *(int *)(uVar2 + 0x14 + *piVar4 * 4) = param_1;
        iVar8 = iVar8 - param_1;
      }
      iVar5 = *piVar4;
      local_c = 1;
      *piVar4 = iVar5 + 1;
      if ((iVar8 < 1) || (*(int *)(iVar3 + 0x120) <= iVar5 + 1)) break;
    }
LAB_0052842d:
    iVar8 = 0;
    *(undefined4 *)((int)this + 4) = 0;
    if (0 < *(int *)(uVar2 + 0x44)) {
      piVar4 = (int *)(uVar2 + 0x14);
      do {
        if (param_1 < *piVar4) {
          *piVar4 = param_1;
        }
        iVar8 = iVar8 + 1;
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + *piVar4;
        piVar4 = piVar4 + 1;
      } while (iVar8 < *(int *)(uVar2 + 0x44));
      return local_c;
    }
  }
  return local_c;
}


