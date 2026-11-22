/* Rebuilt from lomse.exe op_championbrainnotify @ 0x0040f900 (277 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeed0 (*(undefined *)0x005aeed0)
#define FUN_0040eb30 ((undefined4 (__fastcall *)(undefined4 *))0x0040eb30)
#define FUN_0040eb60 ((undefined4 (__stdcall *)(void))0x0040eb60)
#define FUN_0040f070 ((undefined4 (__stdcall *)(undefined4 *))0x0040f070)
#define FUN_0040f4e0 ((int (__thiscall *)(void *, int))0x0040f4e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0040f900 1
void __cdecl rb_0040f900(void *vm)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_60;
  typedef undefined4 _t_uStack_5c;
  typedef float _t_fStack_58;
  typedef undefined4 _t_uStack_4c;
#define fStack_60 (*(_t_fStack_60 *)(_fr + 0x0))
#define uStack_5c (*(_t_uStack_5c *)(_fr + 0x4))
#define fStack_58 (*(_t_fStack_58 *)(_fr + 0x8))
#define uStack_4c (*(_t_uStack_4c *)(_fr + 0x14))

  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_60 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
      fStack_60 = __BC(float, (__BC(int, fStack_60) >> 8));
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar4 = __ftol((float10)fStack_60);
      fStack_60 = __BC(float, lVar4);
    }
  }
  puVar2 = (undefined4 *)FUN_0040f4e0(&DAT_005aeed0,__BC(int, fStack_60));
  FUN_0040eb30(&uStack_5c);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4c = 2;
    puVar2 = &uStack_5c;
    fStack_58 = fStack_60;
  }
  FUN_0040f070(puVar2);
  FUN_0040eb60();
  return;
#undef fStack_60
#undef uStack_5c
#undef fStack_58
#undef uStack_4c
}
