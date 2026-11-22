/* Rebuilt from lomse.exe FUN_004f5900 @ 0x004f5900 (54 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5800 ((undefined4 (__fastcall *)(int))0x004f5800)
#define FUN_004f5940 ((undefined4 (__fastcall *)(int))0x004f5940)

#define LOM_SELF_004f5900 1
void __thiscall rb_004f5900(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (*(char *)((int)this + 4) != '\x01') {
      return;
    }
    iVar1 = FUN_004f5940((int)this);
    if (iVar1 == 0) {
      return;
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(int *)this != 0) {
    FUN_004f5800(*(int *)this);
    *(undefined4 *)this = 0;
  }
  return;
}
