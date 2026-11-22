/* Rebuilt from lomse.exe FUN_00548370 @ 0x00548370 (138 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005480b0 ((undefined4 (__cdecl *)(int *, int *))0x005480b0)
#define PTR_DAT_00577d60 (*(undefined * *)0x00577d60)

#define LOM_SELF_00548370 1
void __cdecl rb_00548370(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined2 _t_local_c;
  typedef undefined4 _t_uStack_a;
  typedef undefined2 _t_uStack_6;
  typedef undefined * _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define uStack_a (*(_t_uStack_a *)(_fr + 0x6))
#define uStack_6 (*(_t_uStack_6 *)(_fr + 0xa))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  ppuVar3 = &PTR_DAT_00577d60;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x577ec0;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        ppuVar2 = ppuVar3 + uVar1 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar1 * 3)) {
          local_c = SUB42(*ppuVar2,0);
          (*(ushort *)((uchar *)&uStack_a + 0)) = (undefined2)((uint)*ppuVar2 >> 0x10);
          (*(ushort *)((uchar *)&uStack_a + 2)) = SUB42(ppuVar2[1],0);
          uStack_6 = (undefined2)((uint)ppuVar2[1] >> 0x10);
          local_4 = ppuVar2[2];
          uStack_a = CONCAT22((*(ushort *)((uchar *)&uStack_a + 2)),(undefined2)uStack_a) + -1;
          ppuVar2 = (undefined **)&local_c;
        }
        FUN_005480b0(param_1,(int *)ppuVar2);
      }
    }
  }
  return;
#undef local_c
#undef uStack_a
#undef uStack_6
#undef local_4
}
