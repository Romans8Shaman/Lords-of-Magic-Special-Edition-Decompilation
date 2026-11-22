/* Rebuilt from lomse.exe op_setwindowswaitcursorstate @ 0x00474ce0 (253 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583270 (*(undefined *)0x00583270)
#define DAT_0058327c (*(int *)0x0058327c)
#define DAT_005a9e04 (*(undefined4 *)0x005a9e04)
#define FUN_00474a60 ((undefined4 * (__thiscall *)(void *, undefined4 *))0x00474a60)
#define FUN_00474a90 ((undefined4 (__thiscall *)(void *, uint *))0x00474a90)
#define FUN_00474af0 ((undefined4 (__fastcall *)(void *))0x00474af0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_00583270 (*(undefined4 *)0x00583270)
#define _DAT_00583274 (*(undefined4 *)0x00583274)
#define _DAT_00583278 (*(undefined4 *)0x00583278)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00474ce0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_00474ce0(void *vm)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_c;
  typedef float _t_fStack_8;
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define fStack_8 (*(_t_fStack_8 *)(_fr + 0x8))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_8 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  fVar3 = fStack_8;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fVar3 = __BC(float, (__BC(int, fStack_8) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_8);
      fVar3 = __BC(float, lVar5);
    }
  }
  if (fVar3 == 0.0) {
    if (DAT_0058327c != 0) {
      FUN_00474a90(&DAT_005a9e04,(uint *)&DAT_00583270);
      DAT_0058327c = 0;
    }
    return;
  }
  if (DAT_0058327c == 0) {
    puVar2 = FUN_00474a60(&DAT_005a9e04,&uStack_c);
    _DAT_00583270 = *puVar2;
    _DAT_00583274 = puVar2[1];
    _DAT_00583278 = puVar2[2];
    DAT_0058327c = 1;
  }
  FUN_00474af0(&DAT_005a9e04);
  return;
#undef uStack_c
#undef fStack_8
}
