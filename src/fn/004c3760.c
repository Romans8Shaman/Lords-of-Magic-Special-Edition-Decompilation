/* Rebuilt from lomse.exe op_freepow @ 0x004c3760 (88 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004c1320 ((undefined4 (__stdcall *)(int, undefined4, undefined4, undefined1))0x004c1320)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)

#define LOM_SELF_004c3760 1
void __cdecl rb_004c3760(void *vm)

{
  void *pvVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&iStack_4);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&vm);
    if (iVar2 != 0) {
      iVar2 = FUN_004c1cf0((int)vm);
      if (iVar2 != 0) {
        FUN_004c1320(*(int *)((int)vm + 0x28),0xffffffff,*(undefined4 *)(iStack_4 + 0x28),2);
      }
    }
  }
  return;
#undef iStack_4
}
