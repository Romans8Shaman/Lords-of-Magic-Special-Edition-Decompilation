/* Rebuilt from lomse.exe FUN_00460440 @ 0x00460440 (165 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00478b80 ((undefined4 (__thiscall *)(void *, undefined4))0x00478b80)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00460440 1
void __thiscall rb_00460440(void *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 <= *(int *)((int)this + 0x18)) {
    do {
      iVar1 = FUN_004f6000(this,iVar2);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) {
        iVar1 = *(int *)(iVar1 + 0xc4);
        if ((iVar1 < 0) || ((DAT_005cd2f0 <= iVar1 || (DAT_005cd2f4 == 0)))) {
          iVar1 = 0;
        }
        else {
          iVar1 = DAT_005cd2f4 + iVar1 * 1000;
        }
        if (iVar1 != 0) {
          if (-1 < *(int *)(iVar1 + 0x29c)) {
            FUN_00478b80(&DAT_00585408,*(int *)(iVar1 + 0x29c));
          }
          if (-1 < *(int *)(iVar1 + 0x2a0)) {
            FUN_00478b80(&DAT_00585408,*(int *)(iVar1 + 0x2a0));
          }
          if (-1 < *(int *)(iVar1 + 0x2a4)) {
            FUN_00478b80(&DAT_00585408,*(int *)(iVar1 + 0x2a4));
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)((int)this + 0x18));
  }
  return;
}
