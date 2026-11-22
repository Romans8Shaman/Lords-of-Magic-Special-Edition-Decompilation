/* Rebuilt from lomse.exe FUN_00529520 @ 0x00529520 (215 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(int *)0x005aee6c)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)
#define FUN_00529360 ((undefined4 (__thiscall *)(void *, uint, uint, int))0x00529360)

#define LOM_SELF_00529520 1
int __thiscall rb_00529520(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00529180(this);
  if (uVar1 != 0) {
    if (-1 < *(int *)(uVar1 + 0x24)) {
      iVar2 = FUN_004beef0((void *)(param_1 + 0x34),*(int *)(uVar1 + 0x24));
      if (iVar2 != 0) {
        iVar2 = FUN_00529360(this,1,1,*(int *)(uVar1 + 0x24));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x24);
        }
        iVar2 = FUN_00529360(this,1,2,*(int *)(uVar1 + 0x24));
        if (iVar2 != 0) {
          return *(int *)(uVar1 + 0x24);
        }
      }
    }
    iVar2 = 0;
    if (0 < DAT_005aee6c) {
      do {
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,1,1,iVar2);
          if (iVar3 != 0) goto LAB_005295e1;
        }
        iVar3 = FUN_004beef0((void *)(param_1 + 0x34),iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_00529360(this,1,2,iVar2);
          if (iVar3 != 0) {
LAB_005295e1:
            *(int *)(uVar1 + 0x24) = iVar2;
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
