/* Rebuilt from lomse.exe FUN_0041e0d0 @ 0x0041e0d0 (148 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_0041e170 ((undefined4 (__thiscall *)(void *, uint))0x0041e170)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_0041e0d0 1
undefined4 __thiscall rb_0041e0d0(void *this,int *param_1)

{
  bool bVar1;
  void *this_00;
  int iVar2;
  
  this_00 = (void *)FUN_00482ac0(this,*param_1,0);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  bVar1 = false;
  iVar2 = FUN_00420560((int)this_00);
  if (((iVar2 != 0) && ((*(byte *)((int)this_00 + 0x30) & 0x20) != 0)) &&
     (*(int *)((int)this_00 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
    iVar2 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (*(int *)((int)this_00 + 0x28) == iVar2) {
      bVar1 = true;
    }
  }
  FUN_0041e170(this_00,param_1[1]);
  if (bVar1) {
    FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
  }
  return 1;
}
