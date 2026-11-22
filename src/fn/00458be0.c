/* Rebuilt from lomse.exe op_closecitygate @ 0x00458be0 (208 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00455850 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4 *, int *, undefined4 *, undefined4 *))0x00455850)
#define FUN_00457970 ((undefined4 (__fastcall *)(void *))0x00457970)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00458be0 1
void __cdecl rb_00458be0(void *vm)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_18;
  typedef int _t_iStack_14;
  typedef undefined4 _t_uStack_10;
  typedef undefined4 _t_auStack_c[2];
  typedef void * _t_pvStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define auStack_c (*(_t_auStack_c *)(_fr + 0xc))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x14))
  
  pvVar3 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvStack_4 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    pvVar3 = pvStack_4;
  }
  else if (uVar2 == 2) {
    pvVar3 = (void *)((int)pvStack_4 >> 8);
  }
  else {
    if (uVar2 != 4) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      return;
    }
    lVar4 = __ftol((float10)__BC(float, pvStack_4));
    pvVar3 = (void *)lVar4;
  }
  FUN_00455850(&DAT_005ae8e8,auStack_c,&uStack_10,&iStack_14,&uStack_18,&vm);
  if (pvVar3 == vm) {
    FUN_00457970(&DAT_005ae958);
  }
  return;
#undef uStack_18
#undef iStack_14
#undef uStack_10
#undef auStack_c
#undef pvStack_4
}
