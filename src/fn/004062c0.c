/* Rebuilt from lomse.exe FUN_004062c0 @ 0x004062c0 (179 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00405a10 ((undefined4 (__thiscall *)(void *, int))0x00405a10)
#define FUN_00405a30 ((undefined4 (__thiscall *)(void *, int))0x00405a30)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004062c0 1
undefined4 __stdcall rb_004062c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  iVar1 = DAT_005ae98c;
  if (uVar2 != 0) {
    if ((*(byte *)(uVar2 + 0x78) & 4) != 0) {
      return 1;
    }
    iVar5 = DAT_005ae998;
    if (DAT_005ae998 <= DAT_005ae98c) {
      do {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar5);
        if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
            (*(int *)(iVar3 + 0x48) != *(int *)(uVar2 + 0x48))) &&
           (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) {
          iVar4 = FUN_00405a30((void *)(iVar3 + 0x68),param_1);
          if (iVar4 != 0) {
            return 1;
          }
          iVar3 = FUN_00405a10((void *)(iVar3 + 0x68),param_1);
          if (iVar3 != 0) {
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        if (iVar1 < iVar5) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}
