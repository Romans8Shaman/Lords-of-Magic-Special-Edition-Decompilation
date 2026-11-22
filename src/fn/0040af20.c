/* Rebuilt from lomse.exe FUN_0040af20 @ 0x0040af20 (157 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00405440 ((undefined4 (__thiscall *)(void *, int *))0x00405440)
#define FUN_0040ae20 ((undefined4 (__cdecl *)(undefined4))0x0040ae20)

#define LOM_SELF_0040af20 1
undefined4 __thiscall rb_0040af20(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_50;
  typedef uint _t_local_4c;
  typedef int _t_local_48;
  typedef int _t_local_44;
  typedef byte _t_local_40;
#define local_50 (*(_t_local_50 *)(_fr + 0x0))
#define local_4c (*(_t_local_4c *)(_fr + 0x4))
#define local_48 (*(_t_local_48 *)(_fr + 0x8))
#define local_44 (*(_t_local_44 *)(_fr + 0xc))
#define local_40 (*(_t_local_40 *)(_fr + 0x10))
  
  local_40 = param_1[1];
  local_4c = (uint)*param_1;
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  iVar1 = FUN_0040ae20(local_4c);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 2)) {
    pbVar2 = param_1 + 6;
    do {
      local_50 = (int)*(short *)(pbVar2 + -2);
      local_48 = (int)*(short *)pbVar2;
      local_44 = local_48;
      FUN_00405440(this,&local_50);
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 4;
    } while (iVar1 < *(short *)(param_1 + 2));
  }
  return 1;
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
}
