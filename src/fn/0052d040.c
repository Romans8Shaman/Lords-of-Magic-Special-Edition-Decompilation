/* Rebuilt from lomse.exe FUN_0052d040 @ 0x0052d040 (65 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0052d040 1
undefined4 __thiscall rb_0052d040(void *this,int *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar1 = (char *)((int)this + 0x232a8);
  iVar2 = 8;
  do {
    FUN_00539660(pcVar1,0x310,1,param_1);
    pcVar1 = pcVar1 + 0x400;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}
