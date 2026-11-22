/* Rebuilt from lomse.exe FUN_004755a0 @ 0x004755a0 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define s_DDSURFACE_BACKBUFFER___gt_Unlock__L_00558844 (*(char (*)[])0x00558844)

#define LOM_SELF_004755a0 1
void __thiscall rb_004755a0(void *this,undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = s_DDSURFACE_BACKBUFFER___gt_Unlock__L_00558844;
  iVar1 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x688)), __typeof__(*param_1)))(**(code **)(**(int **)((int)this + 0x688) + 0x80)))(*(int **)((int)this + 0x688),*param_1)
  ;
  FUN_004756f0(iVar1,pcVar2);
  *param_1 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}
