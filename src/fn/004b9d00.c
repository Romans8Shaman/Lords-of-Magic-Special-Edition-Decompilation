/* Rebuilt from lomse.exe FUN_004b9d00 @ 0x004b9d00 (55 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd34c (*(undefined *)0x005cd34c)
#define FUN_004b9b30 ((undefined4 (__fastcall *)(int *))0x004b9b30)
#define FUN_004b9b50 ((undefined4 (__thiscall *)(void *, int, int, uint))0x004b9b50)
#define FUN_004b9e00 ((undefined4 (__thiscall *)(void *, int))0x004b9e00)

#define LOM_SELF_004b9d00 1
void __thiscall rb_004b9d00(void *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004b9e00(&DAT_005cd34c,param_2);
  if (iVar1 == 0) {
    FUN_004b9b30(this);
    return;
  }
  FUN_004b9b50(this,param_1,iVar1,param_3);
  return;
}
