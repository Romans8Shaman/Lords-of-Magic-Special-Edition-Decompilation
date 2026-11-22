/* Rebuilt from lomse.exe FUN_0049b220 @ 0x0049b220 (116 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_0049b2a0 ((short * (__thiscall *)(void *, undefined4, undefined4))0x0049b2a0)

#define LOM_SELF_0049b220 1
undefined4 __fastcall rb_0049b220(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  short *psVar5;
  undefined1 *puVar6;
  int iVar7;
  uchar _fr[0x308] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_300;
  typedef undefined1 _t_local_2ff[767];
#define local_300 (*(_t_local_300 *)(_fr + 0x0))
#define local_2ff (*(_t_local_2ff *)(_fr + 0x1))
  
  iVar3 = *(int *)(*param_1 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  iVar7 = 0;
  puVar6 = local_2ff;
  do {
    puVar4 = (undefined1 *)(*(int *)(iVar3 + 8) + iVar7);
    iVar7 = iVar7 + 4;
    uVar1 = puVar4[1];
    uVar2 = *puVar4;
    puVar6[-1] = puVar4[2];
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    puVar6 = puVar6 + 3;
  } while (iVar7 < 0x400);
  psVar5 = FUN_0049b2a0(&DAT_00584ae8,&local_300,param_1 + 3);
  param_1[0x47] = (int)psVar5;
  return 1;
#undef local_300
#undef local_2ff
}
