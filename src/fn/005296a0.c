/* Rebuilt from lomse.exe FUN_005296a0 @ 0x005296a0 (215 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(int *)0x005aee6c)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)
#define FUN_00529360 ((undefined4 (__thiscall *)(void *, uint, uint, int))0x00529360)

#define LOM_SELF_005296a0 1
int __thiscall rb_005296a0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00529180(this);
  if (uVar1 != 0) {
    if (-1 < *(int *)(uVar1 + 0x1c)) {
      iVar2 = FUN_004beef0((void *)(param_1 + 0x34),*(int *)(uVar1 + 0x1c));
      if (iVar2 != 0) {
        iVar2 = FUN_00529360(this,2,2,*(int *)(uVar1 + 0x1c));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x1c);
        }
        iVar2 = FUN_00529360(this,2,1,*(int *)(uVar1 + 0x1c));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x1c);
        }
      }
    }
    iVar2 = 0;
    if (0 < DAT_005aee6c) {
      do {
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,2,2,iVar2);
          if (iVar3 != 0) goto LAB_00529761;
        }
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,2,1,iVar2);
          if (iVar3 != 0) {
LAB_00529761:
            *(int *)(uVar1 + 0x1c) = iVar2;
            return iVar2;
          }
        }
        iVar2 = iVar2 + 1;
        if (DAT_005aee6c <= iVar2) {
          return -1;
        }
      } while( true );
    }
  }
  return -1;
}
