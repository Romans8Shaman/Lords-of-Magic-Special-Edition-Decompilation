/* Rebuilt from lomse.exe FUN_0052b110 @ 0x0052b110 (155 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)

#define LOM_SELF_0052b110 1
undefined4 __fastcall rb_0052b110(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if (iVar1 != 0) {
    switch(*(undefined4 *)(iVar1 + 0x1c)) {
    case 0:
      iVar1 = FUN_0052b0e0(param_1,0);
      if (iVar1 != 0) {
        return 1;
      }
      break;
    case 1:
      iVar1 = FUN_0052b0e0(param_1,1);
      if (iVar1 != 0) {
        return 1;
      }
      break;
    case 2:
      iVar1 = FUN_0052b0e0(param_1,2);
      if (iVar1 != 0) {
        return 1;
      }
      break;
    case 3:
      iVar1 = FUN_0052b0e0(param_1,3);
      if (iVar1 != 0) {
        return 1;
      }
      break;
    case 4:
      iVar1 = FUN_0052b0e0(param_1,4);
      if (iVar1 != 0) {
        return 1;
      }
      break;
    case 5:
      iVar1 = FUN_0052b0e0(param_1,5);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
