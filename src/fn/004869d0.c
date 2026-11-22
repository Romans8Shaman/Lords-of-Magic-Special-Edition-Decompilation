/* Rebuilt from lomse.exe FUN_004869d0 @ 0x004869d0 (119 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
unsigned lom_inreg_004869d0[2] __asm__("lom_inreg_004869d0");
undefined4 __thiscall lom_body_004869d0(void *this,undefined4 param_1) __asm__("lom_body_004869d0");

#define LOM_SELF_004869d0 1
__attribute__((naked)) undefined4 __thiscall rb_004869d0(void *this,undefined4 param_1)
{
  __asm__("movl %eax, lom_inreg_004869d0\n\tmovl %edx, lom_inreg_004869d0+4\n\tjmp lom_body_004869d0");
}

undefined4 __thiscall lom_body_004869d0(void *this,undefined4 param_1)
{
  int iVar1;
  void *pvVar2;
  undefined4 in_EAX = (undefined4)*(unsigned *)((char *)lom_inreg_004869d0 + 0);
  int iVar3;
  undefined4 uVar4;
  
  pvVar2 = DAT_005a7b78;
  uVar4 = CONCAT31((uint)((uint)in_EAX >> 8),*(char *)((int)this + 0x23064));
  if (*(char *)((int)this + 0x23064) != '\0') {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = param_1;
    }
    uVar4 = FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x23064),*(int **)((int)this + 0x23068))
    ;
  }
  return uVar4;
}
