/* Rebuilt from lomse.exe FUN_0047c8b0 @ 0x0047c8b0 (294 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047c7e0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047c7e0)
#define FUN_00480850 ((undefined4 (__stdcall *)(int *))0x00480850)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)

#define LOM_SELF_0047c8b0 1
void __fastcall rb_0047c8b0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uchar _fr[0x208] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_200;
  typedef undefined4 _t_local_1fc;
  typedef undefined4 _t_local_1f8;
  typedef uint _t_local_1f4;
  typedef int _t_local_1f0;
  typedef undefined4 _t_local_1ec;
  typedef undefined4 _t_local_1e8;
  typedef undefined4 _t_local_1e4;
  typedef undefined4 _t_local_1e0;
  typedef undefined4 _t_local_1dc[50];
  typedef byte _t_local_114;
  typedef int _t_local_108[5];
  typedef int _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined4 _t_local_eb;
  typedef uint _t_local_e7;
  typedef int _t_local_e3;
  typedef undefined4 _t_local_df;
  typedef undefined4 _t_local_db;
  typedef undefined4 _t_local_d7;
  typedef undefined4 _t_local_d3;
  typedef undefined4 _t_local_cf[51];
#define local_200 (*(_t_local_200 *)(_fr + 0x0))
#define local_1fc (*(_t_local_1fc *)(_fr + 0x4))
#define local_1f8 (*(_t_local_1f8 *)(_fr + 0x8))
#define local_1f4 (*(_t_local_1f4 *)(_fr + 0xc))
#define local_1f0 (*(_t_local_1f0 *)(_fr + 0x10))
#define local_1ec (*(_t_local_1ec *)(_fr + 0x14))
#define local_1e8 (*(_t_local_1e8 *)(_fr + 0x18))
#define local_1e4 (*(_t_local_1e4 *)(_fr + 0x1c))
#define local_1e0 (*(_t_local_1e0 *)(_fr + 0x20))
#define local_1dc (*(_t_local_1dc *)(_fr + 0x24))
#define local_114 (*(_t_local_114 *)(_fr + 0xec))
#define local_108 (*(_t_local_108 *)(_fr + 0xf8))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x10d))
#define local_ef (*(_t_local_ef *)(_fr + 0x111))
#define local_eb (*(_t_local_eb *)(_fr + 0x115))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x119))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x11d))
#define local_df (*(_t_local_df *)(_fr + 0x121))
#define local_db (*(_t_local_db *)(_fr + 0x125))
#define local_d7 (*(_t_local_d7 *)(_fr + 0x129))
#define local_d3 (*(_t_local_d3 *)(_fr + 0x12d))
#define local_cf (*(_t_local_cf *)(_fr + 0x131))
  
  if (*(int *)((int)param_1 + 0x228b4) != 0) {
    iVar1 = FUN_0047c7e0(param_1,&local_200);
    while (iVar1 != 0) {
      puVar2 = FUN_00485080(param_1,local_200,0x2f);
      if (puVar2 != (undefined4 *)0x0) {
        if ((local_114 & 1) != 0) {
          return;
        }
        if ((local_1f0 == puVar2[7]) && ((*(byte *)(puVar2 + 0xc) & 2) != 0)) {
          FUN_0048cc70(local_108,0xd);
          local_f3 = local_200;
          local_df = local_1ec;
          local_db = local_1e8;
          local_eb = local_1f8;
          local_e3 = local_1f0;
          local_ef = local_1fc;
          local_e7 = local_1f4;
          local_d7 = local_1e4;
          local_d3 = local_1e0;
          if (0 < (int)local_1f4) {
            puVar2 = local_1dc;
            puVar4 = local_cf;
            for (uVar3 = local_1f4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar4 = puVar4 + 1;
            }
            for (uVar3 = local_1f4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
              puVar2 = (undefined4 *)((int)puVar2 + 1);
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
          }
          FUN_00480850(local_108);
        }
      }
      iVar1 = FUN_0047c7e0(param_1,&local_200);
    }
  }
  return;
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1dc
#undef local_114
#undef local_108
#undef local_f3
#undef local_ef
#undef local_eb
#undef local_e7
#undef local_e3
#undef local_df
#undef local_db
#undef local_d7
#undef local_d3
#undef local_cf
}
