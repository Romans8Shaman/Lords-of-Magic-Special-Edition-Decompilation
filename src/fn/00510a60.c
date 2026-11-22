/* Rebuilt from lomse.exe op_setterrainspriteflagoverride @ 0x00510a60 (304 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050cd20 ((undefined4 (__cdecl *)(void *, uint *))0x0050cd20)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00510a60 1
void __cdecl rb_00510a60(void *vm)

{
  void *pvVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_auStack_c[2];
  typedef float _t_fStack_4;
#define auStack_c (*(_t_auStack_c *)(_fr + 0x4))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  fVar5 = fStack_4;
  if (uVar3 == 1) {
LAB_00510ad7:
    (*(uchar *)((uchar *)&vm + 0)) = SUB41(fVar5,0);
  }
  else {
    if (uVar3 == 2) {
      fVar5 = __BC(float, (__BC(int, fStack_4) >> 8));
      goto LAB_00510ad7;
    }
    if (uVar3 != 4) goto LAB_00510b6c;
    lVar6 = __ftol((float10)fStack_4);
    (*(uchar *)((uchar *)&vm + 0)) = (undefined1)lVar6;
  }
  if (*(int *)((int)pvVar1 + 0x54) < *(int *)((int)pvVar1 + 0x58)) {
    iVar4 = *(int *)((int)pvVar1 + 0x54) + 1;
    *(int *)((int)pvVar1 + 0x54) = iVar4;
    uVar3 = *(uint *)(*(int *)((int)pvVar1 + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)pvVar1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    uVar2 = SUB41(fStack_4,0);
  }
  else if (uVar3 == 2) {
    uVar2 = (undefined1)(__BC(uint, fStack_4) >> 8);
  }
  else {
    if (uVar3 != 4) {
LAB_00510b6c:
      *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
      FUN_004d4550(pvVar1);
      *(undefined4 *)((int)pvVar1 + 0x90) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      return;
    }
    lVar6 = __ftol((float10)fStack_4);
    uVar2 = (undefined1)lVar6;
  }
  iVar4 = FUN_0050cd20(pvVar1,auStack_c);
  if (iVar4 != 0) {
    *(undefined1 *)(auStack_c[0] + 0x4c) = uVar2;
    *(undefined1 *)(auStack_c[0] + 0x4d) = (*(uchar *)((uchar *)&vm + 0));
  }
  return;
#undef auStack_c
#undef fStack_4
}
