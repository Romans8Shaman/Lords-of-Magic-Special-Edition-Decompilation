/* Rebuilt from lomse.exe FUN_00429150 @ 0x00429150 (79 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004291a0 ((undefined4 (__stdcall *)(int, int, int, int, int))0x004291a0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_00429150 1
undefined4 __thiscall
rb_00429150(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = FUN_00485080(this,param_1,0x2f);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = FUN_00485080(this,param_3,0x2f);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = FUN_004291a0((int)puVar1,param_2,(int)puVar2,param_4,param_5);
  return uVar3;
}
