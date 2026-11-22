/* Rebuilt from lomse.exe FUN_00545ac0 @ 0x00545ac0 (388 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5310 (*(LCID *)0x005d5310)
#define DAT_005d5320 (*(UINT *)0x005d5320)
#define DAT_005d56e0 (*(int *)0x005d56e0)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_0053c4d0 ((int * (__cdecl *)(int, int))0x0053c4d0)
#define FUN_00544310 ((undefined4 * (__cdecl *)(undefined4 *, undefined4 *, uint))0x00544310)
#define GetStringTypeA (*(__typeof__(BOOL (__stdcall *)(LCID, DWORD, LPCSTR, int, LPWORD)) *)0x0054d10c) /* KERNEL32.DLL!GetStringTypeA via IAT */
#define GetStringTypeW (*(__typeof__(BOOL (__stdcall *)(DWORD, LPCWSTR, int, LPWORD)) *)0x0054d108) /* KERNEL32.DLL!GetStringTypeW via IAT */
#define WideCharToMultiByte (*(__typeof__(int (__stdcall *)(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, LPBOOL)) *)0x0054d170) /* KERNEL32.DLL!WideCharToMultiByte via IAT */

#define LOM_SELF_00545ac0 1
BOOL __cdecl
rb_00545ac0(DWORD in_stack_4,LPCWSTR in_stack_8,int in_stack_c,LPWORD in_stack_10,UINT in_stack_14,
            LCID in_stack_18)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef BOOL _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  lpCharType = (LPWORD)0x0;
  if (DAT_005d56e0 == 0) {
    BVar1 = GetStringTypeW(1,((ushort *)0x0054f01c),1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,((char *)0x0054f018),1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_005d56e0 = 2;
    }
    else {
      DAT_005d56e0 = 1;
    }
  }
  if (DAT_005d56e0 == 1) {
    BVar1 = GetStringTypeW(in_stack_4,in_stack_8,in_stack_c,in_stack_10);
    return BVar1;
  }
  local_4 = DAT_005d56e0;
  if (DAT_005d56e0 == 2) {
    local_4 = 0;
    if (in_stack_14 == 0) {
      in_stack_14 = DAT_005d5320;
    }
    cbMultiByte = WideCharToMultiByte(in_stack_14,0x220,in_stack_8,in_stack_c,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte == 0) {
      return 0;
    }
    lpMultiByteStr = FUN_0053c4d0(1,cbMultiByte);
    if (lpMultiByteStr == (int *)0x0) {
      return 0;
    }
    iVar2 = WideCharToMultiByte(in_stack_14,0x220,in_stack_8,in_stack_c,(LPSTR)lpMultiByteStr,
                                cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((iVar2 != 0) &&
       (lpCharType = (LPWORD)FUN_0053c1f0(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
      if (in_stack_18 == 0) {
        in_stack_18 = DAT_005d5310;
      }
      lpCharType[in_stack_c] = 0xffff;
      lpCharType[in_stack_c + -1] = 0xffff;
      local_4 = GetStringTypeA(in_stack_18,in_stack_4,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType)
      ;
      if ((lpCharType[in_stack_c + -1] == 0xffff) || (lpCharType[in_stack_c] != 0xffff)) {
        local_4 = 0;
      }
      else {
        FUN_00544310((undefined4 *)in_stack_10,(undefined4 *)lpCharType,in_stack_c * 2);
      }
    }
    FUN_0053bce0((undefined *)lpMultiByteStr);
    FUN_0053bce0((undefined *)lpCharType);
  }
  return local_4;
#undef local_4
}
