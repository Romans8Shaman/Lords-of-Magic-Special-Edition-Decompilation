/* Rebuilt from lomse.exe FUN_004b9470 @ 0x004b9470 (121 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005cd358 (*(undefined *)0x005cd358)
#define DAT_005d1f68 (*(undefined4 *)0x005d1f68)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b8fa0 ((undefined4 (__thiscall *)(void *, int, undefined4 *))0x004b8fa0)

#define LOM_SELF_004b9470 1
undefined4 __stdcall rb_004b9470(void)

{
  int iVar1;
  undefined4 *puVar2;
  uchar _fr[0x120] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_118;
  typedef undefined4 _t_local_114;
  typedef undefined4 _t_local_110;
  typedef undefined4 _t_local_10c;
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3[16];
  typedef undefined4 _t_local_b3;
#define local_118 (*(_t_local_118 *)(_fr + 0x0))
#define local_114 (*(_t_local_114 *)(_fr + 0x4))
#define local_110 (*(_t_local_110 *)(_fr + 0x8))
#define local_10c (*(_t_local_10c *)(_fr + 0xc))
#define local_108 (*(_t_local_108 *)(_fr + 0x10))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x25))
#define local_b3 (*(_t_local_b3 *)(_fr + 0x65))
  
  FUN_0048cc70(local_108,0x4f);
  iVar1 = 0;
  puVar2 = local_f3;
  do {
    iVar1 = iVar1 + 1;
    FUN_004b8fa0(&DAT_005cd358,iVar1,&local_118);
    *puVar2 = local_118;
    puVar2[1] = local_114;
    puVar2[2] = local_110;
    puVar2[3] = local_10c;
    puVar2 = puVar2 + 4;
  } while (iVar1 < 4);
  local_b3 = DAT_005d1f68;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return 1;
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_f3
#undef local_b3
}
