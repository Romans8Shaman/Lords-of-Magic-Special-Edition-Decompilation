/* Rebuilt from lomse.exe op_reseteoturn @ 0x00488210 (274 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa160 (*(uint *)0x005aa160)
#define DAT_005aa164 (*(int * *)0x005aa164)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00487ed0 ((undefined4 (__stdcall *)(int, int))0x00487ed0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005007e0 ((undefined4 (__thiscall *)(void *, int))0x005007e0)

#define LOM_SELF_00488210 1
void __cdecl rb_00488210(void *vm)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  FUN_004d05e0(DAT_005a7b78,DAT_005aa160,DAT_005aa164);
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  puVar4 = &DAT_005af194;
  iVar2 = 0;
  do {
    if ((iVar2 < 0) || (0x1d83f < iVar2)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar4;
    }
    if (((puVar3 != (undefined *)0x0) && ((*(uint *)(puVar3 + 0x15d8) & 1) == 0)) &&
       (((byte)*(uint *)(puVar3 + 0x15d8) & 0x80) != 0x80)) {
      FUN_00487ed0(*(int *)(puVar3 + 0x15b0),uStack_10);
    }
    iVar2 = iVar2 + 0x1d84;
    puVar4 = puVar4 + 0x1d84;
  } while (iVar2 < 0xec20);
  FUN_005007e0(&DAT_00584ae8,1);
  return;
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
