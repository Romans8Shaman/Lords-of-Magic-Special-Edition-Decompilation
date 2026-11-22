/* Rebuilt from lomse.exe FUN_0043bda0 @ 0x0043bda0 (25 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f6830 ((bool (__fastcall *)(void *, undefined4, undefined4))0x004f6830)
unsigned lom_inreg_0043bda0[2] __asm__("lom_inreg_0043bda0");
bool __thiscall lom_body_0043bda0(void *this,undefined4 param_1) __asm__("lom_body_0043bda0");

#define LOM_SELF_0043bda0 1
__attribute__((naked)) bool __thiscall rb_0043bda0(void *this,undefined4 param_1)
{
  __asm__("movl %eax, lom_inreg_0043bda0\n\tmovl %edx, lom_inreg_0043bda0+4\n\tjmp lom_body_0043bda0");
}

bool __thiscall lom_body_0043bda0(void *this,undefined4 param_1)
{
  bool bVar1;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_0043bda0 + 4);
  
  if (*(int *)((int)this + 0x5c) == 0) {
    return false;
  }
  bVar1 = FUN_004f6830(this,in_EDX,param_1);
  return bVar1;
}
