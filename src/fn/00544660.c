/* Rebuilt from lomse.exe FUN_00544660 @ 0x00544660 (188 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005771b0 (*(undefined4 *)0x005771b0)
#define DAT_005d59f4 (*(int * *)0x005d59f4)
#define DAT_005d6a00 (*(int *)0x005d6a00)
#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define FUN_0053c4d0 ((int * (__cdecl *)(int, int))0x0053c4d0)
#define PTR_DAT_005771a0 (*(void * *)0x005771a0)
#define __amsg_exit ((void (__cdecl *)(int))0x0053c470)

#define LOM_SELF_00544660 1
void __cdecl rb_00544660(void)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_005d6a00 == 0) {
    DAT_005d6a00 = 0x200;
  }
  else if (DAT_005d6a00 < 0x14) {
    DAT_005d6a00 = 0x14;
  }
  DAT_005d59f4 = FUN_0053c4d0(DAT_005d6a00,4);
  if (DAT_005d59f4 == (int *)0x0) {
    DAT_005d6a00 = 0x14;
    DAT_005d59f4 = FUN_0053c4d0(0x14,4);
    if (DAT_005d59f4 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar3 = 0;
  ppuVar1 = &PTR_DAT_005771a0;
  do {
    *(undefined ***)((int)DAT_005d59f4 + iVar3) = ppuVar1;
    ppuVar1 = ppuVar1 + 8;
    iVar3 = iVar3 + 4;
  } while ((int)ppuVar1 < 0x577420);
  uVar2 = 0;
  puVar4 = &DAT_005771b0;
  do {
    iVar3 = *(int *)((&DAT_005d6a20)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
    if ((iVar3 == -1) || (iVar3 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar2 = uVar2 + 1;
  } while ((int)puVar4 < 0x577210);
  return;
}
