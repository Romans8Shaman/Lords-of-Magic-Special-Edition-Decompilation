
int __cdecl FUN_0053e290(uint param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char local_9;
  DWORD local_8;
  int *local_4;
  
  iVar8 = 0;
  if (param_3 != 0) {
    piVar1 = &DAT_005d6a20 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 0x24;
    bVar3 = *(byte *)(iVar7 + 4 + (&DAT_005d6a20)[(int)param_1 >> 5]);
    if ((bVar3 & 2) == 0) {
      pcVar10 = param_2;
      if (((bVar3 & 0x48) != 0) &&
         (cVar2 = *(char *)(iVar7 + (&DAT_005d6a20)[(int)param_1 >> 5] + 5), cVar2 != '\n')) {
        *param_2 = cVar2;
        param_3 = param_3 - 1;
        pcVar10 = param_2 + 1;
        iVar8 = 1;
        *(undefined1 *)(iVar7 + 5 + *piVar1) = 10;
      }
      local_4 = piVar1;
      BVar4 = ReadFile(*(HANDLE *)(iVar7 + *piVar1),pcVar10,param_3,&local_8,(LPOVERLAPPED)0x0);
      if (BVar4 != 0) {
        iVar8 = iVar8 + local_8;
        bVar3 = *(byte *)(iVar7 + 4 + *piVar1);
        if ((bVar3 & 0x80) != 0) {
          if ((local_8 == 0) || (*param_2 != '\n')) {
            bVar3 = bVar3 & 0xfb;
          }
          else {
            bVar3 = bVar3 | 4;
          }
          *(byte *)(iVar7 + 4 + *piVar1) = bVar3;
          pcVar9 = param_2 + iVar8;
          pcVar10 = param_2;
          pcVar11 = param_2;
          if (param_2 < pcVar9) {
            while (cVar2 = *pcVar11, cVar2 != '\x1a') {
              if (cVar2 == '\r') {
                if (pcVar11 < pcVar9 + -1) {
                  if (pcVar11[1] == '\n') {
                    pcVar11 = pcVar11 + 2;
                    *pcVar10 = '\n';
                    goto LAB_0053e468;
                  }
                  *pcVar10 = '\r';
                  pcVar10 = pcVar10 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                else {
                  DVar5 = 0;
                  pcVar11 = pcVar11 + 1;
                  BVar4 = ReadFile(*(HANDLE *)(iVar7 + *local_4),&local_9,1,&local_8,
                                   (LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    DVar5 = GetLastError();
                  }
                  if ((DVar5 == 0) && (local_8 != 0)) {
                    if ((*(byte *)(iVar7 + 4 + *local_4) & 0x48) == 0) {
                      if ((pcVar10 == param_2) && (local_9 == '\n')) {
                        *pcVar10 = '\n';
                        goto LAB_0053e468;
                      }
                      FUN_0053f600(param_1,-1,1);
                      if (local_9 != '\n') goto LAB_0053e465;
                    }
                    else {
                      if (local_9 == '\n') {
                        *pcVar10 = '\n';
                        goto LAB_0053e468;
                      }
                      *pcVar10 = '\r';
                      pcVar10 = pcVar10 + 1;
                      *(char *)(iVar7 + 5 + *local_4) = local_9;
                    }
                  }
                  else {
LAB_0053e465:
                    *pcVar10 = '\r';
LAB_0053e468:
                    pcVar10 = pcVar10 + 1;
                  }
                }
              }
              else {
                *pcVar10 = cVar2;
                pcVar10 = pcVar10 + 1;
                pcVar11 = pcVar11 + 1;
              }
              if (pcVar9 <= pcVar11) {
                return (int)pcVar10 - (int)param_2;
              }
            }
            bVar3 = *(byte *)(iVar7 + 4 + *local_4);
            if ((bVar3 & 0x40) == 0) {
              *(byte *)(iVar7 + 4 + *local_4) = bVar3 | 2;
            }
          }
          iVar8 = (int)pcVar10 - (int)param_2;
        }
        return iVar8;
      }
      DVar5 = GetLastError();
      if (DVar5 == 5) {
        pDVar6 = FUN_0053b4c0();
        *pDVar6 = 9;
        pDVar6 = FUN_0053b4d0();
        *pDVar6 = 5;
        return -1;
      }
      if (DVar5 != 0x6d) {
        FUN_0053b440(DVar5);
        return -1;
      }
    }
  }
  return 0;
}


