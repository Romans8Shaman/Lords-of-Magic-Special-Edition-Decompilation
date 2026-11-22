/* Rebuilt from lomse.exe FUN_004b7410 @ 0x004b7410 (835 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define CreateFileA (*(__typeof__(HANDLE (__stdcall *)(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE)) *)0x0054d06c) /* KERNEL32.DLL!CreateFileA via IAT */
#define CreateFileMappingA (*(__typeof__(HANDLE (__stdcall *)(HANDLE, LPSECURITY_ATTRIBUTES, DWORD, DWORD, DWORD, LPCSTR)) *)0x0054d068) /* KERNEL32.DLL!CreateFileMappingA via IAT */
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b6f10 ((undefined4 (__stdcall *)(void))0x004b6f10)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b9570 ((undefined4 (__stdcall *)(undefined1, short))0x004b9570)
#define FUN_00533900 ((undefined4 (__cdecl *)(int, int, char *, int))0x00533900)
#define FUN_00533be0 ((uint (__cdecl *)(int *, int))0x00533be0)
#define FUN_00533f50 ((uint (__cdecl *)(int))0x00533f50)
#define GetFileSize (*(__typeof__(DWORD (__stdcall *)(HANDLE, LPDWORD)) *)0x0054d084) /* KERNEL32.DLL!GetFileSize via IAT */
#define MapViewOfFile (*(__typeof__(LPVOID (__stdcall *)(HANDLE, DWORD, DWORD, DWORD, SIZE_T)) *)0x0054d060) /* KERNEL32.DLL!MapViewOfFile via IAT */
#define UnmapViewOfFile (*(__typeof__(BOOL (__stdcall *)(LPCVOID)) *)0x0054d080) /* KERNEL32.DLL!UnmapViewOfFile via IAT */
#define s_1_0_7_0055d368 (*(char (*)[])0x0055d368)

#define LOM_SELF_004b7410 1
undefined4 __thiscall rb_004b7410(void *this,char param_1,int param_2,short param_3)

{
  int *this_00;
  LPVOID pvVar1;
  LPVOID pvVar2;
  LPCSTR lpFileName;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  DWORD DVar3;
  LPVOID lpBaseAddress;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uchar _fr[0x158] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14c;
  typedef LPVOID _t_local_140;
  typedef DWORD _t_local_13c;
  typedef undefined1 * _t_local_134;
  typedef int _t_local_130;
  typedef undefined4 _t_local_120;
  typedef undefined4 _t_local_11c;
  typedef int _t_local_108[5];
  typedef char _t_local_f3;
  typedef byte _t_local_f2;
  typedef short _t_local_f1;
  typedef int _t_local_ef;
  typedef int _t_local_eb;
  typedef int _t_local_e7;
  typedef undefined1 _t_local_e3[227];
#define local_14c (*(_t_local_14c *)(_fr + 0x4))
#define local_140 (*(_t_local_140 *)(_fr + 0x10))
#define local_13c (*(_t_local_13c *)(_fr + 0x14))
#define local_134 (*(_t_local_134 *)(_fr + 0x1c))
#define local_130 (*(_t_local_130 *)(_fr + 0x20))
#define local_120 (*(_t_local_120 *)(_fr + 0x30))
#define local_11c (*(_t_local_11c *)(_fr + 0x34))
#define local_108 (*(_t_local_108 *)(_fr + 0x48))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x5d))
#define local_f2 (*(_t_local_f2 *)(_fr + 0x5e))
#define local_f1 (*(_t_local_f1 *)(_fr + 0x5f))
#define local_ef (*(_t_local_ef *)(_fr + 0x61))
#define local_eb (*(_t_local_eb *)(_fr + 0x65))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x69))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x6d))
  
  lpFileName = (LPCSTR)FUN_004b9570(param_1,param_3);
  FUN_0048cc70(local_108,0x1f);
  local_f3 = param_1;
  iVar8 = 0;
  local_f1 = param_3;
  local_f2 = (byte)param_2;
  hFile = CreateFileA(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
  if (hFileMappingObject == (HANDLE)0x0) {
    return 0;
  }
  DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
  lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
  local_134 = local_e3;
  local_130 = 0x78;
  local_120 = 0;
  local_11c = 0;
  local_140 = lpBaseAddress;
  local_13c = DVar3;
  iVar4 = FUN_00533900((int)&local_140,-1,s_1_0_7_0055d368,0x38);
  if (iVar4 != 0) {
    return 0;
  }
  local_14c = -5;
  while( true ) {
    pvVar1 = local_140;
    local_134 = local_e3;
    local_130 = 0x78;
    local_eb = 0x78;
    local_ef = iVar8;
    uVar5 = FUN_00533be0((int *)&local_140,4);
    pvVar2 = local_140;
    local_eb = local_eb - local_130;
    if ((uVar5 != 0) && (uVar5 != 1)) {
      local_ef = 0;
      local_eb = 0;
      FUN_00489b70(&DAT_00584ae8,local_108);
      UnmapViewOfFile(lpBaseAddress);
      CloseHandle(hFileMappingObject);
      CloseHandle(hFile);
      FUN_00533f50((int)&local_140);
      return 0;
    }
    this_00 = *(int **)((int)this + 0x4b2c);
    if (this_00 != (int *)0x0) {
      ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x30)))(this_00);
    }
    if (param_2 == 0) {
      iVar4 = 1;
      while( true ) {
        iVar6 = *(int *)((int)this + 0x4b2c);
        if ((iVar6 == 0) || (iVar7 = *(int *)(iVar6 + 0x100), iVar7 < 1)) {
          iVar7 = 1;
        }
        if (iVar7 < iVar4) break;
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = FUN_004b7dd0(iVar6);
        }
        if (iVar4 != iVar6) {
          *(uint *)this = 1 << ((byte)iVar4 & 0x1f) | *(uint *)this;
        }
        iVar4 = iVar4 + 1;
      }
    }
    else {
      *(int *)this = 1 << ((byte)param_2 & 0x1f);
    }
    iVar4 = (iVar8 * 100) / (int)DVar3;
    local_e7 = iVar4;
    FUN_00489b70(&DAT_00584ae8,local_108);
    iVar6 = FUN_004b6f10();
    if (iVar6 == 0) break;
    if ((param_1 == 'M') && (4 < iVar4 - local_14c)) {
      local_14c = iVar4;
    }
    iVar8 = (int)pvVar2 + (iVar8 - (int)pvVar1);
    if (uVar5 == 1) {
      UnmapViewOfFile(lpBaseAddress);
      CloseHandle(hFileMappingObject);
      CloseHandle(hFile);
      FUN_00533f50((int)&local_140);
      local_ef = 1;
      local_eb = 0;
      FUN_00489b70(&DAT_00584ae8,local_108);
      return 1;
    }
  }
  UnmapViewOfFile(lpBaseAddress);
  CloseHandle(hFileMappingObject);
  CloseHandle(hFile);
  FUN_00533f50((int)&local_140);
  return 0;
#undef local_14c
#undef local_140
#undef local_13c
#undef local_134
#undef local_130
#undef local_120
#undef local_11c
#undef local_108
#undef local_f3
#undef local_f2
#undef local_f1
#undef local_ef
#undef local_eb
#undef local_e7
#undef local_e3
}
