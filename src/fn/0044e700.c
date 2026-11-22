/* Rebuilt from lomse.exe FUN_0044e700 @ 0x0044e700 (329 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043b930 ((undefined4 * (__fastcall *)(undefined4 *))0x0043b930)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)

#define LOM_SELF_0044e700 1
void __fastcall rb_0044e700(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uchar _fr[0x140] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 * _t_local_138;
  typedef undefined4 _t_local_134[11];
  typedef undefined4 _t_local_108;
  typedef undefined4 _t_local_f0;
  typedef undefined4 _t_local_ec;
  typedef undefined4 _t_local_e8[17];
  typedef undefined4 _t_local_a4;
  typedef undefined4 _t_local_a0[37];
#define local_138 (*(_t_local_138 *)(_fr + 0x0))
#define local_134 (*(_t_local_134 *)(_fr + 0x4))
#define local_108 (*(_t_local_108 *)(_fr + 0x30))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x48))
#define local_ec (*(_t_local_ec *)(_fr + 0x4c))
#define local_e8 (*(_t_local_e8 *)(_fr + 0x50))
#define local_a4 (*(_t_local_a4 *)(_fr + 0x94))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x98))

  FUN_0043b930(local_134);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  puVar4 = (undefined4 *)(param_1 + 0x48);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  local_138 = (undefined4 *)(param_1 + 0xc4);
  do {
    puVar1 = FUN_0043b990(local_a0,*(undefined4 *)(param_1 + 0x68),
                          (short)*(undefined4 *)(param_1 + 0x74),
                          (short)*(undefined4 *)(param_1 + 0x80),iVar3,0,0xffffffff,0xffffffff,
                          0xffffffff);
    puVar4 = puVar1;
    puVar5 = local_134;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_108 = 0;
    local_f0 = puVar1[0x11];
    local_ec = puVar1[0x12];
    puVar4 = puVar1 + 0x13;
    puVar5 = local_e8;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_a4 = puVar1[0x24];
    FUN_0043ba50(local_a0);
    iVar3 = iVar3 + 1;
    puVar4 = local_e8;
    puVar5 = local_138;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_138 = local_138 + 0x11;
  } while (iVar3 < 9);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x32;
  *(undefined4 *)(param_1 + 0x78) = 100;
  *(undefined4 *)(param_1 + 0x7c) = 100;
  *(undefined4 *)(param_1 + 0x340) = 4;
  *(undefined4 *)(param_1 + 0x344) = 200;
  FUN_0043ba50(local_134);
  return;
#undef local_138
#undef local_134
#undef local_108
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_a4
#undef local_a0
}
