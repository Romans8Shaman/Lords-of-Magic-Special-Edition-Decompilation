/* Rebuilt from lomse.exe op_seteditboxfont @ 0x004deb10 (340 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_00493360 ((int (__thiscall *)(void *, int))0x00493360)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_seteditboxfont___no_edit_box_00572904 (*(char (*)[])0x00572904)
#define s_seteditboxfont___no_font_005728e8 (*(char (*)[])0x005728e8)

#define LOM_SELF_004deb10 1
void __cdecl rb_004deb10(void *vm)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar4 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) goto LAB_004dec3f;
      lVar5 = __ftol((float10)fStack_4);
      fVar4 = __BC(float, lVar5);
    }
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) {
LAB_004dec3f:
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar5);
    }
  }
  iVar2 = FUN_00493360(&DAT_005a7b50,__BC(int, fStack_4));
  if (iVar2 == 0) {
    FUN_004d41c0(vm,s_seteditboxfont___no_edit_box_00572904);
    return;
  }
  iVar3 = FUN_00492de0(&DAT_005a7b50,__BC(int, fVar4));
  if (iVar3 == 0) {
    FUN_004d41c0(vm,s_seteditboxfont___no_font_005728e8);
    return;
  }
  *(int *)(iVar2 + 0x14) = iVar3;
  return;
#undef fStack_4
}
