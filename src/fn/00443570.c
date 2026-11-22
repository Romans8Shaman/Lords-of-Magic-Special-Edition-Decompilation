/* Rebuilt from lomse.exe op_kickarmyout @ 0x00443570 (76 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae970 (*(int *)0x005ae970)
#define FUN_00413180 ((int (__thiscall *)(void *, int))0x00413180)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00420b80 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00420b80)

#define LOM_SELF_00443570 1
void __cdecl rb_00443570(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_00413180(vm,*(int *)(DAT_005ae970 +
                                    ((*(int *)((int)vm + 0x44) - 4U & 7) +
                                    *(int *)((int)vm + 0x1c) * 8) * 4));
    FUN_00420b80(vm,iVar1,0,0xffffffff,0xffffffff,0xffffffff,0);
  }
  return;
}
