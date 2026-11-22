/* Rebuilt from lomse.exe FUN_00424dd0 @ 0x00424dd0 (76 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_005296a0 ((int (__thiscall *)(void *, int))0x005296a0)

#define LOM_SELF_00424dd0 1
int __thiscall rb_00424dd0(void *this,int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x48);
  if ((iVar2 < 0) || (0xf < iVar2)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + iVar2 * 0x1d84;
  }
  if (puVar1 == (undefined *)0x0) {
    return -1;
  }
  iVar2 = FUN_005296a0((void *)((int)this + param_1 * 0x4c + 0xc4),(int)puVar1);
  return iVar2;
}
