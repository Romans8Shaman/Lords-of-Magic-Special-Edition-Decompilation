/* Rebuilt from lomse.exe FUN_00449b10 @ 0x00449b10 (126 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_00447360 ((undefined4 (__thiscall *)(void *, int))0x00447360)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_00449b10 1
undefined4 __thiscall rb_00449b10(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (int *)FUN_00482ac0(this,*param_1,2);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  FUN_00447360(this_00,param_1[1]);
  iVar2 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
  if (iVar1 == iVar2) {
    iVar2 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (this_00[10] == iVar2) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
    }
  }
  return 1;
}
