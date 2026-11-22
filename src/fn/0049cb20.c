/* Rebuilt from lomse.exe FUN_0049cb20 @ 0x0049cb20 (238 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049abe0 ((byte * (__thiscall *)(void *, uint, uint, uint, uint *))0x0049abe0)
#define FUN_0049cc80 ((undefined4 (__thiscall *)(void *, int *))0x0049cc80)
#define FUN_0049dcf0 ((int (__thiscall *)(void *, int, int))0x0049dcf0)

#define LOM_SELF_0049cb20 1
undefined4 __thiscall rb_0049cb20(void *this, int *param_1, int *param_2, int param_3, uint volatile param_4)

{
  uint uVar1;
  ushort *puVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if ((int)param_4 < 0) {
    param_4 = *(uint *)((int)this + 0x28);
    puVar2 = *(ushort **)((int)this + 0x1c);
  }
  else {
    puVar6 = &param_4;
    uVar5 = param_4;
    uVar1 = FUN_0049dcf0(this,*(int *)((int)this + 0x10),*(int *)((int)this + 0x14));
    puVar2 = (ushort *)
             FUN_0049abe0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 4),uVar1,uVar5,puVar6);
  }
  if ((puVar2 != (ushort *)0x0) && (**(int **)((int)this + 0x3c) != 0)) {
    if (param_3 == 0) {
      FUN_0049cc80(this,&local_8);
      *param_1 = local_8;
      *param_2 = local_4;
      return 1;
    }
    iVar4 = 1;
    if (1 < *puVar2 >> 8) {
      psVar3 = *(short **)(puVar2 + 4);
      do {
        psVar3 = psVar3 + 3;
        if ((short)param_3 == *psVar3) {
          psVar3 = *(short **)(puVar2 + 4) + iVar4 * 3 + 1;
          goto LAB_0049cbcc;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)(*puVar2 >> 8));
    }
    psVar3 = (short *)0x0;
LAB_0049cbcc:
    if (psVar3 != (short *)0x0) {
      iVar4 = (int)*psVar3;
      if ((param_4 & 1) != 0) {
        iVar4 = -iVar4;
      }
      *param_1 = iVar4;
      *param_2 = (int)psVar3[1];
      return 1;
    }
  }
  return 0;
#undef local_8
#undef local_4
}
