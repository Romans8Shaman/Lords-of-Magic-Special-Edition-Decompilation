/* Rebuilt from lomse.exe op_filldoodad @ 0x004dc720 (429 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_00495a40 ((undefined4 (__fastcall *)(int *))0x00495a40)
#define FUN_00496250 ((undefined4 (__thiscall *)(void *, int *, int, int, int, int))0x00496250)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_bad_doodad_s__0057280c (*(char (*)[])0x0057280c)
#define s_no_doodad_s__005727fc (*(char (*)[])0x005727fc)
#define s_no_page_0057260c (*(char (*)[])0x0057260c)

#define LOM_SELF_004dc720 1
void __cdecl rb_004dc720(void *vm)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar5 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar5 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) goto LAB_004dc8a8;
      lVar6 = __ftol((float10)fStack_4);
      fVar5 = __BC(float, lVar6);
    }
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
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
LAB_004dc8a8:
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
  piVar2 = (int *)FUN_00492760(&DAT_005a7b50,__BC(int, fVar5));
  piVar3 = (int *)FUN_00492760(&DAT_005a7b50,__BC(int, fStack_4));
  if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
    FUN_004d41c0(vm,s_no_doodad_s__005727fc);
    return;
  }
  iVar4 = FUN_00495a40(piVar2);
  if ((iVar4 == 0) || (iVar4 = FUN_00495a40(piVar3), iVar4 == 0)) {
    FUN_004d41c0(vm,s_bad_doodad_s__0057280c);
    return;
  }
  if ((void *)*piVar3 == (void *)0x0) {
    FUN_004d41c0(vm,s_no_page_0057260c);
    return;
  }
  FUN_00496250((void *)*piVar3,piVar2,piVar3[1],piVar3[2],piVar3[3],piVar3[4]);
  return;
#undef fStack_4
}
