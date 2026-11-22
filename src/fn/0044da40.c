/* Rebuilt from lomse.exe op_getvirtualresources @ 0x0044da40 (242 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00586a3c (*(void * *)0x00586a3c)
#define DAT_00586a40 (*(void * *)0x00586a40)
#define DAT_00586a44 (*(void * *)0x00586a44)
#define DAT_00586a48 (*(void * *)0x00586a48)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0044da40 1
void __cdecl rb_0044da40(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_0044db08;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar5);
    }
  }
  pvVar4 = DAT_00586a48;
  if (__BC(int, fStack_4) != 2) {
    pvVar4 = vm;
  }
  if (__BC(int, fStack_4) == 3) {
    pvVar4 = DAT_00586a44;
  }
  if (fStack_4 == 0.0) {
    pvVar4 = DAT_00586a40;
  }
  if (__BC(int, fStack_4) == 1) {
    pvVar4 = DAT_00586a3c;
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(void **)(iVar1 + 4 + iVar2 * 8) = pvVar4;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_0044db08:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef fStack_4
}
