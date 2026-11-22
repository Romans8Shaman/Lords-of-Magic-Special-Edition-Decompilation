/* Rebuilt from lomse.exe FUN_00530540 @ 0x00530540 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00530540 1
void __thiscall rb_00530540(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  for (iVar4 = DAT_005ae998; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar4);
    if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (iVar3 = FUN_00407d50(iVar2), iVar3 == 0))
       && ((*(int *)(iVar2 + 0x48) == *(int *)this && (*(char *)(iVar2 + 0x5d8) == param_1)))) {
      *(undefined1 *)(iVar2 + 0x5d8) = 0xff;
    }
  }
  return;
}
