/* Rebuilt from lomse.exe op_centermilitaryunit @ 0x004e9a10 (255 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00406a80 ((int (__thiscall *)(void *, int, int))0x00406a80)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504b80 ((undefined4 (__fastcall *)(int))0x00504b80)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_0051ab30 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0051ab30)

#define LOM_SELF_004e9a10 1
void __cdecl rb_004e9a10(void *vm)

{
  void *pvVar1;
  int iVar2;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  if ((iVar2 == DAT_005aa7d4) || (iVar2 == DAT_005aadb0)) {
    iVar2 = FUN_00406a80(&DAT_005ae958,iVar2,(int)vm);
    FUN_0051ab30(&DAT_005876d0,iVar2 % DAT_005ae9c4,iVar2 / DAT_005ae9c4,0x140,0xc0);
    FUN_00504b80(0x584ae8);
    FUN_00504ce0(&DAT_00584ae8,1,0);
  }
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
