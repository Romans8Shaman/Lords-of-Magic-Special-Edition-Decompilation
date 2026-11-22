/* Rebuilt from lomse.exe __allshl @ 0x00545f10 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define __allshl ((longlong (__fastcall *)(byte, int))0x00545f10)
unsigned lom_inreg_00545f10[2] __asm__("lom_inreg_00545f10");
/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall lom_body_00545f10(byte param_1,int param_2) __asm__("lom_body_00545f10");

#define LOM_SELF_00545f10 1
__attribute__((naked)) /* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall rb_00545f10(byte param_1,int param_2)
{
  __asm__("movl %eax, lom_inreg_00545f10\n\tmovl %edx, lom_inreg_00545f10+4\n\tjmp lom_body_00545f10");
}

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall lom_body_00545f10(byte param_1,int param_2)
{
  uint in_EAX = (uint)*(unsigned *)((char *)lom_inreg_00545f10 + 0);
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}
