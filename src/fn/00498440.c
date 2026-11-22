/* Rebuilt from lomse.exe FUN_00498440 @ 0x00498440 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)

#define LOM_SELF_00498440 1
void __thiscall rb_00498440(void *this,undefined1 param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)((int)this + 5) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  *(int *)((int)this + 8) = param_3;
  iVar1 = FUN_004a8b50(&DAT_005ae958,param_2,param_3);
  *(char *)((int)this + 4) = (char)iVar1;
  return;
}
