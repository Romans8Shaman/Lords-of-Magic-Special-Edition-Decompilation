/* Rebuilt from lomse.exe FUN_005119b0 @ 0x005119b0 (284 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005853ec (*(undefined4 *)0x005853ec)
#define DAT_005853f0 (*(byte *)0x005853f0)
#define DAT_005853f4 (*(undefined4 *)0x005853f4)
#define DAT_005853f8 (*(byte *)0x005853f8)
#define DAT_005853fc (*(undefined4 *)0x005853fc)
#define DAT_00585400 (*(byte *)0x00585400)
#define DAT_005aea70 (*(undefined *)0x005aea70)
#define FUN_004a2380 ((undefined4 (__cdecl *)(LPCSTR, int))0x004a2380)

#define LOM_SELF_005119b0 1
undefined4 __fastcall rb_005119b0(int param_1)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uchar _fr[0x310] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef short * _t_local_308;
  typedef int _t_local_304;
  typedef undefined1 _t_local_300;
  typedef byte _t_local_2ff[767];
#define local_308 (*(_t_local_308 *)(_fr + 0x0))
#define local_304 (*(_t_local_304 *)(_fr + 0x4))
#define local_300 (*(_t_local_300 *)(_fr + 0x8))
#define local_2ff (*(_t_local_2ff *)(_fr + 0x9))
  
  FUN_004a2380(&DAT_005aea70,(int)&local_300);
  iVar4 = 0;
  psVar1 = (short *)(param_1 + 0x2a4);
  do {
    iVar4 = iVar4 + 1;
    pbVar5 = local_2ff;
    local_304 = 0x100;
    local_308 = psVar1;
    do {
      uVar2 = (int)((uint)pbVar5[-1] * 4 * iVar4) >> 8;
      uVar3 = (int)((uint)*pbVar5 * 4 * iVar4) >> 8;
      uVar6 = (int)((uint)pbVar5[1] * 4 * iVar4) >> 8;
      uVar2 = ((int)uVar2 < 1) - 1 & uVar2;
      if (0xff < (int)uVar2) {
        uVar2 = 0xff;
      }
      uVar3 = ((int)uVar3 < 1) - 1 & uVar3;
      if (0xff < (int)uVar3) {
        uVar3 = 0xff;
      }
      uVar6 = ((int)uVar6 < 1) - 1 & uVar6;
      if (0xff < (int)uVar6) {
        uVar6 = 0xff;
      }
      pbVar5 = pbVar5 + 3;
      psVar1 = local_308 + 1;
      *local_308 = (short)(((int)uVar3 >> (DAT_005853f8 & 0x1f)) << ((byte)DAT_005853f4 & 0x1f)) +
                   (short)(((int)uVar2 >> (DAT_005853f0 & 0x1f)) << ((byte)DAT_005853ec & 0x1f)) +
                   (short)(((int)uVar6 >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f));
      local_304 = local_304 + -1;
      local_308 = psVar1;
    } while (local_304 != 0);
  } while (iVar4 < 0x100);
  return 1;
#undef local_308
#undef local_304
#undef local_300
#undef local_2ff
}
