/* Rebuilt from lomse.exe FUN_0052d090 @ 0x0052d090 (75 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa254 (*(undefined4 *)0x005aa254)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define _DAT_005a8080 (*(undefined4 *)0x005a8080)

#define LOM_SELF_0052d090 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0052d090(void *this,int *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar1 = (char *)((int)this + 0x232a8);
  iVar2 = 8;
  do {
    FUN_005397f0(pcVar1,0x310,1,param_1);
    pcVar1 = pcVar1 + 0x400;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _DAT_005a8080 = DAT_005aa254;
  return 1;
}
