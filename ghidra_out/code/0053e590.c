
void __cdecl
FUN_0053e590(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  int local_4;
  
  iVar6 = *(int *)((int)param_2 + 8);
  local_10 = iVar6;
  if ((iVar6 < -1) || (*(int *)(param_5 + 4) <= iVar6)) {
    FUN_0053f160();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar2 = FUN_0053efa0();
      if (pDVar2[0x1b] == 0) {
        return;
      }
      pDVar2 = FUN_0053efa0();
      param_1 = (PEXCEPTION_RECORD)pDVar2[0x1b];
      pDVar2 = FUN_0053efa0();
      param_3 = pDVar2[0x1c];
      iVar3 = FUN_00544ae0(param_1,1);
      if (iVar3 == 0) {
        FUN_0053f160();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_0053e806;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_0053f160();
      }
    }
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      local_1c = (int *)FUN_00539c50(param_5,param_7,iVar6,&local_20,&local_c);
      if (local_20 < local_c) {
        do {
          if ((*local_1c <= iVar6) && (iVar6 <= local_1c[1])) {
            local_14 = local_1c[3];
            local_24 = (byte *)local_1c[4];
            if (0 < local_14) {
              piVar5 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
              local_8 = piVar5 + 1;
              local_4 = *piVar5;
              do {
                local_18 = local_4;
                if (0 < local_4) {
                  iVar6 = *(int *)(local_24 + 4);
                  piVar5 = local_8;
                  do {
                    if ((iVar6 == 0) || (pbVar4 = (byte *)(iVar6 + 8), *(char *)(iVar6 + 8) == '\0')
                       ) {
LAB_0053e75f:
                      bVar8 = true;
                    }
                    else {
                      iVar3 = *(int *)((byte *)*piVar5 + 4);
                      if (iVar6 == iVar3) {
LAB_0053e73a:
                        if (((((*(byte *)*piVar5 & 2) == 0) || ((*local_24 & 8) != 0)) &&
                            (((*(uint *)param_1->ExceptionInformation[2] & 1) == 0 ||
                             ((*local_24 & 1) != 0)))) &&
                           (((*(uint *)param_1->ExceptionInformation[2] & 2) == 0 ||
                            ((*local_24 & 2) != 0)))) goto LAB_0053e75f;
                        bVar8 = false;
                      }
                      else {
                        pbVar7 = (byte *)(iVar3 + 8);
                        do {
                          bVar1 = *pbVar4;
                          bVar8 = bVar1 < *pbVar7;
                          if (bVar1 != *pbVar7) {
LAB_0053e71d:
                            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                            goto LAB_0053e722;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar4[1];
                          bVar8 = bVar1 < pbVar7[1];
                          if (bVar1 != pbVar7[1]) goto LAB_0053e71d;
                          pbVar4 = pbVar4 + 2;
                          pbVar7 = pbVar7 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_0053e722:
                        if (iVar3 == 0) goto LAB_0053e73a;
                        bVar8 = false;
                      }
                    }
                    if (bVar8) {
                      FUN_0053e9f0(param_1,param_2,param_3,param_4,param_5,local_24,(byte *)*piVar5,
                                   local_1c,param_7,param_8);
                      goto LAB_0053e7c7;
                    }
                    piVar5 = piVar5 + 1;
                    local_18 = local_18 + -1;
                  } while (0 < local_18);
                }
                local_14 = local_14 + -1;
                local_24 = local_24 + 0x10;
              } while (0 < local_14);
LAB_0053e7c7:
              iVar6 = local_10;
            }
          }
          local_20 = local_20 + 1;
          local_1c = local_1c + 5;
        } while (local_20 < local_c);
      }
      if (param_6 == '\0') {
        return;
      }
      FUN_0053ee20((int)param_1,1);
      return;
    }
  }
LAB_0053e806:
  if (param_6 == '\0') {
    FUN_0053e850(param_1,param_2,param_3,param_4,param_5,iVar6,param_7,param_8);
    return;
  }
  FUN_0053f0d0();
  return;
}


