/* Rebuilt from lomse.exe FUN_00407380 @ 0x00407380 (110 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)

#define LOM_SELF_00407380 1
int __thiscall rb_00407380(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = param_1 != DAT_005aa7d4;
  iVar1 = *(int *)((int)this + 0x68);
  iVar2 = 999999;
  iVar3 = 0;
  param_1 = -1;
  if (0 < iVar1) {
    do {
      if ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar3 * 8) & (-(uint)bVar4 & 0x400) + 0x400) !=
          0) {
        iVar1 = FUN_004a8a50(&DAT_005ae958,iVar3,iVar1 / 2);
        if (iVar1 < iVar2) {
          iVar2 = iVar1;
          param_1 = iVar3;
        }
      }
      iVar1 = *(int *)((int)this + 0x68);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return param_1;
}
