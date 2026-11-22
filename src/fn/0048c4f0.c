/* Rebuilt from lomse.exe FUN_0048c4f0 @ 0x0048c4f0 (83 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2c4 (*(undefined *)0x005cd2c4)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_004c4cf0 ((undefined4 (__fastcall *)(void *))0x004c4cf0)
#define FUN_004c4d30 ((undefined4 (__thiscall *)(void *, undefined4))0x004c4d30)
#define FUN_005262b0 ((undefined4 (__fastcall *)(undefined4 *))0x005262b0)

#define LOM_SELF_0048c4f0 1
void __cdecl rb_0048c4f0(byte param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  iVar2 = FUN_004c4cf0(&DAT_005cd2c4);
  while (iVar2 != 0) {
    iVar2 = FUN_0048c2b0(iVar2);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & ~(1 << (param_1 & 0x1f));
    }
    iVar2 = FUN_004c4cf0(&DAT_005cd2c4);
  }
  FUN_004c4d30(&DAT_005cd2c4,uVar1);
  return;
}
