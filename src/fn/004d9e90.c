/* Rebuilt from lomse.exe op_centeronarmy @ 0x004d9e90 (73 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_0041fda0 ((undefined4 (__fastcall *)(int))0x0041fda0)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_0052b6f0 ((undefined4 (__thiscall *)(void *, int, uint))0x0052b6f0)

#define LOM_SELF_004d9e90 1
void __cdecl rb_004d9e90(void *vm)

{
  int iVar1;
  
  iVar1 = FUN_0041be40(vm,&vm);
  if (iVar1 != 0) {
    FUN_0041fda0((int)vm);
    FUN_00504ce0(&DAT_00584ae8,1,0);
    FUN_0052b6f0(&DAT_005a7d90 + *(int *)((int)vm + 0x48) * 0x400,*(int *)((int)vm + 0x28),0);
  }
  return;
}
