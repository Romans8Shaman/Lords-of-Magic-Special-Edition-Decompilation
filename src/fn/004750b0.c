/* Rebuilt from lomse.exe FUN_004750b0 @ 0x004750b0 (304 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004750b0 1
undefined4 __thiscall
rb_004750b0(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_6c;
  typedef undefined4 _t_local_68;
  typedef undefined4 _t_uStack_64;
  typedef undefined4 _t_uStack_60;
  typedef undefined4 _t_uStack_24;
  typedef undefined4 _t_uStack_20;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef undefined4 _t_local_10;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_4;
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define local_68 (*(_t_local_68 *)(_fr + 0x8))
#define uStack_64 (*(_t_uStack_64 *)(_fr + 0xc))
#define uStack_60 (*(_t_uStack_60 *)(_fr + 0x10))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4c))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x50))
#define local_18 (*(_t_local_18 *)(_fr + 0x58))
#define local_14 (*(_t_local_14 *)(_fr + 0x5c))
#define local_10 (*(_t_local_10 *)(_fr + 0x60))
#define local_c (*(_t_local_c *)(_fr + 0x64))
#define local_4 (*(_t_local_4 *)(_fr + 0x6c))
  
  puVar1 = (undefined4 *)((int)this + param_1 * 4 + 0x684);
  piVar2 = *(int **)((int)this + param_1 * 4 + 0x684);
  if (piVar2 != (int *)0x0) {
    ((undefined4 (__stdcall *)(__typeof__(piVar2)))(**(code **)(*piVar2 + 8)))(piVar2);
    *puVar1 = 0;
  }
  if (param_4 == 8) {
    local_18 = 8;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_6c = 0x6c;
    local_68 = 0x1007;
    local_4 = 0x840;
    uStack_60 = param_2;
    uStack_64 = param_3;
    uStack_24 = 0x20;
    uStack_20 = 0x60;
    iVar3 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x680)), __typeof__(&local_6c), __typeof__(puVar1), __typeof__(0)))(**(code **)(**(int **)((int)this + 0x680) + 0x18)))
                      (*(int **)((int)this + 0x680),&local_6c,puVar1,0);
    if (iVar3 != 0) {
      return 0;
    }
  }
  if (param_4 == 0x10) {
    local_6c = 0x6c;
    local_4 = 0x840;
    uStack_60 = param_2;
    uStack_64 = param_3;
    /* v1.5: a non-16-bpp real primary is stashed at +0x900 — request RGB565
     * explicitly so offscreens (and the fake primary) stay 16-bit. */
    if (*(int *)((int)this + 0x900) != 0) {
      local_68 = 0x1007;
      uStack_24 = 0x20;
      uStack_20 = 0x40;
      local_18 = 0x10;
      local_14 = 0xf800;
      local_10 = 0x7e0;
      local_c = 0x1f;
    }
    else {
      local_68 = 7;
    }
    iVar3 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x680)), __typeof__(&local_6c), __typeof__(puVar1), __typeof__(0)))(**(code **)(**(int **)((int)this + 0x680) + 0x18)))
                      (*(int **)((int)this + 0x680),&local_6c,puVar1,0);
    if (iVar3 != 0) {
      return 0;
    }
  }
  puVar1 = (undefined4 *)((int)this + param_1 * 0x6c + 0x6e4);
  puVar4 = puVar1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar1 = 0x6c;
  return 1;
#undef local_6c
#undef local_68
#undef uStack_64
#undef uStack_60
#undef uStack_24
#undef uStack_20
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_4
}
