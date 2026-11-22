/* Rebuilt from lomse.exe FUN_004756c0 @ 0x004756c0 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define s_DDSURFACE_RENDERBUFFER___gt_Unlock__005588e0 (*(char (*)[])0x005588e0)

#define LOM_SELF_004756c0 1
void __thiscall rb_004756c0(void *this,undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = s_DDSURFACE_RENDERBUFFER___gt_Unlock__005588e0;
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x68c)), __typeof__(*param_1)))(**(code **)(**(int **)((int)this + 0x68c) + 0x80)))(*(int **)((int)this + 0x68c),*param_1)
  ;
  FUN_004756f0(iVar1,pcVar2);
  *param_1 = 0;
  return;
}
