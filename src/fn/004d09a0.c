/* Rebuilt from lomse.exe FUN_004d09a0 @ 0x004d09a0 (206 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_bad_dictionary_and_operand_stack_0055e3a0 (*(char (*)[])0x0055e3a0)
#define s_bad_dictionary_stack_change_0055e384 (*(char (*)[])0x0055e384)
#define s_bad_operand_stack_change_0055e368 (*(char (*)[])0x0055e368)

#define LOM_SELF_004d09a0 1
undefined4 __thiscall rb_004d09a0(void *this,uint param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = *(int *)((int)this + 0x60);
  iVar2 = *(int *)((int)this + 0x54);
  FUN_004d05e0(this,param_1,param_2);
  iVar4 = *(int *)((int)this + 0x70);
  if (iVar4 == 0) {
    bVar5 = iVar1 != *(int *)((int)this + 0x60);
    bVar6 = iVar2 - param_3 != *(int *)((int)this + 0x54);
    if ((bVar5) || (iVar4 = 0, bVar6)) {
      iVar1 = *(int *)((int)this + 0x558);
      if ((iVar1 < 100) && ((char)param_1 == '\x06')) {
        *(uint *)((int)this + iVar1 * 8 + 0xa8) = param_1;
        *(int **)((int)this + iVar1 * 8 + 0xac) = param_2;
        *(int *)((int)this + 0x558) = *(int *)((int)this + 0x558) + 1;
      }
      if (bVar5) {
        if (bVar6) {
          uVar3 = FUN_004d41c0(this,s_bad_dictionary_and_operand_stack_0055e3a0);
          *(int *)((int)this + 0x558) = iVar1;
          return uVar3;
        }
        uVar3 = FUN_004d41c0(this,s_bad_dictionary_stack_change_0055e384);
        *(int *)((int)this + 0x558) = iVar1;
        return uVar3;
      }
      iVar4 = FUN_004d41c0(this,s_bad_operand_stack_change_0055e368);
      *(int *)((int)this + 0x558) = iVar1;
    }
  }
  return iVar4;
}
