/* Rebuilt from lomse.exe op_addterrainspritetype @ 0x0050d2a0 (307 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_40 */
#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050cdf0 ((undefined4 (__fastcall *)(undefined4 *))0x0050cdf0)
#define FUN_0050ce40 ((undefined4 (__stdcall *)(void))0x0050ce40)
#define FUN_0050d140 ((int (__thiscall *)(void *, undefined4 *))0x0050d140)
#define s_addtreetype_failed_00573ac4 (*(char (*)[])0x00573ac4)

#define LOM_SELF_0050d2a0 1
void __cdecl rb_0050d2a0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_3c[5];
  typedef undefined4 _t_local_28;
  typedef undefined4 _t_local_24;
#define local_3c (*(_t_local_3c *)(_fr + 0x4))
#define local_28 (*(_t_local_28 *)(_fr + 0x18))
#define local_24 (*(_t_local_24 *)(_fr + 0x1c))

  /* else path of the VM pop leaves local_40 uninitialized (vanilla leftover).
   * clang -O2 can use a garbage value for local_24 = local_40.
   * Zero it so that store is defined. */
  local_40 = 0;

  FUN_0050cdf0(local_3c);
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_28 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_40 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_28 = 0;
  }
  local_24 = local_40;
  if ((char)local_28 == '\0') {
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      iVar1 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_0050d140(&DAT_005cd304,local_3c);
    if (*(int *)((int)param_1 + 0x54) == 0) {
      *(undefined4 *)((int)param_1 + 0x90) = 3;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x50);
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iVar1;
    }
    if (iVar1 < 0) {
      FUN_004d41c0(param_1,s_addtreetype_failed_00573ac4);
    }
  }
  FUN_0050ce40();
  return;
#undef local_3c
#undef local_28
#undef local_24
}
