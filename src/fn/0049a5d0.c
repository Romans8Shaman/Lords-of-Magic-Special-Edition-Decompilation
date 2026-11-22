/* Rebuilt from lomse.exe op_addhotkey @ 0x0049a5d0 (491 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cc4 (*(undefined *)0x00584cc4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0049a340 ((uint (__thiscall *)(void *, int *))0x0049a340)
#define FUN_0049a500 ((undefined4 (__fastcall *)(undefined4 *))0x0049a500)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_0049a5d0 1
void __cdecl rb_0049a5d0(void *volatile param_1)

{
  void *this;
  int iVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_24;
  typedef uint _t_local_20;
  typedef float _t_local_1c;
  typedef uint _t_local_18;
  typedef uint _t_local_14;
  typedef float _t_local_10;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))

  FUN_0049a500(&local_18);
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_14 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_10 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_14 = 0;
    local_10 = local_1c;
  }
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 == 0) {
    if (((char)local_14 != '\x06') || ((local_14 & 0x100) != 0)) {
      *(undefined4 *)((int)this + 0x90) = 0x12;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      goto LAB_0049a67a;
    }
  }
  else {
LAB_0049a67a:
    local_14 = 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_20 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_1c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_20 = 0;
  }
  iVar1 = FUN_004026a0(&local_20,&local_18,&local_24,(float *)&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      local_1c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar3 = 0;
    }
    uVar3 = uVar3 & 0xff;
    fVar2 = local_1c;
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        fVar2 = __BC(float, (__BC(int, local_1c) >> 8));
      }
      else {
        if (uVar3 != 4) {
          FUN_00404ab0(this,0xe);
          goto LAB_0049a788;
        }
        lVar4 = __ftol((float10)local_1c);
        fVar2 = __BC(float, lVar4);
      }
    }
    if (fVar2 == 0.0) {
      local_18 = local_18 + 1000;
    }
    FUN_0049a340(&DAT_00584cc4,(int *)&local_18);
  }
LAB_0049a788:
  op_sunlight();
  return;
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
