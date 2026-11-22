/* Rebuilt from lomse.exe FUN_0051b9b0 @ 0x0051b9b0 (182 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004321b0 ((undefined4 (__fastcall *)(int))0x004321b0)
#define FUN_004378f0 ((undefined4 (__fastcall *)(int *))0x004378f0)
#define FUN_0047bf30 ((undefined4 (__fastcall *)(int *))0x0047bf30)
#define FUN_0047bf70 ((undefined4 (__fastcall *)(int *))0x0047bf70)
#define FUN_00484e10 ((undefined4 (__fastcall *)(int))0x00484e10)
#define FUN_004c4d00 ((int (__fastcall *)(int *))0x004c4d00)

#define LOM_SELF_0051b9b0 1
undefined4 __fastcall rb_0051b9b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c4d00((int *)(param_1 + 0x487dc));
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0047bf30((int *)(param_1 + 0x47f00));
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_0047bf70((int *)(param_1 + 0x47f00));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x47f68) != 0) {
    return 1;
  }
  iVar1 = FUN_004378f0((int *)(param_1 + 0x483f4));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x48510) == 0) {
    if (*(int *)(param_1 + 0x4850c) != 0) {
      return 1;
    }
    iVar1 = FUN_004321b0(0x584cd4);
    if (iVar1 == 0) {
      iVar1 = FUN_00484e10(param_1 + 0x25644);
      return (uint)(iVar1 != 0);
    }
  }
  return 1;
}
