/* Rebuilt from lomse.exe FUN_00404f90 @ 0x00404f90 (133 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)

#define LOM_SELF_00404f90 1
undefined4 __stdcall rb_00404f90(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((((~*(uint *)(param_1 + 0x30) & 0x100) != 0) && ((~*(uint *)(param_2 + 0x30) & 0x100) != 0))
     && (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(param_1 + 0x48));
    if (((uVar2 == 0) || ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) ||
       ((*(int *)(param_1 + 0x68) != 2 || (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x28)))))
    {
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      *(undefined1 *)(param_1 + 0xc0) = 2;
      *(undefined1 *)(param_1 + 0xc1) = 0;
      *(short *)(param_1 + 0xc2) = (short)uVar1;
      return 1;
    }
  }
  return 0;
}
