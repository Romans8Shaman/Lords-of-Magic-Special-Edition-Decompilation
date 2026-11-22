/* Rebuilt from lomse.exe FUN_0048a590 @ 0x0048a590 (235 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(int *)0x0055b574)
#define DAT_0055b578 (*(uint *)0x0055b578)
#define DAT_00583560 (*(int *)0x00583560)
#define DAT_00583574 (*(int *)0x00583574)
#define DAT_00583588 (*(int *)0x00583588)
#define DAT_0058358c (*(int *)0x0058358c)
#define DAT_005835e4 (*(int *)0x005835e4)
#define DAT_005cc9d8 (*(int *)0x005cc9d8)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_004b78c0 ((int (__fastcall *)(void *))0x004b78c0)

#define LOM_SELF_0048a590 1
void __stdcall rb_0048a590(void)

{
  int iVar1;
  
  if (DAT_005d1e84 == (void *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b78c0(DAT_005d1e84);
  }
  if ((iVar1 < 2) || (DAT_00583574 != 0)) {
    DAT_0055b578 = 1;
  }
  else if (DAT_0055b574 == DAT_00583560) {
    DAT_0058358c = DAT_0058358c + 1;
    if (DAT_005835e4 != 0) {
      DAT_00583588 = DAT_00583588 + 1;
    }
    DAT_005835e4 = 0;
    DAT_0055b578 = DAT_0058358c / DAT_00583588;
  }
  else {
    if (DAT_005835e4 == 0) {
      DAT_00583588 = DAT_00583588 + 1;
    }
    DAT_005835e4 = 1;
    DAT_0055b578 = DAT_0058358c / DAT_00583588;
  }
  iVar1 = 1;
  if (0 < DAT_005cc9d8) {
    iVar1 = DAT_005cc9d8;
  }
  if ((uint)(1000 / (longlong)iVar1) <= DAT_0055b578) {
    iVar1 = 1;
    if (0 < DAT_005cc9d8) {
      iVar1 = DAT_005cc9d8;
    }
    DAT_0055b578 = (uint)(1000 / (longlong)iVar1);
  }
  if (DAT_0055b578 == 0) {
    DAT_0055b578 = 1;
  }
  return;
}
