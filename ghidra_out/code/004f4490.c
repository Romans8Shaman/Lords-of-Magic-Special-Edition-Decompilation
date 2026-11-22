
undefined4 __cdecl FUN_004f4490(int param_1,int *param_2,...)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int unaff_retaddr;
  uint uVar7;
  int iStack_70;
  undefined4 local_6c [4];
  undefined1 *puStack_5c;
  byte *pbStack_10;
  int *piStack_c;
  int iStack_8;
  int iStack_4;
  
  puVar5 = local_6c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_6c[0] = 0x6c;
  (/*IC:004f44d7*/**(code **)(*param_2 + 100))(param_2,0,local_6c,1,0);
  if (param_1 == 0) {
    uVar7 = 0;
    do {
      iVar2 = iStack_8;
      do {
        puVar3 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar3 = &DAT_00573288;
        }
        puVar4 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar4 = &DAT_00573288;
        }
        puVar1 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar1 = &DAT_00573288;
        }
        puVar6 = puStack_5c + 1;
        *puStack_5c = *(undefined1 *)
                       (((uint)(*pbStack_10 >>
                               (((byte)uVar7 & (byte)puVar3[1]) * (char)puVar4[2] & 0x1f)) &
                        *puVar1 & 0xff) + unaff_retaddr);
        puVar3 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar3 = &DAT_00573288;
        }
        puVar4 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar4 = &DAT_00573288;
        }
        pbStack_10 = pbStack_10 + ((uVar7 & puVar3[1]) == puVar4[1]);
        uVar7 = uVar7 + 1;
        iVar2 = iVar2 + -1;
        puStack_5c = puVar6;
      } while (iVar2 != 0);
      puStack_5c = puVar6 + (iStack_70 - iStack_8);
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  }
  else {
    uVar7 = 0;
    puStack_5c = puStack_5c + iStack_8 + -1;
    do {
      iVar2 = iStack_8;
      do {
        puVar3 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar3 = &DAT_00573288;
        }
        puVar4 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar4 = &DAT_00573288;
        }
        puVar1 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar1 = &DAT_00573288;
        }
        puVar6 = puStack_5c + -1;
        *puStack_5c = *(undefined1 *)
                       (((uint)(*pbStack_10 >>
                               (((byte)uVar7 & (byte)puVar3[1]) * (char)puVar4[2] & 0x1f)) &
                        *puVar1 & 0xff) + unaff_retaddr);
        puVar3 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar3 = &DAT_00573288;
        }
        puVar4 = DAT_00584aa8;
        if (DAT_00584aa8 == (uint *)0x0) {
          puVar4 = &DAT_00573288;
        }
        pbStack_10 = pbStack_10 + ((uVar7 & puVar3[1]) == puVar4[1]);
        uVar7 = uVar7 + 1;
        iVar2 = iVar2 + -1;
        puStack_5c = puVar6;
      } while (iVar2 != 0);
      puStack_5c = puVar6 + iStack_70 + iStack_8;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  }
  (/*IC:004f46d8*/**(code **)(*piStack_c + 0x80))(piStack_c,0);
  return 0;
}


