/* Rebuilt from lomse.exe FUN_004b28b0 @ 0x004b28b0 (291 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055ce58 (*(undefined *)0x0055ce58)
#define DAT_00583650 (*(int *)0x00583650)
#define DAT_005a7d8c (*(undefined4 *)0x005a7d8c)
#define FUN_0047f230 ((undefined4 (__thiscall *)(void *, void *, char *, int *, int, int, int))0x0047f230)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)
#define FUN_00497270 ((undefined4 (__thiscall *)(void *, int, int, uint, int, undefined2))0x00497270)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define _DAT_00584cd0 (*(undefined4 *)0x00584cd0)

#define LOM_SELF_004b28b0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004b28b0(void *this,undefined4 param_1)

{
  char *pcVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c[4];
#define local_1c (*(_t_local_1c *)(_fr + 0x4))

  DAT_00583650 = DAT_00583650 + 0x10;
  local_1c[3] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  pcVar1 = (char *)((int)this + 0x138);
  _DAT_00584cd0 = 0;
  *(undefined4 *)((int)this + 0x5e4) = 1;
  pcVar4 = pcVar1;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  FUN_0053a090(pcVar1,&DAT_0055ce58);
  uVar2 = DAT_005a7d8c;
  this_00 = (void *)((int)this + 0x4c0);
  *(undefined4 *)((int)this + 0x134) = param_1;
  *(undefined4 *)((int)this + 0x130) = uVar2;
  *(undefined4 *)((int)this + 0x19c) = 3;
  FUN_004952c0(this_00,0x280,0xe,1);
  FUN_00497270(this_00,0,0,*(uint *)((int)this + 0x4c4),*(int *)((int)this + 0x4c8),0);
  FUN_00497270(this_00,0,0,*(uint *)((int)this + 0x4c4),*(int *)((int)this + 0x4c8),1);
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0x27f;
  local_1c[3] = 0xe;
  FUN_0047f230(*(void **)((int)this + 0x518),this_00,pcVar1,local_1c,2,-1,0);
  DAT_00583650 = DAT_00583650 + -0x10;
  return;
#undef local_1c
}
