/* Rebuilt from lomse.exe op_zerovisibility @ 0x004a9210 (69 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9bc (*(int *)0x005ae9bc)
#define DAT_005ae9c0 (*(int *)0x005ae9c0)
#define FUN_004a90b0 ((undefined4 (__thiscall *)(void *, int))0x004a90b0)

#define LOM_SELF_004a9210 1
void __cdecl rb_004a9210(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_005ae9c0) {
    do {
      iVar1 = iVar3 * 8;
      iVar2 = iVar3 * 8;
      iVar3 = iVar3 + 1;
      *(uint *)(DAT_005ae9bc + 4 + iVar2) = *(uint *)(DAT_005ae9bc + 4 + iVar1) & 0xffffff00;
    } while (iVar3 < DAT_005ae9c0);
  }
  FUN_004a90b0(&DAT_005ae958,*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  return;
}
