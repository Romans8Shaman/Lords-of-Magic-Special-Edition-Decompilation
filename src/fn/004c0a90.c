/* Rebuilt from lomse.exe op_setheirasleader @ 0x004c0a90 (122 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004c08c0 ((undefined4 (__thiscall *)(void *, int, int))0x004c08c0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_army_has_no_owner___0055d918 (*(char (*)[])0x0055d918)
#define s_setheirasleader_failed___not_an_h_0055d8f0 (*(char (*)[])0x0055d8f0)

#define LOM_SELF_004c0a90 1
void __cdecl rb_004c0a90(void *vm)

{
  void *this;
  int iVar1;
  undefined *this_00;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  this = vm;
  iVar1 = FUN_0041bf10(vm,(int *)&vm,&iStack_4);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)vm + 0x48);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if (this_00 == (undefined *)0x0) {
      FUN_004d41c0(this,s_army_has_no_owner___0055d918);
      return;
    }
    iVar1 = FUN_004c08c0(this_00,(int)vm,iStack_4);
    if (iVar1 == 0) {
      FUN_004d41c0(this,s_setheirasleader_failed___not_an_h_0055d8f0);
    }
  }
  return;
#undef iStack_4
}
