/* Rebuilt from lomse.exe FUN_004f3d20 @ 0x004f3d20 (259 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00536b50 ((undefined4 (__cdecl *)(int))0x00536b50)
#define FUN_00536cb0 ((undefined4 (__cdecl *)(int, char *, int))0x00536cb0)
#define FUN_00536cd0 ((int (__cdecl *)(byte *, int))0x00536cd0)
#define s_1_0_7_0055d368 (*(char (*)[])0x0055d368)

#define LOM_SELF_004f3d20 1
int __cdecl
rb_004f3d20(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar _fr[0x40] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_38;
  typedef undefined4 _t_local_34;
  typedef int _t_local_2c;
  typedef uint _t_local_28;
  typedef uint _t_local_24;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
#define local_38 (*(_t_local_38 *)(_fr + 0x0))
#define local_34 (*(_t_local_34 *)(_fr + 0x4))
#define local_2c (*(_t_local_2c *)(_fr + 0xc))
#define local_28 (*(_t_local_28 *)(_fr + 0x10))
#define local_24 (*(_t_local_24 *)(_fr + 0x14))
#define local_18 (*(_t_local_18 *)(_fr + 0x20))
#define local_14 (*(_t_local_14 *)(_fr + 0x24))
  
  local_38 = param_3;
  local_34 = param_4;
  local_18 = 0;
  local_14 = 0;
  if (param_5 == 0) {
    local_28 = *param_2;
    local_2c = param_1;
    iVar1 = FUN_00536cb0((int)&local_38,s_1_0_7_0055d368,0x38);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_00536cd0((byte *)&local_38,4);
    if (iVar1 != 1) {
      FUN_00536b50((int)&local_38);
      return iVar1;
    }
    *param_2 = local_24;
  }
  else {
    local_28 = *param_2;
    local_2c = param_1;
    iVar1 = FUN_00536cb0((int)&local_38,s_1_0_7_0055d368,0x38);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = *param_2 / param_5;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        local_28 = param_5;
        local_2c = param_1;
        FUN_00536cd0((byte *)&local_38,4);
        param_1 = param_1 + param_6;
        uVar2 = uVar2 - 1;
        uVar3 = local_24;
      } while (uVar2 != 0);
    }
    *param_2 = uVar3;
  }
  iVar1 = FUN_00536b50((int)&local_38);
  return iVar1;
#undef local_38
#undef local_34
#undef local_2c
#undef local_28
#undef local_24
#undef local_18
#undef local_14
}
