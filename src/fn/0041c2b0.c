/* Rebuilt from lomse.exe op_nsetarmydata @ 0x0041c2b0 (477 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041c490 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0041c490)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_Can_t_nset_this_army_s_data_00555994 (*(char (*)[])0x00555994)
#define s_no_army_00555960 (*(char (*)[])0x00555960)

#define LOM_SELF_0041c2b0 1
void __cdecl rb_0041c2b0(void *vm)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_10;
  typedef float _t_fStack_c;
  typedef float _t_fStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x4))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uStack_10 = 0;
    fStack_c = fStack_4;
  }
  if ((char)uStack_10 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 1) {
      fVar4 = fStack_4;
    }
    else if (uVar2 == 2) {
      fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar2 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fStack_4);
      fVar4 = __BC(float, lVar5);
    }
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        fStack_4 = __BC(float, (__BC(int, fStack_4) >> 8));
      }
      else {
        if (uVar2 != 4) {
          FUN_00404ab0(vm,0xe);
          return;
        }
        lVar5 = __ftol((float10)fStack_4);
        fStack_4 = __BC(float, lVar5);
      }
    }
    if ((-8 < __BC(int, fStack_4)) && (__BC(int, fStack_4) < -2)) {
      FUN_004d41c0(vm,s_Can_t_nset_this_army_s_data_00555994);
      return;
    }
    puVar3 = FUN_00485080(&DAT_005aa12c,__BC(int, fStack_4),0x2f);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004d41c0(vm,s_no_army_00555960);
      return;
    }
    FUN_0041c490(__BC(undefined4, fStack_4),__BC(undefined4, fVar4),uStack_10,__BC(undefined4, fStack_c));
  }
  return;
#undef uStack_10
#undef fStack_c
#undef fStack_4
}
