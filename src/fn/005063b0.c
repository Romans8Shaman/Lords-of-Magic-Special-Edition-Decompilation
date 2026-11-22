/* Rebuilt from lomse.exe FUN_005063b0 @ 0x005063b0 (176 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_005063b0 1
int __thiscall rb_005063b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    iVar3 = *(int *)((int)this + 0x4c);
    iVar2 = 0;
    if (0 < iVar3) {
      piVar4 = (int *)((int)this + 0xc4);
      do {
        iVar1 = *piVar4;
        if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
          iVar1 = 0;
        }
        else {
          iVar1 = DAT_005cd2f4 + iVar1 * 1000;
        }
        if (iVar1 != 0) {
          iVar2 = iVar2 + *(int *)(iVar1 + 0x124);
        }
        piVar4 = piVar4 + 0x13;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      piVar4 = (int *)((int)this + 0xc4);
      do {
        iVar1 = FUN_00525fc0(piVar4);
        if (iVar1 == 2) {
          iVar1 = FUN_005228b0(piVar4,*(undefined4 *)((int)this + 0x28),iVar3);
          if (iVar2 < iVar1 * 10) {
            iVar2 = iVar1 * 10;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar3 < *(int *)((int)this + 0x4c));
    }
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  return iVar2;
}
