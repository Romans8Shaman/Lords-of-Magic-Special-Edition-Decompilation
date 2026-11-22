/* Rebuilt from lomse.exe FUN_004d4a10 @ 0x004d4a10 (252 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d2ac0 ((uint (__thiscall *)(void *, char, int *))0x004d2ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004d4b10 ((undefined4 (__thiscall *)(void *, undefined4 *, uint *))0x004d4b10)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_scan_failed___s__line__d_column___0055e6c8 (*(char (*)[])0x0055e6c8)
#define s_scan_failed__line__d_column__d_0055e6f0 (*(char (*)[])0x0055e6f0)

#define LOM_SELF_004d4a10 1
undefined4 __thiscall rb_004d4a10(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uchar _fr[0x3f8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_3f0;
  typedef int * _t_local_3ec;
  typedef char _t_local_3e8[1000];
#define local_3f0 (*(_t_local_3f0 *)(_fr + 0x0))
#define local_3ec (*(_t_local_3ec *)(_fr + 0x4))
#define local_3e8 (*(_t_local_3e8 *)(_fr + 0x8))
  
  FUN_004d4b10(this,&local_3f0,param_1);
  uVar2 = 0;
  if (*(int *)((int)this + 0x90) == 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_3ec = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    FUN_004d05e0(this,uVar2,local_3ec);
    FUN_004d2ac0(this,(char)uVar2,local_3ec);
    return 1;
  }
  if (*(uint *)((int)this + 0x874) == 0) {
    FUN_0053a090(local_3e8,s_scan_failed__line__d_column__d_0055e6f0,*(uint *)((int)this + 0x878),
                 *(undefined4 *)((int)this + 0x87c));
  }
  else {
    FUN_0053a090(local_3e8,s_scan_failed___s__line__d_column___0055e6c8,*(uint *)((int)this + 0x874)
                 ,*(undefined4 *)((int)this + 0x878),*(undefined4 *)((int)this + 0x87c));
  }
  if (*(int *)((int)this + 0xa4) == 0) {
    FUN_004d4550(this);
  }
  FUN_004d41c0(this,local_3e8);
  return 0;
#undef local_3f0
#undef local_3ec
#undef local_3e8
}
