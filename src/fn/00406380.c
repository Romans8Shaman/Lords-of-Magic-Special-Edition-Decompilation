/* Rebuilt from lomse.exe FUN_00406380 @ 0x00406380 (212 bytes, __stdcall).
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

#define LOM_SELF_00406380 1
undefined4 __stdcall rb_00406380(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  iVar2 = DAT_005ae98c;
  if (uVar3 != 0) {
    bVar1 = *(byte *)(uVar3 + 0x78);
    if ((bVar1 & 4) != 0) {
      return 1;
    }
    if ((bVar1 & 1) != 0) {
      return 1;
    }
    if ((bVar1 & 2) != 0) {
      return 1;
    }
    iVar6 = DAT_005ae998;
    if (DAT_005ae998 <= DAT_005ae98c) {
      do {
        iVar4 = FUN_004f6000(&DAT_005ae974,iVar6);
        if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
            (*(int *)(iVar4 + 0x48) != *(int *)(uVar3 + 0x48))) &&
           (iVar5 = FUN_00407d50(iVar4), iVar5 == 0)) {
          iVar5 = FUN_00405a30((void *)(iVar4 + 0x68),param_1);
          if (iVar5 != 0) {
            return 1;
          }
          iVar4 = FUN_00405a10((void *)(iVar4 + 0x68),param_1);
          if (iVar4 != 0) {
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        if (iVar2 < iVar6) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}
