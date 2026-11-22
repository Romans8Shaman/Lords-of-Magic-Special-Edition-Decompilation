/* Rebuilt from lomse.exe FUN_004d5aa0 @ 0x004d5aa0 (199 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d3110 ((int (__fastcall *)(int, undefined4, undefined4))0x004d3110)
unsigned lom_inreg_004d5aa0[2] __asm__("lom_inreg_004d5aa0");
undefined4 * __thiscall lom_body_004d5aa0(void *this,undefined4 *param_1,int param_2) __asm__("lom_body_004d5aa0");

#define LOM_SELF_004d5aa0 1
__attribute__((naked)) undefined4 * __thiscall rb_004d5aa0(void *this,undefined4 *param_1,int param_2)
{
  __asm__("movl %eax, lom_inreg_004d5aa0\n\tmovl %edx, lom_inreg_004d5aa0+4\n\tjmp lom_body_004d5aa0");
}

undefined4 * __thiscall lom_body_004d5aa0(void *this,undefined4 *param_1,int param_2)
{
  int iVar1;
  int *piVar2;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_004d5aa0 + 4);
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  piVar2 = (int *)FUN_004d3110((int)this,in_EDX,0x10);
  if (piVar2 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = local_4;
    return param_1;
  }
  iVar3 = *(int *)((int)this + 0xa84) + 0x10;
  *(int *)((int)this + 0xa84) = iVar3;
  piVar2[1] = param_2;
  piVar2[2] = 0;
  piVar2[3] = 0;
  if (param_2 < 1) {
    *piVar2 = 0;
  }
  else {
    iVar3 = FUN_004d3110((int)this,iVar3,param_2 * 8);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      *param_1 = 0;
      param_1[1] = local_4;
      return param_1;
    }
    *(int *)((int)this + 0xa84) = *(int *)((int)this + 0xa84) + param_2 * 8;
  }
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *piVar2;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar1 + -8 + iVar3 * 8) = 0;
      *(undefined4 *)(iVar1 + -4 + iVar3 * 8) = local_4;
    } while (iVar3 < param_2);
  }
  *param_1 = 6;
  param_1[1] = piVar2;
  return param_1;
#undef local_4
}
