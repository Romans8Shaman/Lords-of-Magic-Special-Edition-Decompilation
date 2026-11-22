/* Rebuilt from lomse.exe FUN_004c9990 @ 0x004c9990 (355 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_0055d4bc (*(undefined1 *)0x0055d4bc)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_005047e0 ((undefined4 (__thiscall *)(void *, LPCSTR, LPCSTR, UINT))0x005047e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_0053b3e0 ((int (__cdecl *)(char *, int *))0x0053b3e0)
#define SendDlgItemMessageA (*(__typeof__(LRESULT (__stdcall *)(HWND, int, UINT, WPARAM, LPARAM)) *)0x0054d2b8) /* USER32.DLL!SendDlgItemMessageA via IAT */
#define s_Do_you_wish_to_overwrite__s__0055db00 (*(char (*)[])0x0055db00)
#define s_Saving_Script_Window_0055dae8 (*(char (*)[])0x0055dae8)

#define LOM_SELF_004c9990 1
undefined4 __thiscall rb_004c9990(void *this,LPCSTR param_1)

{
  int *piVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  LRESULT LVar5;
  WPARAM wParam;
  uchar _fr[0x3f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef CHAR _t_local_3e8[1000];
#define local_3e8 (*(_t_local_3e8 *)(_fr + 0x0))
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_005572ec);
  if (piVar1 != (int *)0x0) {
    FUN_005394d0(piVar1);
    FUN_0053a090(local_3e8,s_Do_you_wish_to_overwrite__s__0055db00,(uint)param_1);
    iVar2 = FUN_005047e0(&DAT_00584ae8,local_3e8,s_Saving_Script_Window_0055dae8,4);
    if (iVar2 != 6) {
      return 0;
    }
  }
  piVar1 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(HWND *)this != (HWND)0x0) {
    LVar3 = SendDlgItemMessageA(*(HWND *)this,0x3ea,0x18b,0,0);
    if (LVar3 == -1) {
      FUN_005394d0(piVar1);
      return 0;
    }
    wParam = 0;
    if (0 < LVar3) {
      do {
        uVar4 = SendDlgItemMessageA(*(HWND *)this,0x3ea,0x18a,wParam,0);
        if ((((int)uVar4 < 0) || (999 < uVar4)) ||
           (LVar5 = SendDlgItemMessageA(*(HWND *)this,0x3ea,0x189,wParam,(LPARAM)local_3e8),
           LVar5 == -1)) {
          FUN_005394d0(piVar1);
          return 0;
        }
        FUN_0053b3e0(local_3e8,piVar1);
        FUN_0053b3e0(&DAT_0055d4bc,piVar1);
        wParam = wParam + 1;
      } while ((int)wParam < LVar3);
    }
  }
  FUN_005394d0(piVar1);
  return 1;
#undef local_3e8
}
