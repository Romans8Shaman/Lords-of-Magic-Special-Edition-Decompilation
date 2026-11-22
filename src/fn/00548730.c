/* Rebuilt from lomse.exe FUN_00548730 @ 0x00548730 (709 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CompareStringA (*(__typeof__(int (__stdcall *)(LCID, DWORD, PCNZCH, int, PCNZCH, int)) *)0x0054d100) /* KERNEL32.DLL!CompareStringA via IAT */
#define CompareStringW (*(__typeof__(int (__stdcall *)(LCID, DWORD, PCNZWCH, int, PCNZWCH, int)) *)0x0054d1a4) /* KERNEL32.DLL!CompareStringW via IAT */
#define DAT_005d5320 (*(UINT *)0x005d5320)
#define DAT_005d57e8 (*(int *)0x005d57e8)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_00548a00 ((int (__cdecl *)(char *, int))0x00548a00)
#define GetCPInfo (*(__typeof__(BOOL (__stdcall *)(UINT, LPCPINFO)) *)0x0054d160) /* KERNEL32.DLL!GetCPInfo via IAT */
#define MultiByteToWideChar (*(__typeof__(int (__stdcall *)(UINT, DWORD, LPCSTR, int, LPWSTR, int)) *)0x0054d174) /* KERNEL32.DLL!MultiByteToWideChar via IAT */

#define LOM_SELF_00548730 1
int __cdecl
rb_00548730(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPWSTR cbMultiByte;
  BOOL BVar2;
  BYTE *pBVar3;
  LPWSTR lpWideCharStr;
  int iVar4;
  int iVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef _cpinfo _t_local_14;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  if (DAT_005d57e8 == 0) {
    iVar1 = CompareStringW(0,0,((ushort *)0x0054f01c),1,((ushort *)0x0054f01c),1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,((char *)0x0054f018),1,((char *)0x0054f018),1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_005d57e8 = 2;
    }
    else {
      DAT_005d57e8 = 1;
    }
  }
  if ((int)param_4 < 1) {
    cbMultiByte = param_4;
  }
  else {
    cbMultiByte = (LPWSTR)FUN_00548a00((char *)param_3,(int)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_00548a00((char *)param_5,param_6);
  }
  if (DAT_005d57e8 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,(int)cbMultiByte,(PCNZCH)param_5,param_6)
    ;
    return iVar1;
  }
  local_18 = DAT_005d57e8;
  if (DAT_005d57e8 == 1) {
    local_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_005d5320;
    }
    if ((cbMultiByte == (LPWSTR)0x0) || (param_6 == 0)) {
      if (cbMultiByte == (LPWSTR)param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < (int)cbMultiByte) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < (int)cbMultiByte) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpWideCharStr = (LPWSTR)FUN_0053c1f0(iVar1 * 2);
    if (lpWideCharStr == (LPWSTR)0x0) {
      return 0;
    }
    iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
    if ((((iVar4 != 0) &&
         (iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar4 != 0))
        && (param_4 = (LPWSTR)FUN_0053c1f0(iVar4 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar4), iVar5 != 0)) {
      local_18 = CompareStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar4);
    }
    FUN_0053bce0((undefined *)lpWideCharStr);
    FUN_0053bce0((undefined *)param_4);
  }
  return local_18;
#undef local_18
#undef local_14
}
