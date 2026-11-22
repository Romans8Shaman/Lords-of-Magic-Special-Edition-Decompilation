/* Rebuilt from lomse.exe FUN_004ec2b0 @ 0x004ec2b0 (391 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ebdf0 ((int (__thiscall *)(void *, LONG, LONG))0x004ebdf0)
#define FUN_004ebf80 ((undefined4 (__fastcall *)(int *, undefined4, undefined4, undefined4))0x004ebf80)
#define FUN_004ec110 ((int (__thiscall *)(void *, int, int))0x004ec110)
#define FUN_004ec1c0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004ec1c0)
unsigned lom_inreg_004ec2b0[2] __asm__("lom_inreg_004ec2b0");
undefined4 __thiscall lom_body_004ec2b0(void *this,int param_1,int param_2,int param_3) __asm__("lom_body_004ec2b0");

#define LOM_SELF_004ec2b0 1
__attribute__((naked)) undefined4 __thiscall rb_004ec2b0(void *this,int param_1,int param_2,int param_3)
{
  __asm__("movl %eax, lom_inreg_004ec2b0\n\tmovl %edx, lom_inreg_004ec2b0+4\n\tjmp lom_body_004ec2b0");
}

undefined4 __thiscall lom_body_004ec2b0(void *this,int param_1,int param_2,int param_3)
{
  int iVar1;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_004ec2b0 + 4);
  
  if (*(int *)((int)this + 0xd0) < 0) {
    if (param_1 == 0x201) {
      iVar1 = FUN_004ec110(this,param_2,param_3);
      *(int *)((int)this + 0xd0) = iVar1;
      if (-1 < iVar1) {
        FUN_004ec1c0(this,0x201,1,iVar1);
        return 1;
      }
      iVar1 = FUN_004ebdf0(this,param_2,param_3);
      in_EDX = 0;
      if (-1 < iVar1) {
        FUN_004ec1c0(this,0x201,0,iVar1);
        return 1;
      }
    }
    if (param_1 == 0x202) {
      if (*(int *)this == 1) {
        *(undefined4 *)((int)this + 0xd0) = 0;
      }
      iVar1 = FUN_004ebf80(this,in_EDX,param_2,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
        return 1;
      }
      FUN_004ec1c0(this,0x202,1,*(undefined4 *)((int)this + 0xd0));
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
    }
    if (param_1 == 0x204) {
      iVar1 = FUN_004ec110(this,param_2,param_3);
      FUN_004ec1c0(this,0x204,1,iVar1);
    }
  }
  else {
    if ((param_1 != 0x200) && (param_1 != 0x202)) {
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      return 1;
    }
    iVar1 = FUN_004ebf80(this,in_EDX,param_2,param_3);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      return 1;
    }
    FUN_004ec1c0(this,param_1,1,*(undefined4 *)((int)this + 0xd0));
    if (param_1 == 0x202) {
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      return 1;
    }
  }
  return 1;
}
