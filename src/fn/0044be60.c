/* Rebuilt from lomse.exe op_setchampionname @ 0x0044be60 (230 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): pcStack_4 */
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_0044be60 1
void __cdecl rb_0044be60(void *vm)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
  char *pcStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    cVar3 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    pcStack_4 = *(char **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    cVar3 = '\0';
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  iVar2 = *(int *)((int)pvVar1 + 0x90);
  *(undefined4 *)((int)pvVar1 + 0x90) = 0;
  *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  if (iVar2 == 0) {
    if (cVar3 == '\b') {
    }
    else {
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      pcStack_4 = (char *)0x0;
    }
  }
  else {
    pcStack_4 = (char *)0x0;
  }
  if (pcStack_4 != (char *)0x0) {
    iVar2 = FUN_0041bf10(pvVar1,&iStack_8,(int *)&vm);
    if (iVar2 != 0) {
      _strncpy((char *)(iStack_8 + 0xec + (int)vm * 0x4c),pcStack_4,0x1f);
      *(undefined1 *)(iStack_8 + 0x10a + (int)vm * 0x4c) = 0;
    }
  }
  return;
#undef iStack_8
}
