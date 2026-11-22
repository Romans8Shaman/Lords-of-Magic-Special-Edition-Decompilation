
void __cdecl op_C(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  BYTE *pBVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *in_stack_8;
  LPCSTR pCVar9;
  undefined2 *puStack_1c;
  undefined2 *puStack_18;
  _cpinfo _Stack_14;
  
  pCVar9 = (LPCSTR)0x0;
  in_stack_8 = (undefined2 *)0x0;
  if (DAT_005d5310 == 0) {
    PTR_DAT_00574e88 = &DAT_00574e92;
    PTR_DAT_00574e8c = &DAT_00574e92;
    FUN_0053bce0((undefined *)DAT_005d568c);
    FUN_0053bce0((undefined *)DAT_005d5690);
    DAT_005d568c = (undefined2 *)0x0;
    DAT_005d5690 = (undefined2 *)0x0;
    return;
  }
  if ((DAT_005d5320 != 0) ||
     (iVar3 = FUN_005479e0(0,(uint)DAT_005d56a4,0xb,(char *)&DAT_005d5320), iVar3 == 0)) {
    puStack_18 = (undefined2 *)FUN_0053c1f0(0x202);
    puStack_1c = (undefined2 *)FUN_0053c1f0(0x202);
    pCVar9 = (LPCSTR)FUN_0053c1f0(0x101);
    in_stack_8 = (undefined2 *)FUN_0053c1f0(0x202);
    if ((puStack_18 != (undefined2 *)0x0) &&
       (((puStack_1c != (undefined2 *)0x0 && (pCVar9 != (LPCSTR)0x0)) &&
        (in_stack_8 != (undefined2 *)0x0)))) {
      iVar3 = 0;
      do {
        pCVar9[iVar3] = (CHAR)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar4 = GetCPInfo(DAT_005d5320,&_Stack_14);
      if ((BVar4 != 0) && (_Stack_14.MaxCharSize < 3)) {
        DAT_00575094 = _Stack_14.MaxCharSize & 0xffff;
        if ((1 < DAT_00575094) && (_Stack_14.LeadByte[0] != '\0')) {
          pBVar6 = _Stack_14.LeadByte + 1;
          do {
            if (*pBVar6 == 0) break;
            uVar5 = (uint)pBVar6[-1];
            if (uVar5 <= *pBVar6) {
              do {
                pCVar9[uVar5] = '\0';
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 <= (int)(uint)*pBVar6);
            }
            pBVar1 = pBVar6 + 1;
            pBVar6 = pBVar6 + 2;
          } while (*pBVar1 != 0);
        }
        pWVar2 = puStack_18 + 1;
        BVar4 = FUN_00545c50(1,pCVar9,0x100,pWVar2,0,0,0);
        if (BVar4 != 0) {
          *puStack_18 = 0;
          iVar3 = 0;
          puVar7 = in_stack_8;
          do {
            *puVar7 = (short)iVar3;
            puVar7 = puVar7 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x100);
          puVar7 = puStack_1c + 1;
          BVar4 = FUN_00545ac0(1,in_stack_8,0x100,puVar7,0,0);
          if (BVar4 != 0) {
            *puStack_1c = 0;
            if ((1 < (int)DAT_00575094) && (_Stack_14.LeadByte[0] != '\0')) {
              pBVar6 = _Stack_14.LeadByte + 1;
              do {
                if (*pBVar6 == 0) break;
                uVar5 = (uint)pBVar6[-1];
                if (uVar5 <= *pBVar6) {
                  puVar8 = puStack_18 + uVar5 + 1;
                  do {
                    *puVar8 = 0x8000;
                    uVar5 = uVar5 + 1;
                    puVar8 = puVar8 + 1;
                  } while ((int)uVar5 <= (int)(uint)*pBVar6);
                }
                pBVar1 = pBVar6 + 1;
                pBVar6 = pBVar6 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_00574e88 = (undefined *)pWVar2;
            PTR_DAT_00574e8c = (undefined *)puVar7;
            if (DAT_005d568c != (undefined2 *)0x0) {
              FUN_0053bce0((undefined *)DAT_005d568c);
            }
            DAT_005d568c = puStack_18;
            if (DAT_005d5690 != (undefined2 *)0x0) {
              FUN_0053bce0((undefined *)DAT_005d5690);
            }
            DAT_005d5690 = puStack_1c;
            FUN_0053bce0(pCVar9);
            FUN_0053bce0((undefined *)in_stack_8);
            return;
          }
        }
      }
    }
  }
  FUN_0053bce0((undefined *)puStack_18);
  FUN_0053bce0((undefined *)puStack_1c);
  FUN_0053bce0(pCVar9);
  FUN_0053bce0((undefined *)in_stack_8);
  return;
}


