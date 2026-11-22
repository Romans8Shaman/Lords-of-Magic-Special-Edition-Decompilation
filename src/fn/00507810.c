/* Rebuilt from lomse.exe op_armyspyarmyartifacts @ 0x00507810 (62 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00507b00 ((undefined4 (__thiscall *)(void *, int))0x00507b00)

#define LOM_SELF_00507810 1
void __cdecl rb_00507810(void *vm)

{
  void *pvVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&pvStack_4);
    if (iVar2 != 0) {
      FUN_00507b00(pvStack_4,*(int *)((int)vm + 0x28));
    }
  }
  return;
#undef pvStack_4
}
