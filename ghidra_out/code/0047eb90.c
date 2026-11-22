
void __thiscall FUN_0047eb90(void *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_14;
  int local_c;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    local_c = *(int *)((int)this + 4);
    local_14 = *(int *)((int)this + 8);
    iVar2 = piVar1[3];
    if (piVar1[1] < local_c + param_2) {
      local_c = piVar1[1] - param_2;
    }
    if (piVar1[2] < local_14 + param_3) {
      local_14 = piVar1[2] - param_3;
    }
    if ((((-1 < param_2) && (-1 < param_3)) && (0 < local_c)) && (0 < local_14)) {
      iVar6 = iVar2 * param_3;
      local_18 = 0;
      cVar7 = '\0';
      iVar8 = 0;
      if (0 < local_c) {
        do {
          iVar8 = local_18;
          if (cVar7 != '\0') break;
          iVar8 = local_14 + -1;
          if (-1 < iVar8) {
            pcVar4 = (char *)(iVar2 * iVar8 + param_2 + iVar6 + *piVar1 + local_18);
            do {
              if (cVar7 != '\0') break;
              cVar7 = *pcVar4;
              iVar8 = iVar8 + -1;
              pcVar4 = pcVar4 + -iVar2;
            } while (-1 < iVar8);
          }
          iVar8 = local_18 + 1;
          local_18 = iVar8;
        } while (iVar8 < local_c);
      }
      uVar5 = param_1 & 0xff;
      *(char *)((int)this + uVar5 * 0x1c + 0x28) = (char)iVar8 + -1;
      cVar7 = '\0';
      local_c = local_c + -1;
      iVar8 = local_c;
      while ((-1 < iVar8 && (cVar7 == '\0'))) {
        iVar9 = local_14 + -1;
        cVar7 = '\0';
        if (-1 < iVar9) {
          pcVar4 = (char *)(iVar2 * iVar9 + **(int **)this + param_2 + iVar6 + iVar8);
          do {
            if (cVar7 != '\0') break;
            cVar7 = *pcVar4;
            iVar9 = iVar9 + -1;
            pcVar4 = pcVar4 + -iVar2;
          } while (-1 < iVar9);
        }
        iVar8 = iVar8 + -1;
      }
      *(char *)((int)this + uVar5 * 0x1c + 0x2a) = (char)iVar8 + '\x02';
      iVar9 = 0;
      cVar7 = '\0';
      iVar8 = **(int **)this + param_2 + iVar6;
      if (0 < local_14) {
        do {
          iVar3 = local_c;
          if (cVar7 != '\0') break;
          while ((-1 < iVar3 && (cVar7 == '\0'))) {
            cVar7 = *(char *)(iVar3 + iVar8);
            iVar3 = iVar3 + -1;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + iVar2;
        } while (iVar9 < local_14);
      }
      *(char *)((int)this + uVar5 * 0x1c + 0x29) = (char)iVar9 + -1;
      cVar7 = '\0';
      local_14 = local_14 + -1;
      if (-1 < local_14) {
        iVar8 = iVar2 * local_14 + **(int **)this + param_2 + iVar6;
        do {
          iVar6 = local_c;
          if (cVar7 != '\0') break;
          while ((-1 < iVar6 && (cVar7 == '\0'))) {
            cVar7 = *(char *)(iVar6 + iVar8);
            iVar6 = iVar6 + -1;
          }
          local_14 = local_14 + -1;
          iVar8 = iVar8 - iVar2;
        } while (-1 < local_14);
      }
      *(char *)((int)this + uVar5 * 0x1c + 0x2b) = (char)local_14 + '\x02';
      *(undefined4 *)((int)this + uVar5 * 0x1c + 0x14) = *(undefined4 *)this;
      *(uint *)((int)this + uVar5 * 0x1c + 0x18) =
           param_2 + (uint)*(byte *)((int)this + uVar5 * 0x1c + 0x28);
      *(uint *)((int)this + (uVar5 + 1) * 0x1c) =
           param_3 + (uint)*(byte *)((int)this + uVar5 * 0x1c + 0x29);
      *(uint *)((int)this + uVar5 * 0x1c + 0x20) =
           (uint)*(byte *)((int)this + uVar5 * 0x1c + 0x2a) -
           (uint)*(byte *)((int)this + uVar5 * 0x1c + 0x28);
      *(uint *)((int)this + uVar5 * 0x1c + 0x24) =
           (uint)*(byte *)((int)this + uVar5 * 0x1c + 0x2b) -
           (uint)*(byte *)((int)this + uVar5 * 0x1c + 0x29);
    }
  }
  return;
}


