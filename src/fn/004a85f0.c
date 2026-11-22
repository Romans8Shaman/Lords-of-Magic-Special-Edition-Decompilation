/* Rebuilt from lomse.exe FUN_004a85f0 @ 0x004a85f0 (67 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define FUN_004b9570 ((undefined4 (__stdcall *)(undefined1, short))0x004b9570)
#define FUN_004f7c50 ((undefined4 (__thiscall *)(void *, undefined4))0x004f7c50)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)

#define LOM_SELF_004a85f0 1
undefined4 __thiscall rb_004a85f0(void *this)

{
  LPCSTR pCVar1;
  int *unused_stack_0;
  
  pCVar1 = (LPCSTR)FUN_004b9570(0x53,-1);
  unused_stack_0 = (int *)FUN_00539610(pCVar1,&DAT_00556168);
  if (unused_stack_0 == (int *)0x0) {
    return 0;
  }
  FUN_004f7c50((void *)((int)this + 0x1c),unused_stack_0);
  FUN_005394d0(unused_stack_0);
  return 1;
}
