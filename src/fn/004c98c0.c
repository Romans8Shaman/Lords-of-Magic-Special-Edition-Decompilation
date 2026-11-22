/* Rebuilt from lomse.exe FUN_004c98c0 @ 0x004c98c0 (51 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004c9920 ((undefined4 (__stdcall *)(void))0x004c9920)
#define FUN_004d5b70 ((undefined4 (__thiscall *)(void *, char *))0x004d5b70)
#define FUN_004d5bc0 ((undefined4 (__thiscall *)(void *, char *))0x004d5bc0)

#define LOM_SELF_004c98c0 1
undefined4 __stdcall rb_004c98c0(void)

{
  char *pcVar1;
  
  if (DAT_005a7b78 == (void *)0x0) {
    return 0;
  }
  pcVar1 = (char *)FUN_004c9920();
  FUN_004d5b70(DAT_005a7b78,pcVar1);
  FUN_004d5bc0(DAT_005a7b78,pcVar1);
  return 1;
}
