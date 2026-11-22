/* Rebuilt from lomse.exe FUN_004a9ea0 @ 0x004a9ea0 (167 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define FUN_00521e50 ((uint (__fastcall *)(int *))0x00521e50)
#define FUN_00521e70 ((uint (__fastcall *)(int *))0x00521e70)

#define LOM_SELF_004a9ea0 1
undefined4 __stdcall rb_004a9ea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  iVar4 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0xffffffff;
  }
  while ((((iVar2 = FUN_004f6000(&DAT_005ae974,iVar4), iVar2 == 0 || (*(int *)(iVar2 + 4) != 0)) ||
          (*(int *)(iVar2 + 0x48) != param_1)) ||
         ((((param_2 != 0x80000 || (uVar3 = FUN_00521e70((int *)(iVar2 + 0xc4)), uVar3 == 0)) &&
           ((param_2 != 0x40000 || (uVar3 = FUN_00521e50((int *)(iVar2 + 0xc4)), uVar3 == 0)))) &&
          ((param_2 != 0x100000 || (uVar3 = FUN_00521e30((int *)(iVar2 + 0xc4)), uVar3 == 0))))))) {
    iVar4 = iVar4 + 1;
    if (iVar1 < iVar4) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iVar2 + 0x1c);
}
