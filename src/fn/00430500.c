/* Rebuilt from lomse.exe FUN_00430500 @ 0x00430500 (87 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004304e0 ((undefined4 (__fastcall *)(int *))0x004304e0)
#define FUN_004304f0 ((undefined4 (__fastcall *)(int *))0x004304f0)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)

#define LOM_SELF_00430500 1
void __thiscall rb_00430500(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004304e0(this);
  iVar2 = FUN_004304f0(this);
  iVar2 = iVar2 + -1 + param_2;
  if ((param_3 != 0) && (0x17e < iVar2)) {
    iVar2 = 0x17f;
  }
  FUN_00500650(&DAT_00584ae8,param_1,param_2,iVar1 + -1 + param_1,iVar2);
  return;
}
