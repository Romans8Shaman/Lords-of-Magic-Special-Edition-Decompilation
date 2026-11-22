/* Rebuilt from lomse.exe op_netcomputersassigned @ 0x004b5e70 (117 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005843e0 (*(undefined4 *)0x005843e0)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b4ba0 ((undefined4 (__fastcall *)(int))0x004b4ba0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004b5e70 1
void __cdecl rb_004b5e70(void *vm)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_108[5];
  typedef undefined4 _t_uStack_f3;
#define aiStack_108 (*(_t_aiStack_108 *)(_fr + 0x0))
#define uStack_f3 (*(_t_uStack_f3 *)(_fr + 0x15))
  
  if (DAT_005d1e84 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_005d1e84 + 0x390);
    iVar2 = FUN_004b7dd0(DAT_005d1e84);
    bVar3 = iVar1 == iVar2;
  }
  if (bVar3) {
    FUN_0048cc70(aiStack_108,0x51);
    uStack_f3 = DAT_005843e0;
    FUN_00489b70(&DAT_00584ae8,aiStack_108);
  }
  FUN_004b4ba0(0x5cd358);
  return;
#undef aiStack_108
#undef uStack_f3
}
