/* Rebuilt from lomse.exe FUN_0040b5e0 @ 0x0040b5e0 (51 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578080 (*(undefined *)0x00578080)
#define FUN_0040b5d0 ((undefined4 (__thiscall *)(void *, int))0x0040b5d0)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)

#define LOM_SELF_0040b5e0 1
void __fastcall rb_0040b5e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004d61b0(&DAT_00578080,0x578158);
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x44);
    FUN_0040b5d0(param_1,iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}
