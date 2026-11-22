/* Rebuilt from lomse.exe op_canuserightartifact @ 0x0042c7a0 (223 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00428c40 ((int (__fastcall *)(int))0x00428c40)
#define FUN_0042c500 ((undefined4 (__thiscall *)(void *, int, int, int))0x0042c500)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00530200 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x00530200)
#define s_no_current_unit_00555e38 (*(char (*)[])0x00555e38)

#define LOM_SELF_0042c7a0 1
void __cdecl rb_0042c7a0(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
  typedef int _t_iStack_4;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  iVar1 = FUN_00530200(&DAT_00584ae8,&iStack_4,&iStack_8);
  if (iVar1 == 0) {
    FUN_004d41c0(vm,s_no_current_unit_00555e38);
  }
  else {
    this = (void *)FUN_00428c40(iStack_4 + 0xc4 + iStack_8 * 0x4c);
    if (this != (void *)0x0) {
      iVar1 = FUN_0042c500(this,*(int *)(iStack_4 + 0x28),iStack_8,1);
      if (*(int *)((int)vm + 0x54) != 0) {
        iVar3 = *(int *)((int)vm + 0x54) + -1;
        *(int *)((int)vm + 0x54) = iVar3;
        iVar2 = *(int *)((int)vm + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)(iVar1 != 0);
        return;
      }
      goto LAB_0042c85c;
    }
  }
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar2 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar2;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    return;
  }
LAB_0042c85c:
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
#undef iStack_8
#undef iStack_4
}
