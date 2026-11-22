/* Rebuilt from lomse.exe FUN_004b1db0 @ 0x004b1db0 (102 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ac4 (*(undefined *)0x00583ac4)
#define DAT_00583ac5 (*(undefined1 *)0x00583ac5)
#define DAT_00583ac6 (*(undefined1 *)0x00583ac6)

#define LOM_SELF_004b1db0 1
undefined * __thiscall rb_004b1db0(void *this,undefined1 param_1)

{
  undefined *puVar1;
  
  DAT_00583ac5 = 0;
  DAT_00583ac6 = 100;
  DAT_00583ac4 = 0x32;
  puVar1 = &DAT_00583ac4;
  switch(param_1) {
  case 0:
    return this;
  case 1:
    return (undefined *)((int)this + 5);
  case 2:
    return (undefined *)((int)this + 10);
  case 3:
    return (undefined *)((int)this + 0xf);
  case 4:
    return (undefined *)((int)this + 0x14);
  case 5:
    return (undefined *)((int)this + 0x19);
  case 6:
    return (undefined *)((int)this + 0x1e);
  case 7:
    return (undefined *)((int)this + 0x23);
  case 8:
    return (undefined *)((int)this + 0x28);
  case 9:
    puVar1 = (undefined *)((int)this + 0x2d);
  }
  return puVar1;
}
