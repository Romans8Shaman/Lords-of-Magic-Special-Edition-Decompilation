/* Rebuilt from lomse.exe FUN_00539a20 @ 0x00539a20 (60 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053e4c0 ((undefined4 (__cdecl *)(PEXCEPTION_RECORD, PVOID, DWORD, undefined4, int *, int, PVOID, char))0x0053e4c0)
unsigned lom_inreg_00539a20[2] __asm__("lom_inreg_00539a20");
undefined4 __cdecl
lom_body_00539a20(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4) __asm__("lom_body_00539a20");

#define LOM_SELF_00539a20 1
__attribute__((naked)) undefined4 __cdecl
rb_00539a20(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)
{
  __asm__("movl %eax, lom_inreg_00539a20\n\tmovl %edx, lom_inreg_00539a20+4\n\tjmp lom_body_00539a20");
}

undefined4 __cdecl
lom_body_00539a20(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)
{
  int * in_EAX = (int *)*(unsigned *)((char *)lom_inreg_00539a20 + 0);
  undefined4 uVar1;
  
  uVar1 = FUN_0053e4c0(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}
