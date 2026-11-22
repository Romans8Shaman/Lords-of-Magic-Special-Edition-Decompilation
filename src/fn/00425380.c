/* Rebuilt from lomse.exe op_getcurrentcombatdefendspell @ 0x00425380 (157 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00424d30 ((int (__thiscall *)(void *, int))0x00424d30)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00530200 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x00530200)

#define LOM_SELF_00425380 1
void __cdecl rb_00425380(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef void * _t_pvStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  iVar1 = FUN_00530200(&DAT_00584ae8,&pvStack_4,&iStack_8);
  if (iVar1 == 0) {
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
      return;
    }
  }
  else {
    iVar1 = FUN_00424d30(pvStack_4,iStack_8);
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      iVar2 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iVar1;
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef iStack_8
#undef pvStack_4
}
