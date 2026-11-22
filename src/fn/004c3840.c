/* Rebuilt from lomse.exe op_instantkillprisoner @ 0x004c3840 (144 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0041e170 ((undefined4 (__thiscall *)(void *, uint))0x0041e170)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_004c3840 1
void __cdecl rb_004c3840(void *vm)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    bVar1 = false;
    iVar2 = FUN_00420560((int)vm);
    if (((iVar2 != 0) && ((*(byte *)((int)vm + 0x30) & 0x20) != 0)) &&
       (*(int *)((int)vm + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
      iVar2 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
      if (*(int *)((int)vm + 0x28) == iVar2) {
        bVar1 = true;
      }
    }
    FUN_0041e170(vm,0xffffffff);
    if (bVar1) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
    }
  }
  return;
}
