/* Rebuilt from lomse.exe op_addartifacttowonlist @ 0x00428920 (268 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_00428840 ((int (__thiscall *)(void *, int))0x00428840)
#define FUN_004288e0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004288e0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_more_room_in_list_of_artifact_00555d78 (*(char (*)[])0x00555d78)
#define s_no_such_artifact_00555da0 (*(char (*)[])0x00555da0)

#define LOM_SELF_00428920 1
void __cdecl rb_00428920(void *volatile param_1)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c[2];
  typedef float _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar4 = local_4;
  }
  else if (uVar3 == 2) {
    fVar4 = __BC(float, (__BC(int, local_4) >> 8));
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    lVar5 = __ftol((float10)local_4);
    fVar4 = __BC(float, lVar5);
  }
  iVar1 = FUN_0041bf10(this,local_c,(int *)&param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00428840((void *)(local_c[0] + 0xc4 + (int)param_1 * 0x4c),__BC(int, fVar4));
    if (puVar2 == (undefined4 *)0x0) {
      FUN_004d41c0(this,s_no_such_artifact_00555da0);
      return;
    }
    iVar1 = FUN_004288e0(&DAT_005aa12c,puVar2);
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_no_more_room_in_list_of_artifact_00555d78);
    }
  }
  return;
#undef local_c
#undef local_4
}
