/* Rebuilt from lomse.exe FUN_004051f0 @ 0x004051f0 (107 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_004051f0 1
undefined4 __stdcall rb_004051f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((~*(uint *)(param_1 + 0x30) & 0x100) != 0) && ((~*(uint *)(param_2 + 0x30) & 0x100) != 0))
     && (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    iVar2 = FUN_004c2330(param_1);
    if (0 < iVar2) {
      iVar2 = FUN_00525fc0((int *)(param_2 + 0xc4));
      if (-1 < iVar2) {
        uVar1 = *(undefined4 *)(param_2 + 0x28);
        *(undefined1 *)(param_1 + 0xc0) = 6;
        *(undefined1 *)(param_1 + 0xc1) = 0;
        *(short *)(param_1 + 0xc2) = (short)uVar1;
        return 1;
      }
    }
  }
  return 0;
}
