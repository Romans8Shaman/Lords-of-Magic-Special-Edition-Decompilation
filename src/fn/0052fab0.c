/* Rebuilt from lomse.exe FUN_0052fab0 @ 0x0052fab0 (128 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bcc (*(uint *)0x005a7bcc)
#define DAT_005a7bd0 (*(int * *)0x005a7bd0)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_0052bc40 ((undefined4 (__fastcall *)(int))0x0052bc40)
#define FUN_0052dda0 ((undefined4 (__thiscall *)(void *, int))0x0052dda0)

#define LOM_SELF_0052fab0 1
void __thiscall rb_0052fab0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0052bc40((int)this);
  for (iVar1 = FUN_004fbe60(&DAT_005ae974,0,0); iVar1 != 0;
      iVar1 = FUN_004fbe60(&DAT_005ae974,iVar1,0)) {
    iVar2 = FUN_00407d50(iVar1);
    if (((iVar2 == 0) && (*(int *)(iVar1 + 0x48) == *(int *)this)) &&
       ((param_1 & 1 << (*(byte *)(iVar1 + 0x5ac) & 0x1f)) != 0)) {
      FUN_0052dda0(this,iVar1);
    }
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bcc,DAT_005a7bd0);
  return;
}
