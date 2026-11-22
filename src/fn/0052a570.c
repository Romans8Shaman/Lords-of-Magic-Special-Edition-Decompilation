/* Rebuilt from lomse.exe op_turnstoheal @ 0x0052a570 (413 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00522000 ((undefined4 (__thiscall *)(void *, int *, int *))0x00522000)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_0052a570 1
void __cdecl rb_0052a570(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
  typedef int _t_iStack_c;
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x4))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x8))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0xc))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x10))
#define iStack_c (*(_t_iStack_c *)(_fr + 0x14))
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x18))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x1c))
  
  pvVar1 = vm;
  iVar2 = FUN_0041bf10(vm,&iStack_1c,(int *)&vm);
  if (iVar2 != 0) {
    iVar2 = 0;
    FUN_00522000((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),&iStack_c,&iStack_10);
    if (iStack_c < iStack_10) {
      iVar2 = 1;
      iStack_8 = 0;
      FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x2e,&iStack_8);
      iStack_18 = 0;
      iStack_14 = 0;
      iStack_4 = 0;
      FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x3d,&iStack_18);
      if ((*(uint *)(iStack_1c + 0x30) & 0x1c00000) != 0) {
        FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x3f,&iStack_14);
      }
      iStack_18 = iStack_18 + iStack_14;
      FUN_00527e90((void *)(iStack_1c + 0xc4 + (int)vm * 0x4c),0x3e,&iStack_4);
      iVar3 = iStack_18;
      if (*(int *)(iStack_1c + 0xd0 + (int)vm * 0x4c) != iStack_8) {
        iVar3 = iStack_4;
      }
      iVar3 = (iStack_10 - iStack_c) - iVar3;
      if (iStack_18 < 1) {
        iVar2 = -1;
      }
      else if (0 < iVar3) {
        iVar2 = (iVar3 + -1 + iStack_18) / iStack_18 + 1;
      }
    }
    if (*(int *)((int)pvVar1 + 0x54) != 0) {
      iVar3 = *(int *)((int)pvVar1 + 0x50);
      iVar4 = *(int *)((int)pvVar1 + 0x54) + -1;
      *(int *)((int)pvVar1 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef iStack_10
#undef iStack_c
#undef iStack_8
#undef iStack_4
}
