/* Rebuilt from lomse.exe FUN_00474f30 @ 0x00474f30 (376 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00474f30 1
void __thiscall rb_00474f30(void *this,int param_1)

{
  int *piVar1;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_6c;
  typedef undefined4 _t_local_68;
  typedef undefined4 _t_local_24;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define local_68 (*(_t_local_68 *)(_fr + 0x8))
#define local_24 (*(_t_local_24 *)(_fr + 0x4c))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x5c)) /* HAND FIX: DDSURFACEDESC.ddpfPixelFormat.dwRBitMask (orig [esp+0x5c] after callee-pop GetSurfaceDesc; Ghidra depth was 8 off) */
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x60)) /* HAND FIX: dwGBitMask */
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x64)) /* HAND FIX: dwBBitMask */
  
  local_6c = 0x6c;
  local_24 = 0x20;
  piVar1 = *(int **)((int)this + param_1 * 4 + 0x684);
  local_68 = 0x1000;
  ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(&local_6c)))(**(code **)(*piVar1 + 0x58)))(piVar1,&local_6c);
  if ((uStack_14 | 0x1f) != 0x1f) {
    *(undefined4 *)((int)this + 0x904) = 0xb;
    *(undefined4 *)((int)this + 0x90c) = 6;
    *(undefined4 *)((int)this + 0x914) = 0;
    *(undefined1 *)((int)this + 0x908) = 3;
    *(undefined1 *)((int)this + 0x910) = 3;
    *(undefined1 *)((int)this + 0x918) = 2;
    *(undefined2 *)((int)this + 0x91a) = 0xf800;
    *(undefined2 *)((int)this + 0x91c) = 0x7c0;
    *(undefined2 *)((int)this + 0x91e) = 0x3f;
    return;
  }
  if ((uStack_18 | 0x3e0) != 0x3e0) {
    *(undefined4 *)((int)this + 0x904) = 0xb;
    *(undefined4 *)((int)this + 0x90c) = 5;
    *(undefined4 *)((int)this + 0x914) = 0;
    *(undefined1 *)((int)this + 0x908) = 3;
    *(undefined1 *)((int)this + 0x910) = 2;
    *(undefined1 *)((int)this + 0x918) = 3;
    *(undefined2 *)((int)this + 0x91a) = 0xf800;
    *(undefined2 *)((int)this + 0x91c) = 0x7e0;
    *(undefined2 *)((int)this + 0x91e) = 0x1f;
    return;
  }
  *(undefined4 *)((int)this + 0x904) = 10;
  *(undefined4 *)((int)this + 0x90c) = 5;
  *(undefined4 *)((int)this + 0x914) = 0;
  if ((uStack_1c | 0x7c00) == 0x7c00) {
    *(undefined2 *)((int)this + 0x91a) = 0x7c00;
    *(undefined1 *)((int)this + 0x908) = 3;
    *(undefined1 *)((int)this + 0x910) = 3;
    *(undefined1 *)((int)this + 0x918) = 3;
  }
  else {
    *(undefined1 *)((int)this + 0x908) = 2;
    *(undefined1 *)((int)this + 0x910) = 3;
    *(undefined1 *)((int)this + 0x918) = 3;
    *(undefined2 *)((int)this + 0x91a) = 0xfc00;
  }
  *(undefined2 *)((int)this + 0x91c) = 0x3e0;
  *(undefined2 *)((int)this + 0x91e) = 0x1f;
  return;
#undef local_6c
#undef local_68
#undef local_24
#undef uStack_1c
#undef uStack_18
#undef uStack_14
}
