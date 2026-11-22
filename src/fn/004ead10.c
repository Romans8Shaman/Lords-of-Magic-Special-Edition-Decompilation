/* Rebuilt from lomse.exe FUN_004ead10 @ 0x004ead10 (440 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateThread (*(__typeof__(HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, LPVOID, DWORD, LPDWORD)) *)0x0054d08c) /* KERNEL32.DLL!CreateThread via IAT */
#define DAT_00572d34 (*(undefined4 *)0x00572d34)
#define DAT_00572d38 (*(undefined4 *)0x00572d38)
#define DAT_00572d3c (*(undefined4 *)0x00572d3c)
#define FUN_004eaed0 ((undefined4 (__fastcall *)(int))0x004eaed0)
#define FUN_004eb3e0 ((undefined4 (__stdcall *)(void))0x004eb3e0)
#define FreeLibrary (*(__typeof__(BOOL (__stdcall *)(HMODULE)) *)0x0054d090) /* KERNEL32.DLL!FreeLibrary via IAT */
#define GetProcAddress (*(__typeof__(FARPROC (__stdcall *)(HMODULE, LPCSTR)) *)0x0054d094) /* KERNEL32.DLL!GetProcAddress via IAT */
#define LoadLibraryA (*(__typeof__(HMODULE (__stdcall *)(LPCSTR)) *)0x0054d0ec) /* KERNEL32.DLL!LoadLibraryA via IAT */
#define MessageBoxA (*(__typeof__(int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT)) *)0x0054d28c) /* USER32.DLL!MessageBoxA via IAT */
#define MessageBoxA_exref ((void *)*(unsigned *)0x0054d28c) /* IAT value of MessageBoxA */
#define PTR_DAT_00572d40 (*(undefined * *)0x00572d40)
#define s_File_load_error_00572c8c (*(char (*)[])0x00572c8c)
#define s_Initialization_Error_00572d00 (*(char (*)[])0x00572d00)
#define s_SNWValid_dll_00572d24 (*(char (*)[])0x00572d24)
#define s_SNWValid_dll_not_found_in_Window_00572c28 (*(char (*)[])0x00572c28)
#define s_SNWValidate_00572d18 (*(char (*)[])0x00572d18)
#define s_SierraNW_dll_00572c18 (*(char (*)[])0x00572c18)
#define s_SierraNW_dll_not_found_in_Window_00572b50 (*(char (*)[])0x00572b50)
#define s_There_was_a_problem_Initializing_00572bb4 (*(char (*)[])0x00572bb4)
#define s_There_was_a_problem_Initializing_00572c9c (*(char (*)[])0x00572c9c)

#define LOM_SELF_004ead10 1
int __fastcall rb_004ead10(int param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  HANDLE pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
  DWORD DStack_14;
  typedef undefined4 _t_local_10;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined * _t_local_4;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  local_10 = DAT_00572d34;
  uVar5 = 0;
  local_c = DAT_00572d38;
  local_8 = DAT_00572d3c;
  local_4 = PTR_DAT_00572d40;
  local_18 = 0;
  local_1c = 0;
  iVar6 = -1;
  pHVar1 = LoadLibraryA(s_SNWValid_dll_00572d24);
  *(HMODULE *)(param_1 + 0x24) = pHVar1;
  pcVar4 = MessageBoxA_exref;
  if (pHVar1 == (HMODULE)0x0) {
    MessageBoxA(*(HWND *)(param_1 + 0x14),s_SNWValid_dll_not_found_in_Window_00572c28,
                s_File_load_error_00572c8c,0x10);
  }
  else {
    pFVar2 = GetProcAddress(pHVar1,s_SNWValidate_00572d18);
    pcVar4 = MessageBoxA_exref;
    *(FARPROC *)(param_1 + 0x28) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      MessageBoxA(*(HWND *)(param_1 + 0x14),s_There_was_a_problem_Initializing_00572c9c,
                  s_Initialization_Error_00572d00,0x10);
    }
    else {
      iVar6 = ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x18)), __typeof__(&local_10), __typeof__(&local_18), __typeof__(&local_1c), __typeof__(*(undefined4 *)(param_1 + 0x1c)), __typeof__(*(undefined4 *)(param_1 + 0x20)), __typeof__(*(undefined4 *)(param_1 + 0x14))))(*pFVar2))(*(undefined4 *)(param_1 + 0x18),&local_10,&local_18,&local_1c,
                        *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x14));
    }
    FreeLibrary(*(HMODULE *)(param_1 + 0x24));
    if (iVar6 != -2) {
      if (iVar6 == -1) {
        uVar5 = 0;
      }
      else {
        if (iVar6 != 0) goto LAB_004eaebb;
        uVar5 = 1;
      }
    }
  }
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    pHVar1 = LoadLibraryA(s_SierraNW_dll_00572c18);
    *(HMODULE *)(param_1 + 0x24) = pHVar1;
    if (pHVar1 != (HMODULE)0x0) {
      iVar6 = FUN_004eaed0(param_1);
      if (iVar6 == 0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x24));
        ((undefined4 (__stdcall *)(__typeof__(*(undefined4 *)(param_1 + 0x14)), __typeof__(s_There_was_a_problem_Initializing_00572bb4), __typeof__(s_Initialization_Error_00572d00), __typeof__(0x10)))(*pcVar4))(*(undefined4 *)(param_1 + 0x14),s_There_was_a_problem_Initializing_00572bb4,
                  s_Initialization_Error_00572d00,0x10);
        *(undefined4 *)(param_1 + 4) = 0;
        return -1;
      }
      iVar6 = ((undefined4 (__cdecl *)(__typeof__(&local_10), __typeof__(local_18), __typeof__(local_1c)))(**(code **)(param_1 + 0x2c)))(&local_10,local_18,local_1c);
      if (iVar6 == 0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x24));
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        return -1;
      }
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004eb3e0,(LPVOID)0x0,0,&DStack_14);
      *(HANDLE *)(param_1 + 0x10) = pvVar3;
      *(undefined4 *)(param_1 + 4) = uVar5;
      return 0;
    }
    ((undefined4 (__stdcall *)(__typeof__(*(undefined4 *)(param_1 + 0x14)), __typeof__(s_SierraNW_dll_not_found_in_Window_00572b50), __typeof__(s_File_load_error_00572c8c), __typeof__(0x10)))(*pcVar4))(*(undefined4 *)(param_1 + 0x14),s_SierraNW_dll_not_found_in_Window_00572b50,
              s_File_load_error_00572c8c,0x10);
    iVar6 = -1;
  }
LAB_004eaebb:
  *(undefined4 *)(param_1 + 4) = uVar5;
  return iVar6;
#undef local_1c
#undef local_18
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
