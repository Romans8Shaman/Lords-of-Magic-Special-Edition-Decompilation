/* Rebuilt from lomse.exe FUN_004a4100 @ 0x004a4100 (214 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005853ec (*(undefined4 *)0x005853ec)
#define DAT_005853f0 (*(byte *)0x005853f0)
#define DAT_005853f4 (*(undefined4 *)0x005853f4)
#define DAT_005853f8 (*(byte *)0x005853f8)
#define DAT_005853fc (*(undefined4 *)0x005853fc)
#define DAT_00585400 (*(byte *)0x00585400)
#define FUN_004a2380 ((undefined4 (__cdecl *)(LPCSTR, int))0x004a2380)

#define LOM_SELF_004a4100 1
int __thiscall rb_004a4100(void *this,LPCSTR param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uchar _fr[0x308] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_300[2];
  typedef byte _t_local_2fe[766];
#define local_300 (*(_t_local_300 *)(_fr + 0x0))
#define local_2fe (*(_t_local_2fe *)(_fr + 0x2))
  
  if (*(int *)((int)this + 0x10) == *(int *)((int)this + 0xc)) {
    return -1;
  }
  iVar1 = FUN_004a2380(param_1,(int)local_300);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = 0;
  pbVar2 = local_2fe;
  do {
    iVar3 = *(int *)((int)this + 0x10) * 0x100 + iVar1;
    iVar1 = iVar1 + 1;
    *(short *)(*(int *)((int)this + 0x14) + iVar3 * 2) =
         (short)(((int)((uint)*pbVar2 << 2) >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f)
                ) +
         (short)(((int)((uint)pbVar2[-1] << 2) >> (DAT_005853f8 & 0x1f)) <<
                ((byte)DAT_005853f4 & 0x1f)) +
         (short)(((int)((uint)pbVar2[-2] << 2) >> (DAT_005853f0 & 0x1f)) <<
                ((byte)DAT_005853ec & 0x1f));
    pbVar2 = pbVar2 + 3;
  } while (iVar1 < 0x100);
  iVar1 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x10) = iVar1 + 1;
  return iVar1;
#undef local_300
#undef local_2fe
}
