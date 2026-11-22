/* Rebuilt from lomse.exe FUN_004c9320 @ 0x004c9320 (1156 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_00584d58 (*(HWND *)0x00584d58)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00474ad0 ((undefined4 (__fastcall *)(int))0x00474ad0)
#define FUN_004753d0 ((undefined4 (__fastcall *)(int))0x004753d0)
#define FUN_004c9920 ((undefined4 (__stdcall *)(void))0x004c9920)
#define FUN_004d4a10 ((undefined4 (__thiscall *)(void *, uint *))0x004d4a10)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_0053a790 ((undefined4 (__cdecl *)(LPCSTR))0x0053a790)
#define FUN_0053ae60 ((uint * (__cdecl *)(uint *, char))0x0053ae60)
#define FUN_0053b350 ((char * (__cdecl *)(char *, int, int *))0x0053b350)
#define GetDlgItemTextA (*(__typeof__(UINT (__stdcall *)(HWND, int, LPSTR, int)) *)0x0054d2b4) /* USER32.DLL!GetDlgItemTextA via IAT */
#define PostMessageA (*(__typeof__(BOOL (__stdcall *)(HWND, UINT, WPARAM, LPARAM)) *)0x0054d2b0) /* USER32.DLL!PostMessageA via IAT */
#define RedrawWindow (*(__typeof__(BOOL (__stdcall *)(HWND, RECT *, HRGN, UINT)) *)0x0054d2bc) /* USER32.DLL!RedrawWindow via IAT */
#define SendDlgItemMessageA (*(__typeof__(LRESULT (__stdcall *)(HWND, int, UINT, WPARAM, LPARAM)) *)0x0054d2b8) /* USER32.DLL!SendDlgItemMessageA via IAT */
#define SetDlgItemInt (*(__typeof__(BOOL (__stdcall *)(HWND, int, UINT, BOOL)) *)0x0054d2ac) /* USER32.DLL!SetDlgItemInt via IAT */
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */
#define s__d_gt__s_0055dad8 (*(char (*)[])0x0055dad8)

#define LOM_SELF_004c9320 1
undefined4 __stdcall rb_004c9320(HWND param_1, uint param_2, uint param_3, undefined4 unused_stack_12)

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
  uchar _fr[0x108] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_auStack_fc[25];
  typedef uint _t_auStack_98[38];
#define auStack_fc (*(_t_auStack_fc *)(_fr + 0x4))
#define auStack_98 (*(_t_auStack_98 *)(_fr + 0x68))
  
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
              FUN_0053a090((undefined1 *)auStack_98,s__d_gt__s_0055dad8,
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
              *(char *)auStack_fc = '\0';
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
#undef auStack_fc
#undef auStack_98
}
