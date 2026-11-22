/* Rebuilt from lomse.exe FUN_0045cdd0 @ 0x0045cdd0 (199 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573428 (*(int *)0x00573428)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005cd198 (*(undefined2 *)0x005cd198)
#define DAT_005cd1ac (*(undefined2 *)0x005cd1ac)
#define DAT_005d2ca4 (*(int *)0x005d2ca4)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_0045cdd0 1
void __fastcall rb_0045cdd0(int param_1)

{
  undefined2 uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef int _t_local_eb;
  typedef undefined2 _t_auStack_e7[10];
  typedef undefined2 _t_auStack_d3[10];
  typedef uint _t_local_bf;
  typedef undefined4 _t_local_bb[5];
  typedef undefined4 _t_local_a7[41];
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
#define auStack_e7 (*(_t_auStack_e7 *)(_fr + 0x21))
#define auStack_d3 (*(_t_auStack_d3 *)(_fr + 0x35))
#define local_bf (*(_t_local_bf *)(_fr + 0x49))
#define local_bb (*(_t_local_bb *)(_fr + 0x4d))
#define local_a7 (*(_t_local_a7 *)(_fr + 0x61))
  
  FUN_0048cc40((int)&local_108);
  local_f3 = *(undefined4 *)(param_1 + 0x688);
  local_ef = *(undefined4 *)(param_1 + 0x4774);
  local_104 = 0x32;
  if (DAT_005d2ca4 == 0) {
    DVar2 = GetTickCount();
    local_eb = DVar2 + DAT_00573428;
  }
  else {
    local_eb = DAT_005d2ca4 + DAT_00573428;
  }
  iVar3 = 0;
  do {
    uVar1 = *(undefined2 *)((int)&DAT_005cd198 + iVar3);
    *(undefined2 *)((int)auStack_e7 + iVar3) = *(undefined2 *)((int)&DAT_005cd1ac + iVar3);
    *(undefined2 *)((int)auStack_d3 + iVar3) = uVar1;
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x14);
  local_bf = (uint)(*(int *)(param_1 + 0x230c4) != 0);
  puVar4 = (undefined4 *)(param_1 + 0x23098);
  puVar5 = local_bb;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x230ac);
  puVar5 = local_a7;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
#undef local_eb
#undef auStack_e7
#undef auStack_d3
#undef local_bf
#undef local_bb
#undef local_a7
}
