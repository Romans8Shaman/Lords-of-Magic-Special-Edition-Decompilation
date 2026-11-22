/* Rebuilt from lomse.exe op_playvideo_stretch @ 0x00531500 (438 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058516c (*(undefined4 *)0x0058516c)
#define DAT_00585174 (*(int * *)0x00585174)
#define DAT_005867c0 (*(undefined4 *)0x005867c0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00531120 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00531120)
#define _DAT_005869dc (*(undefined4 *)0x005869dc)
#define _DAT_005869e0 (*(undefined4 *)0x005869e0)
#define _DAT_005869e4 (*(undefined4 *)0x005869e4)
#define _DAT_005869f0 (*(undefined4 *)0x005869f0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_ERROR___gt__SF_playvideo_005743ec (*(char (*)[])0x005743ec)
#define s_no_filename_0055cfb0 (*(char (*)[])0x0055cfb0)

#define LOM_SELF_00531500 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_00531500(void *vm)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float in_stack_8;
  longlong lVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_14;
  typedef undefined4 _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_14 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    in_stack_8 = fStack_14;
  }
  else if (uVar3 == 2) {
    in_stack_8 = __BC(float, (__BC(int, fStack_14) >> 8));
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)fStack_14);
    in_stack_8 = __BC(float, lVar4);
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar2 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_14 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar2 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar2 != '\b') {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      fStack_14 = 0.0;
    }
  }
  else {
    fStack_14 = 0.0;
  }
  if (fStack_14 == 0.0) {
    FUN_004d41c0(vm,s_no_filename_0055cfb0);
    return;
  }
  _DAT_005869e0 = 0;
  _DAT_005869dc = 0;
  _DAT_005869e4 = 0;
  uStack_c = 0;
  uStack_4 = 0x1e0;
  uStack_10 = 0;
  uStack_8 = 0x280;
  ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(0), __typeof__(0), __typeof__(DAT_0058516c), __typeof__(&uStack_10), __typeof__(0)))(**(code **)(*DAT_00585174 + 0x1c)))(DAT_00585174,0,0,DAT_0058516c,&uStack_10,0);
  _DAT_005869f0 = 0xffffffff;
  iVar1 = FUN_00531120(&DAT_005867c0,__BC(undefined4, fStack_14),__BC(undefined4, in_stack_8));
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_ERROR___gt__SF_playvideo_005743ec);
  }
  return;
#undef fStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
