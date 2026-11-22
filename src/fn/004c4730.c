/* Rebuilt from lomse.exe op_clearquests @ 0x004c4730 (48 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeedc (*(int *)0x005aeedc)
#define DAT_005aeee0 (*(undefined4 *)0x005aeee0)
#define DAT_005aeee4 (*(int *)0x005aeee4)

#define LOM_SELF_004c4730 1
void __cdecl rb_004c4730(void *vm)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_005aeedc) {
    do {
      iVar1 = DAT_005aeee4;
      *(undefined4 *)(DAT_005aeee4 + iVar2 * 8) = 0xffffffff;
      *(undefined1 *)(iVar1 + 4 + iVar2 * 8) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005aeedc);
  }
  DAT_005aeee0 = 0;
  return;
}
