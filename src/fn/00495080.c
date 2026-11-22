/* Rebuilt from lomse.exe FUN_00495080 @ 0x00495080 (54 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define s_m_surf__gt_Unlock__LPVOID_m_ptr__0055c618 (*(char (*)[])0x0055c618)

#define LOM_SELF_00495080 1
void __fastcall rb_00495080(int *param_1)

{
  int *a1;
  int iVar1;
  char *pcVar2;
  
  a1 = (int *)param_1[6];
  if (((a1 != (int *)0x0) && (*param_1 != 0)) && ((*(byte *)(param_1 + 5) & 8) != 0)) {
    pcVar2 = s_m_surf__gt_Unlock__LPVOID_m_ptr__0055c618;
    iVar1 = ((undefined4 (__stdcall *)(__typeof__(a1), __typeof__(*param_1)))(**(code **)(*a1 + 0x80)))(a1,*param_1);
    FUN_004756f0(iVar1,pcVar2);
    *param_1 = 0;
  }
  return;
}
