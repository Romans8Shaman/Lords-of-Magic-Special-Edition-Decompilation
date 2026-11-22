/* Rebuilt from lomse.exe op_free @ 0x004dc600 (284 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00491c40 ((undefined4 (__thiscall *)(void *, int))0x00491c40)
#define FUN_00491ec0 ((int (__thiscall *)(void *, int))0x00491ec0)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00500570 ((undefined4 (__thiscall *)(void *, uint))0x00500570)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004dc600 1
void __cdecl rb_004dc600(void *vm)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = __BC(float, lVar6);
    }
  }
  iVar1 = FUN_005005f0(&DAT_00584ae8,__BC(uint, fStack_4));
  if (iVar1 != 0) {
    FUN_00500570(&DAT_00584ae8,__BC(uint, fStack_4));
    return;
  }
  iVar2 = FUN_00491ec0(&DAT_005a7b50,__BC(int, fStack_4));
  iVar1 = DAT_005a7b50;
  if ((iVar2 != 0) && (iVar5 = 0, 0 < (int)DAT_005a7b50)) {
    do {
      piVar3 = (int *)FUN_00492760(&DAT_005a7b50,iVar5);
      if ((piVar3 != (int *)0x0) && (*piVar3 == iVar2)) {
        *piVar3 = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  FUN_00491c40(&DAT_005a7b50,__BC(int, fStack_4));
  return;
#undef fStack_4
}
