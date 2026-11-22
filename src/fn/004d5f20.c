/* Rebuilt from lomse.exe FUN_004d5f20 @ 0x004d5f20 (127 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_004d5f20 1
undefined4 __thiscall rb_004d5f20(void *this, uint volatile param_1, int volatile param_2, int *volatile param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  piVar3 = param_3;
  if ((char)param_1 == '\x05') {
    if ((param_1 & 0x100) != 0) {
      return 0;
    }
    pcVar2 = *(char **)(*(int *)(*(int *)((int)this + 0x80) + param_2 * 4) + 4);
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    uVar4 = 0xffffffff;
    pcVar5 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_1 = ~uVar4 - 1;
    uVar4 = FUN_00539660((char *)&param_1,4,1,param_3);
    if (uVar4 == 1) {
      uVar4 = FUN_00539660(pcVar2,param_1,1,piVar3);
      return (uint)(uVar4 == 1);
    }
  }
  return 0;
}
