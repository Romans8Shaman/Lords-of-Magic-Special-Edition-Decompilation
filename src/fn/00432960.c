/* Rebuilt from lomse.exe op_startbartersession @ 0x00432960 (65 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cd4 (*(undefined4 *)0x00584cd4)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00432360 ((undefined4 (__thiscall *)(void *, int, int))0x00432360)

#define LOM_SELF_00432960 1
void __cdecl rb_00432960(void *vm)

{
  void *pvVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_4;
#define iStack_4 (*(_t_iStack_4 *)(_fr + 0x4))
  
  pvVar1 = vm;
  iVar2 = FUN_0041be40(vm,&vm);
  if (iVar2 != 0) {
    iVar2 = FUN_0041be40(pvVar1,&iStack_4);
    if (iVar2 != 0) {
      FUN_00432360(&DAT_00584cd4,iStack_4,(int)vm);
    }
  }
  return;
#undef iStack_4
}
