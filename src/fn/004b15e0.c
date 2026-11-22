/* Rebuilt from lomse.exe FUN_004b15e0 @ 0x004b15e0 (335 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555148 (*(int *)0x00555148)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004b15e0 1
void __thiscall rb_004b15e0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x4))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x8))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0xc))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x10))
  
  iVar1 = FUN_004205e0(param_2);
  if (iVar1 == 0) {
    iStack_18 = DAT_00555148;
  }
  else {
    iStack_18 = FUN_00420600(param_2);
  }
  iVar1 = *(int *)((int)this + 0x6c);
  iVar4 = *(int *)(param_2 + 0x1c) % iVar1;
  iVar2 = *(int *)(param_2 + 0x1c) / iVar1;
  iStack_1c = iVar2 - iStack_18;
  if (iStack_1c < 0) {
    iStack_1c = 0;
  }
  iStack_14 = iVar2 + iStack_18;
  if (*(int *)((int)this + 0x70) <= iStack_14) {
    iStack_14 = *(int *)((int)this + 0x70) + -1;
  }
  iStack_10 = iVar4 - iStack_18;
  if (iStack_10 < 0) {
    iStack_10 = 0;
  }
  iStack_18 = iVar4 + iStack_18;
  if (iVar1 <= iStack_18) {
    iStack_18 = iVar1 + -1;
  }
  if (iStack_1c < iStack_14) {
    do {
      if (iStack_10 < iStack_18) {
        iVar1 = iStack_10;
        do {
          iVar5 = iStack_1c * *(int *)((int)this + 0x6c) + iVar1;
          lVar6 = __ftol(SQRT((float10)((iVar1 - iVar4) * (iVar1 - iVar4) +
                                       (iStack_1c - iVar2) * (iStack_1c - iVar2))));
          if ((int)lVar6 < 3) {
            iVar3 = 6;
          }
          else {
            iVar3 = ((5 < (int)lVar6) - 1 & 2) + 2;
          }
          if (iVar3 + (uint)*(byte *)(iVar5 + param_1) < 0x100) {
            *(byte *)(iVar5 + param_1) = (char)iVar3 + *(byte *)(iVar5 + param_1);
          }
          else {
            *(undefined1 *)(iVar5 + param_1) = 0xff;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iStack_18);
      }
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < iStack_14);
  }
  return;
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef iStack_10
}
