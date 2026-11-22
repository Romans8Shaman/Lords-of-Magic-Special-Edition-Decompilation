/* Rebuilt from lomse.exe op_chronocmp @ 0x004d8ab0 (692 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define CompareFileTime (*(__typeof__(LONG (__stdcall *)(FILETIME *, FILETIME *)) *)0x0054d0f0) /* KERNEL32.DLL!CompareFileTime via IAT */
#define CreateFileA (*(__typeof__(HANDLE (__stdcall *)(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE)) *)0x0054d06c) /* KERNEL32.DLL!CreateFileA via IAT */
#define DAT_00557ab8 (*(undefined *)0x00557ab8)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define GetFileTime (*(__typeof__(BOOL (__stdcall *)(HANDLE, LPFILETIME, LPFILETIME, LPFILETIME)) *)0x0054d0f4) /* KERNEL32.DLL!GetFileTime via IAT */
#define s_file_error_00572600 (*(char (*)[])0x00572600)

#define LOM_SELF_004d8ab0 1
void __cdecl rb_004d8ab0(void *vm)

{
  int iVar1;
  HANDLE hFile;
  HANDLE hFile_00;
  BOOL BVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uchar _fr[0x220] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_214;
#define uStack_214 (*(_t_uStack_214 *)(_fr + 0x4))
  _FILETIME _Stack_210;
  _FILETIME _Stack_208;
  CHAR aCStack_200 [256];
  CHAR aCStack_100 [256];
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_214 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar4 = '\0';
    uStack_214 = _Stack_210.dwHighDateTime;
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (cVar4 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uStack_214 = 0;
    }
  }
  else {
    uStack_214 = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uVar6 = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar4 = '\0';
    uVar6 = _Stack_210.dwHighDateTime;
  }
  iVar1 = FUN_0041da00((int)vm);
  uVar5 = 0;
  if (iVar1 == 0) {
    if (cVar4 == '\b') {
      uVar5 = uVar6;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar4 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    _Stack_210.dwHighDateTime = *(uint *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar4 = '\0';
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (cVar4 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      _Stack_210.dwHighDateTime = 0;
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
  }
  else {
    _Stack_210.dwHighDateTime = 0;
  }
  if ((_Stack_210.dwHighDateTime == 0) || (uVar5 == 0)) {
    if (*(int *)((int)vm + 0x54) == 0) {
      *(undefined4 *)((int)vm + 0x90) = 3;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    iVar3 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar3;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
    return;
  }
  FUN_0053a090(aCStack_200,&DAT_00557ab8,uStack_214,_Stack_210.dwHighDateTime);
  FUN_0053a090(aCStack_100,&DAT_00557ab8,uStack_214,uVar5);
  hFile = CreateFileA(aCStack_200,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  hFile_00 = CreateFileA(aCStack_100,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if ((((hFile == (HANDLE)0xffffffff) || (hFile_00 == (HANDLE)0xffffffff)) ||
      (BVar2 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&_Stack_210), BVar2 == 0)) ||
     (BVar2 = GetFileTime(hFile_00,(LPFILETIME)0x0,(LPFILETIME)0x0,&_Stack_208), BVar2 == 0)) {
    FUN_004d41c0(vm,s_file_error_00572600);
    uStack_214 = 0;
  }
  else {
    uStack_214 = CompareFileTime(&_Stack_210,&_Stack_208);
  }
  if (hFile != (HANDLE)0xffffffff) {
    CloseHandle(hFile);
  }
  if (hFile_00 != (HANDLE)0xffffffff) {
    CloseHandle(hFile_00);
  }
  if (*(int *)((int)vm + 0x54) == 0) {
    FUN_00404ab0(vm,3);
    return;
  }
  iVar1 = *(int *)((int)vm + 0x50);
  iVar3 = *(int *)((int)vm + 0x54) + -1;
  *(int *)((int)vm + 0x54) = iVar3;
  *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
  *(uint *)(iVar1 + 4 + iVar3 * 8) = uStack_214;
  return;
#undef uStack_214
}
