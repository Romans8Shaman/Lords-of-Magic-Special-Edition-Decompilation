/* Rebuilt from lomse.exe op_strcpy @ 0x004cc140 (337 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): pcStack_4 */
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004cee20 ((int (__stdcall *)(char *))0x004cee20)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_004cc140 1
void __cdecl rb_004cc140(void *vm)

{
  int iVar1;
  size_t _Count;
  char cVar2;
  uint uVar3;
  char *_Source;
  char *pcStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    _Source = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    _Source = pcStack_4;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      _Source = (char *)0x0;
    }
  }
  else {
    _Source = (char *)0x0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pcStack_4 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    cVar2 = '\0';
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pcStack_4 = (char *)0x0;
    }
  }
  else {
    pcStack_4 = (char *)0x0;
  }
  if ((pcStack_4 != (char *)0x0) && (_Source != (char *)0x0)) {
    _Count = FUN_004cee20(pcStack_4);
    _strncpy(pcStack_4,_Source,_Count);
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *_Source;
      _Source = _Source + 1;
    } while (cVar2 != '\0');
    if ((int)_Count < (int)(~uVar3 - 1)) {
      *(undefined4 *)((int)vm + 0x90) = 0xf;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      pcStack_4[_Count] = '\0';
    }
  }
  return;
}
