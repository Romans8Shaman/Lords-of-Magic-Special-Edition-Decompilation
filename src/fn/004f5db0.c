/* Rebuilt from lomse.exe FUN_004f5db0 @ 0x004f5db0 (288 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ba150 ((undefined4 * (__fastcall *)(undefined4 *))0x004ba150)
#define FUN_004ba1a0 ((undefined4 (__fastcall *)(undefined4 *))0x004ba1a0)
#define FUN_004f5d20 ((undefined4 (__fastcall *)(void *))0x004f5d20)
#define FUN_004f5f40 ((undefined4 (__fastcall *)(int))0x004f5f40)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004f5db0 1
undefined4 __thiscall
rb_004f5db0(void *this,int unused_stack_4,int unused_stack_8,undefined4 in_stack_c)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;

  FUN_004f5f40((int)this);
  iVar1 = Ordinal_401(unused_stack_4 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = Ordinal_401(unused_stack_4 * 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (unused_stack_8 < 1) {
        *(undefined4 *)((int)this + 0x1c) = 0;
      }
      else {
        piVar3 = (int *)Ordinal_401(unused_stack_8 * 0x58 + 4,s_C__lomse_source_storm_h_00555130,
                                    0x3fa,0);
        if (piVar3 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = piVar3 + 1;
          *piVar3 = unused_stack_8;
          FUN_00539ff0(piVar4,0x58,unused_stack_8,FUN_004ba150,FUN_004ba1a0);
        }
        *(int **)((int)this + 0x1c) = piVar4;
        if (piVar4 == (int *)0x0) {
          return 0;
        }
      }
      *(int *)((int)this + 0x24) = unused_stack_8;
      *(undefined4 *)((int)this + 0x20) = in_stack_c;
      iVar1 = 0;
      *(int *)((int)this + 0x10) = unused_stack_4;
      *(undefined4 *)((int)this + 0x18) = 0;
      if (0 < unused_stack_4) {
        do {
          iVar1 = iVar1 + 1;
          *(undefined4 *)(*(int *)((int)this + 8) + -4 + iVar1 * 4) = 0;
          *(undefined4 *)(*(int *)((int)this + 0xc) + -4 + iVar1 * 4) = 0;
        } while (iVar1 < *(int *)((int)this + 0x10));
      }
      FUN_004f5d20(this);
      uVar2 = 1;
    }
  }
  return uVar2;
}
