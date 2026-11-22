/* Rebuilt from lomse.exe FUN_0044a7f0 @ 0x0044a7f0 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004756f0 ((undefined4 (__cdecl *)(int, ...))0x004756f0)
#define LAB_0044a7c0 (*(undefined *)0x0044a7c0) /* code label used as address */
#define Ordinal_2 ((undefined4 (__stdcall *)(undefined4, undefined4))0x0053384c) /* thunk -> DPLAYX.DLL!Ordinal_2 */
#define s_DirectPlayEnumerate_EnumSP_NULL__00556b00 (*(char (*)[])0x00556b00)

#define LOM_SELF_0044a7f0 1
undefined4 __fastcall rb_0044a7f0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = s_DirectPlayEnumerate_EnumSP_NULL__00556b00;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  iVar1 = Ordinal_2(&LAB_0044a7c0,0);
  FUN_004756f0(iVar1,pcVar2);
  return *(undefined4 *)(param_1 + 0x2c8);
}
