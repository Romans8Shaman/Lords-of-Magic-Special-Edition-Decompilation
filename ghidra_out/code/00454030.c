
void __cdecl
FUN_00454030(int in_stack_4,int in_stack_8,int in_stack_c,int in_stack_10,int in_stack_14)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  uVar1 = *(undefined2 *)(DAT_005851b8 + in_stack_14 * 2);
  local_c = 1;
  local_8 = 1;
  (/*IC:00454069*/**(code **)(*DAT_00585170 + 100))(DAT_00585170,0,&DAT_00585238,1,0);
  iVar3 = DAT_0058525c;
  uVar6 = in_stack_c - in_stack_4 >> 0x1f;
  iVar8 = (in_stack_c - in_stack_4 ^ uVar6) - uVar6;
  uVar6 = in_stack_10 - in_stack_8 >> 0x1f;
  iVar9 = (in_stack_10 - in_stack_8 ^ uVar6) - uVar6;
  iVar5 = DAT_00585248 >> 1;
  if (in_stack_c < in_stack_4) {
    local_8 = -1;
  }
  if (in_stack_10 < in_stack_8) {
    local_c = -1;
  }
  if (iVar9 < iVar8) {
    iVar7 = iVar9 * 2 - iVar8;
    if (0 < iVar8 + 1) {
      iVar4 = iVar5 * in_stack_8;
      in_stack_10 = iVar8 + 1;
      in_stack_c = iVar4;
      do {
        iVar2 = iVar9;
        if (-1 < iVar7) {
          in_stack_8 = in_stack_8 + local_c;
          iVar4 = iVar4 + iVar5 * local_c;
          iVar2 = iVar9 - iVar8;
          in_stack_c = iVar4;
        }
        iVar7 = iVar7 + iVar2 * 2;
        in_stack_4 = in_stack_4 + local_8;
        if (((0 < in_stack_4) && (in_stack_4 < 0x27f)) && ((0 < in_stack_8 && (in_stack_8 < 0x17f)))
           ) {
          *(undefined2 *)(iVar3 + (iVar4 + in_stack_4) * 2) = uVar1;
          iVar4 = in_stack_c;
        }
        in_stack_10 = in_stack_10 + -1;
      } while (in_stack_10 != 0);
    }
  }
  else {
    in_stack_c = iVar8 * 2 - iVar9;
    if (0 < iVar9 + 1) {
      iVar7 = iVar5 * in_stack_8;
      in_stack_10 = iVar9 + 1;
      do {
        iVar4 = iVar8;
        if (-1 < in_stack_c) {
          in_stack_4 = in_stack_4 + local_8;
          iVar4 = iVar8 - iVar9;
        }
        in_stack_c = in_stack_c + iVar4 * 2;
        in_stack_8 = in_stack_8 + local_c;
        iVar7 = iVar7 + iVar5 * local_c;
        if ((((0 < in_stack_4) && (in_stack_4 < 0x27f)) && (0 < in_stack_8)) && (in_stack_8 < 0x17f)
           ) {
          *(undefined2 *)(iVar3 + (iVar7 + in_stack_4) * 2) = uVar1;
        }
        in_stack_10 = in_stack_10 + -1;
      } while (in_stack_10 != 0);
    }
  }
  (/*IC:004541ed*/**(code **)(*DAT_00585170 + 0x80))(DAT_00585170,iVar3);
  return;
}


