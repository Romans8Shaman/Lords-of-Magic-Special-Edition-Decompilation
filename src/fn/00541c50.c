/* Rebuilt from lomse.exe FUN_00541c50 @ 0x00541c50 (226 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00577ba0 (*(int *)0x00577ba0)
#define DAT_00577ba4 (*(int *)0x00577ba4)
#define DAT_00577ba8 (*(int *)0x00577ba8)
#define DAT_00577c8c (*(undefined *)0x00577c8c)
#define FUN_00545fc0 ((undefined4 (__stdcall *)(void))0x00545fc0)
#define __isindst ((int (__cdecl *)(tm *))0x005462e0)

#define LOM_SELF_00541c50 1
int __cdecl
rb_00541c50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef tm _t_local_24;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
  
  uVar2 = param_1 - 0x76c;
  if (((int)uVar2 < 0x46) || (0x8a < (int)uVar2)) {
    return -1;
  }
  iVar3 = *(int *)(&DAT_00577c8c + param_2 * 4) + param_3;
  if (((uVar2 & 3) == 0) && (2 < param_2)) {
    iVar3 = iVar3 + 1;
  }
  FUN_00545fc0();
  local_24.tm_hour = param_4;
  local_24.tm_mon = param_2 + -1;
  iVar1 = param_6 + (param_5 +
                    (param_4 + ((param_1 + -0x76d >> 2) + uVar2 * 0x16d + iVar3) * 0x18) * 0x3c) *
                    0x3c + 0x7c558180 + DAT_00577ba0;
  if (param_7 != 1) {
    if (param_7 != -1) {
      return iVar1;
    }
    if (DAT_00577ba4 == 0) {
      return iVar1;
    }
    local_24.tm_year = uVar2;
    local_24.tm_yday = iVar3;
    iVar3 = __isindst(&local_24);
    if (iVar3 == 0) {
      return iVar1;
    }
  }
  return iVar1 + DAT_00577ba8;
#undef local_24
}
