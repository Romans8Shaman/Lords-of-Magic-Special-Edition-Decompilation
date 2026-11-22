/* Rebuilt from lomse.exe FUN_00407c70 @ 0x00407c70 (73 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00506340 ((undefined4 (__fastcall *)(int))0x00506340)

#define LOM_SELF_00407c70 1
undefined4 __stdcall rb_00407c70(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 != 0) {
    iVar2 = FUN_00506340(uVar1);
    if (iVar2 != 0) {
      *(undefined1 *)(uVar1 + 0xc0) = 0x1a;
      *(undefined1 *)(uVar1 + 0xc1) = 0;
      *(undefined2 *)(uVar1 + 0xc2) = 0xffff;
      return 1;
    }
  }
  return 0;
}
