/* Rebuilt from lomse.exe FUN_004bdad0 @ 0x004bdad0 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)
#define s_Unknown_leader_type_0055d8a4 (*(char (*)[])0x0055d8a4)

#define LOM_SELF_004bdad0 1
void __thiscall rb_004bdad0(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00525fc0(param_1);
  *(undefined4 *)((int)this + 0x15b4) = uVar1;
  *(int *)((int)this + 0x15b8) = *param_1;
  iVar2 = FUN_00521e00(param_1);
  if (iVar2 == 0) {
    FUN_005047d0(s_Unknown_leader_type_0055d8a4);
    return;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)((int)this + 0x15ac) = uVar1;
  *(undefined4 *)((int)this + 0x15b0) = uVar1;
  return;
}
