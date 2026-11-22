/* Rebuilt from lomse.exe FUN_0052b2a0 @ 0x0052b2a0 (268 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0052b260 ((undefined4 (__fastcall *)(int *))0x0052b260)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0052b2a0 1
undefined4 __thiscall rb_0052b2a0(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14;
  typedef int _t_local_10;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  FUN_0052b260(this);
  uVar1 = FUN_005397f0((char *)&local_10,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = FUN_005397f0((char *)&local_14,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  if (0xc < local_14) {
    return 0;
  }
  if (0 < local_10) {
    iVar3 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    if (0 < local_10) {
      while( true ) {
        puVar2 = (undefined4 *)Ordinal_401(0x10,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (puVar2 == (undefined4 *)0x0) {
          return 0;
        }
        puVar2[3] = *(undefined4 *)this;
        *(undefined4 **)this = puVar2;
        uVar1 = FUN_005397f0((char *)&local_c,local_14,1,param_1);
        if (uVar1 != 1) break;
        iVar3 = iVar3 + 1;
        *puVar2 = local_c;
        puVar2[1] = local_8;
        puVar2[2] = local_4;
        if (local_10 <= iVar3) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
