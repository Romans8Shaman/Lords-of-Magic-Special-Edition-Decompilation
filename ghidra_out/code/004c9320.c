
undefined4 FUN_004c9320(HWND param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  WPARAM wParam;
  uint *puVar6;
  LPCSTR pCVar7;
  int *piVar8;
  char *pcVar9;
  WPARAM WStack_100;
  uint auStack_fc [25];
  uint auStack_98 [38];
  
  if (param_2 < 7) {
    if (param_2 == 6) {
      uVar5 = param_3 & 0xffff;
      if (uVar5 == 0) {
        DAT_00584d58 = (HWND)0x0;
        return 1;
      }
      if ((uVar5 == 0) || (2 < uVar5)) {
        return 1;
      }
      DAT_00584d58 = param_1;
      return 1;
    }
    if (param_2 == 3) {
      ShowWindow(param_1,0);
      ShowWindow(param_1,5);
      return 0;
    }
  }
  else if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      SendDlgItemMessageA(param_1,0x3ea,0x184,0,0);
      SendDlgItemMessageA(param_1,0x3ea,0x194,0x280,0);
      SendDlgItemMessageA(param_1,1000,0xc5,100,0);
      return 1;
    }
    if (param_2 == 0xf) {
      FUN_004753d0(0x584ae8);
      RedrawWindow(param_1,(RECT *)0x0,(HRGN)0x0,0x405);
      return 0;
    }
    if (param_2 == 0x10) {
      ShowWindow(param_1,0);
      DAT_00584d58 = (HWND)0x0;
      FUN_004753d0(0x584ae8);
      return 0;
    }
  }
  else {
    if (param_2 == 0x111) {
      switch(param_3 & 0xffff) {
      case 1000:
      case 0x3ed:
        GetDlgItemTextA(param_1,1000,(LPSTR)auStack_fc,100);
        puVar6 = FUN_0053ae60(auStack_fc,'\r');
        if (puVar6 == (uint *)0x0) {
          return 1;
        }
        SendDlgItemMessageA(param_1,1000,0xc,0,0x579274);
        puVar6 = auStack_fc;
        if ((char)auStack_fc[0] != '\0') {
          do {
            cVar1 = (char)*puVar6;
            puVar3 = puVar6;
            if (cVar1 < ' ') {
              while (cVar1 != '\0') {
                *(char *)puVar3 = *(char *)((int)puVar3 + 1);
                cVar1 = *(char *)((int)puVar3 + 1);
                puVar3 = (uint *)((int)puVar3 + 1);
              }
            }
            else {
              puVar6 = (uint *)((int)puVar6 + 1);
            }
          } while ((char)*puVar6 != '\0');
          if (((char)auStack_fc[0] != '\0') && (DAT_005a7b78 != (void *)0x0)) {
            if ((short)param_3 != 0x3ed) {
              FUN_0053a090((undefined1 *)auStack_98,s__d>_s_0055dad8,
                           *(int *)((int)DAT_005a7b78 + 0x58) - *(int *)((int)DAT_005a7b78 + 0x54),
                           auStack_fc);
              WStack_100 = SendDlgItemMessageA(param_1,0x3ea,0x180,0,(LPARAM)auStack_98);
              FUN_004d4a10(DAT_005a7b78,auStack_fc);
            }
            pvVar4 = DAT_005a7b78;
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x90);
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 0;
            *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
            if (iVar2 == 0x16) {
              PostMessageA(param_1,0x10,0,0);
            }
            pcVar9 = &DAT_005572ec;
            pCVar7 = (LPCSTR)FUN_004c9920();
            piVar8 = (int *)FUN_00539610(pCVar7,pcVar9);
            if (piVar8 != (int *)0x0) {
              auStack_fc[0]._0_1_ = '\0';
              pcVar9 = FUN_0053b350((char *)auStack_fc,100,piVar8);
              while (pcVar9 != (char *)0x0) {
                puVar6 = FUN_0053ae60(auStack_fc,'\r');
                if (puVar6 != (uint *)0x0) {
                  *(undefined1 *)puVar6 = 0;
                }
                WStack_100 = SendDlgItemMessageA(param_1,0x3ea,0x180,0,(LPARAM)auStack_fc);
                pcVar9 = FUN_0053b350((char *)auStack_fc,100,piVar8);
              }
              FUN_005394d0(piVar8);
              pCVar7 = (LPCSTR)FUN_004c9920();
              FUN_0053a790(pCVar7);
            }
            SetDlgItemInt(param_1,0x3ee,
                          *(int *)((int)DAT_005a7b78 + 0x58) - *(int *)((int)DAT_005a7b78 + 0x54),0)
            ;
            SendDlgItemMessageA(param_1,0x3ea,0x186,WStack_100,0);
          }
        }
        RedrawWindow(param_1,(RECT *)0x0,(HRGN)0x0,0x405);
        return 1;
      default:
        return 1;
      case 0x3ea:
        goto switchD_004c94dc_caseD_3ea;
      case 0x3ec:
        SendDlgItemMessageA(param_1,0x3ea,0x184,0,0);
        return 1;
      }
    }
    if (param_2 == 0x200) {
      FUN_00474ad0(0x5a9e04);
    }
  }
  return 0;
switchD_004c94dc_caseD_3ea:
  if ((short)(param_3 >> 0x10) != 1) {
    return 1;
  }
  wParam = SendDlgItemMessageA(param_1,0x3ea,0x188,0,0);
  if (wParam == 0xffffffff) {
    return 1;
  }
  uVar5 = SendDlgItemMessageA(param_1,0x3ea,0x18a,0,0);
  if ((int)uVar5 < 1) {
    return 1;
  }
  if (0x95 < uVar5) {
    return 1;
  }
  SendDlgItemMessageA(param_1,0x3ea,0x189,wParam,(LPARAM)auStack_98);
  puVar6 = FUN_0053ae60(auStack_98,'>');
  if (puVar6 == (uint *)0x0) {
    return 1;
  }
  SendDlgItemMessageA(param_1,1000,0xc,0,(int)puVar6 + 1);
  return 1;
}


