
int __thiscall FUN_004066e0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_1c;
  int local_18;
  
  iVar7 = *(int *)((int)this + 0x40);
  iVar1 = *(int *)((int)this + 0x34);
  local_18 = 0;
  for (; iVar7 <= iVar1; iVar7 = iVar7 + 1) {
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
    iVar5 = 0;
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(int *)(iVar3 + 0x48) == param_1)) &&
       (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) {
      local_1c = 0;
      if (0 < *(int *)(iVar3 + 0x4c)) {
        piVar6 = (int *)(iVar3 + 0xcc);
        do {
          uVar2 = *(undefined4 *)(iVar3 + 0x28);
          if ((piVar6[7] & 8U) == 0) {
            iVar4 = *piVar6;
          }
          else {
            piVar6[7] = piVar6[7] & 0xfffffff7;
            iVar4 = FUN_00521e00(piVar6 + -2);
            if (iVar4 == 0) {
              *piVar6 = 1;
              iVar4 = 1;
            }
            else if (((char)*(uint *)(iVar4 + 0x104) == '\x06') &&
                    ((*(uint *)(iVar4 + 0x104) & 0x100) == 0)) {
              iVar4 = FUN_00522080(piVar6 + -2,iVar4,uVar2,iVar5);
            }
            else {
              *piVar6 = 1;
              iVar4 = 1;
            }
          }
          piVar6 = piVar6 + 0x13;
          local_1c = local_1c + iVar4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar3 + 0x4c));
      }
      local_18 = local_18 + local_1c;
    }
  }
  return local_18;
}


