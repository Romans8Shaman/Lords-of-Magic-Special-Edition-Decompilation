
undefined4 __cdecl FUN_00547160(DWORD *param_1)

{
  DWORD *pDVar1;
  bool bVar2;
  DWORD *pDVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  DWORD local_4;
  
  pDVar3 = param_1;
  bVar2 = false;
  pDVar4 = param_1;
  switch(param_1) {
  case (DWORD *)0x2:
    puVar9 = &DAT_005d57b0;
    bVar2 = true;
    pcVar8 = DAT_005d57b0;
    break;
  default:
    return 0xffffffff;
  case (DWORD *)0x4:
  case (DWORD *)0x8:
  case (DWORD *)0xb:
    pDVar4 = FUN_0053efa0();
    uVar5 = FUN_00547370((int)param_1,pDVar4[0x14]);
    puVar9 = (undefined4 *)(uVar5 + 8);
    pcVar8 = (code *)*puVar9;
    break;
  case (DWORD *)0xf:
    puVar9 = &DAT_005d57bc;
    bVar2 = true;
    pcVar8 = DAT_005d57bc;
    break;
  case (DWORD *)0x15:
    puVar9 = &DAT_005d57b4;
    bVar2 = true;
    pcVar8 = DAT_005d57b4;
    break;
  case (DWORD *)0x16:
    puVar9 = &DAT_005d57b8;
    bVar2 = true;
    pcVar8 = DAT_005d57b8;
  }
  if (bVar2) {
    FUN_0053cbb0(1);
  }
  if (pcVar8 == (code *)0x1) {
    if (bVar2) {
      FUN_0053cc30(1);
      return 0;
    }
    return 0;
  }
  if (pcVar8 == (code *)0x0) {
    if (bVar2) {
      FUN_0053cc30(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    pDVar1 = (DWORD *)pDVar4[0x15];
    bVar10 = param_1 == (DWORD *)0x8;
    pDVar4[0x15] = 0;
    param_1 = pDVar1;
    if (bVar10) {
      local_4 = pDVar4[0x16];
      pDVar4[0x16] = 0x8c;
      goto LAB_00547293;
    }
  }
  else {
LAB_00547293:
    if (pDVar3 == (DWORD *)0x8) {
      if (DAT_00574e48 < DAT_00574e4c + DAT_00574e48) {
        iVar7 = DAT_00574e48 * 0xc;
        iVar6 = DAT_00574e48;
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(pDVar4[0x14] + 8 + iVar7) = 0;
          iVar7 = iVar7 + 0xc;
        } while (iVar6 < DAT_00574e4c + DAT_00574e48);
      }
      goto LAB_005472d8;
    }
  }
  *puVar9 = 0;
LAB_005472d8:
  if (bVar2) {
    FUN_0053cc30(1);
  }
  if (pDVar3 == (DWORD *)0x8) {
    (/*IC:005472f4*/*pcVar8)(8,pDVar4[0x16]);
  }
  else {
    (/*IC:005472fc*/*pcVar8)(pDVar3);
    if ((pDVar3 != (DWORD *)0xb) && (pDVar3 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar4[0x15] = (DWORD)param_1;
  if (pDVar3 == (DWORD *)0x8) {
    pDVar4[0x16] = local_4;
  }
  return 0;
}


